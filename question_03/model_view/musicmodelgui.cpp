#include "musicmodelgui.h"

#include <QDoubleSpinBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpinBox>
#include <QTextEdit>
#include <QVBoxLayout>

MusicModelGui::MusicModelGui(QWidget *parent)
    : QWidget(parent), edtComposer(new QLineEdit), edtAlbumTitle(new QLineEdit),
      edtCost(new QDoubleSpinBox), edtRating(new QSpinBox),
      edtText(new QTextEdit), btnAdd(new QPushButton("Add")) {
  setWindowTitle("Music");
  setupGUI();
}

void MusicModelGui::setupGUI() {
  // Main Layout
  QVBoxLayout *mainLayout(new QVBoxLayout(this));

  QHBoxLayout *layout = new QHBoxLayout;

  //  Composer
  QVBoxLayout *composerLayout = new QVBoxLayout;
  QLabel *lblComposer(new QLabel("Composer"));
  composerLayout->addWidget(lblComposer);
  composerLayout->addWidget(edtComposer);

  //  Album Title
  QVBoxLayout *albumTitleLayout = new QVBoxLayout;
  QLabel *lblTitle(new QLabel("Album Title"));
  albumTitleLayout->addWidget(lblTitle);
  albumTitleLayout->addWidget(edtAlbumTitle);

  // Cost
  QVBoxLayout *costLayout = new QVBoxLayout;
  QLabel *lblCost(new QLabel("Cost(R)"));
  costLayout->addWidget(lblCost);
  costLayout->addWidget(edtCost);

  // Rating
  QVBoxLayout *ratingLayout = new QVBoxLayout;
  QLabel *lblRating(new QLabel("Rating"));
  ratingLayout->addWidget(lblRating);
  ratingLayout->addWidget(edtRating);

  // Add Button
  QVBoxLayout *btnLayout = new QVBoxLayout;
  QLabel *lblBtn(new QLabel(""));
  btnLayout->addWidget(lblBtn);
  btnLayout->addWidget(btnAdd);

  layout->addLayout(composerLayout);
  layout->addLayout(albumTitleLayout);
  layout->addLayout(costLayout);
  layout->addLayout(ratingLayout);
  layout->addLayout(btnLayout);

  // Main Layout
  mainLayout->addLayout(layout);
  mainLayout->addWidget(edtText);
}
