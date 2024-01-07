#ifndef MUSICMODELGUI_H
#define MUSICMODELGUI_H

#include <QWidget>

class QTextEdit;
class QLabel;
class QDoubleSpinBox;
class QPushButton;
class QLineEdit;
class QSpinBox;
class QVBoxLayout;
class QHBoxLayout;

class MusicModelGui : public QWidget {
  Q_OBJECT
public:
  explicit MusicModelGui(QWidget *parent = nullptr);

signals:

private:
  void setupGUI();

  QLineEdit *edtComposer;
  QLineEdit *edtAlbumTitle;
  QDoubleSpinBox *edtCost;
  QSpinBox *edtRating;
  QPushButton *btnAdd;
  QTextEdit *edtText;
};

#endif // MUSICMODELGUI_H
