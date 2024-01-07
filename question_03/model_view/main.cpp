#include "musicmodel.h"
#include "musicmodelgui.h"
#include <QApplication>
#include <QTableView>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  QTableView tableView;
  MusicModel musicModel;
  tableView.setModel(&musicModel);
  tableView.show();

  MusicModelGui gui;
  gui.show();

  return a.exec();
}
