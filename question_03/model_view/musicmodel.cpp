#include "musicmodel.h"

MusicModel::MusicModel(QObject *parent) : QAbstractTableModel(parent) {}

MusicModel::~MusicModel()
{

}

int MusicModel::rowCount(const QModelIndex &parent) const { return ROWS; }

int MusicModel::columnCount(const QModelIndex &parent) const { return COLS; }

QVariant MusicModel::data(const QModelIndex &index, int role) const {
  if (role == Qt::DisplayRole && checkIndex(index))
    return m_gridData[index.row()][index.column()];
  return QVariant();
}

QVariant MusicModel::headerData(int section, Qt::Orientation orientation,
                                int role) const {
  if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
    switch (section) {
    case 0:
      return QString("Composer");
      break;
    case 1:
      return QString("Album title");
      break;
    case 2:
      return QString("Cost(R)");
      break;
    case 3:
      return QString("Rating");
      break;
    }
  }
  return QVariant();
}

bool MusicModel::setData(const QModelIndex &index, const QVariant &value,
                         int role) {
  if (role == Qt::EditRole) {
    if (!checkIndex(index))
      return false;

    //    save value form the editor
    m_gridData[index.row()][index.column()] = value.toString();

    //    build and emit a joined string for presentation purposes only
    QString result;
    for (int row = 0; row < ROWS; row++) {
      for (int col = 0; col < COLS; col++)
        result += m_gridData[row][col] + ' ';
    }
    emit editCompleted(result);
    return true;
  }
  return false;
}

Qt::ItemFlags MusicModel::flags(const QModelIndex &index) const {
  return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
}
