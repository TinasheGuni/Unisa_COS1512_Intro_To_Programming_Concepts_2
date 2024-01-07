#ifndef MUSICMODEL_H
#define MUSICMODEL_H

#include <QAbstractTableModel>
#include <QObject>

const int COLS = 4;
const int ROWS = 2;

class MusicModel : public QAbstractTableModel {
  Q_OBJECT
public:
  explicit MusicModel(QObject *parent = nullptr);
  ~MusicModel();

  int rowCount(const QModelIndex &parent = QModelIndex()) const override;
  int columnCount(const QModelIndex &parent = QModelIndex()) const override;
  QVariant data(const QModelIndex &index,
                int role = Qt::DisplayRole) const override;
  QVariant headerData(int section, Qt::Orientation orientation,
                      int role) const override;
  bool setData(const QModelIndex &index, const QVariant &value,
               int role = Qt::EditRole) override;
  Qt::ItemFlags flags(const QModelIndex &index) const override;

private:
  QString m_gridData[ROWS][COLS];

signals:
  void editCompleted(const QString &);
};

#endif // MUSICMODEL_H
