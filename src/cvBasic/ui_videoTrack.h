/********************************************************************************
** Form generated from reading UI file 'videoTrack.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOTRACK_H
#define UI_VIDEOTRACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_videoTrakWindow
{
public:
  QWidget* centralWidget;
  QGridLayout* gridLayout;
  QSpinBox* vminBox;
  QSpinBox* smaxBox;
  QSlider* horizontalSlider_5;
  QLabel* label_2;
  QSpinBox* hminBox;
  QPushButton* addButton;
  QSlider* horizontalSlider_6;
  QLabel* label_3;
  QSlider* horizontalSlider_3;
  QLabel* label_6;
  QSlider* horizontalSlider;
  QSpinBox* sminBox;
  QSlider* horizontalSlider_2;
  QLabel* label;
  QSpinBox* vmaxBox;
  QLabel* label_4;
  QLabel* label_7;
  QSlider* horizontalSlider_4;
  QSpinBox* hmaxBox;
  QLabel* label_5;
  QLineEdit* nameLineEdit;
  QLabel* label_8;
  QPushButton* defaultButton;
  QMenuBar* menuBar;
  QToolBar* mainToolBar;
  QStatusBar* statusBar;

  void setupUi( QMainWindow* videoTrakWindow )
  {
    if ( videoTrakWindow->objectName().isEmpty() )
      videoTrakWindow->setObjectName( "videoTrakWindow" );
    videoTrakWindow->resize( 654, 470 );
    QSizePolicy sizePolicy( QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred );
    sizePolicy.setHorizontalStretch( 30 );
    sizePolicy.setVerticalStretch( 30 );
    sizePolicy.setHeightForWidth( videoTrakWindow->sizePolicy().hasHeightForWidth() );
    videoTrakWindow->setSizePolicy( sizePolicy );
    centralWidget = new QWidget( videoTrakWindow );
    centralWidget->setObjectName( "centralWidget" );
    gridLayout = new QGridLayout( centralWidget );
    gridLayout->setSpacing( 6 );
    gridLayout->setContentsMargins( 11, 11, 11, 11 );
    gridLayout->setObjectName( "gridLayout" );
    vminBox = new QSpinBox( centralWidget );
    vminBox->setObjectName( "vminBox" );
    vminBox->setMaximum( 255 );

    gridLayout->addWidget( vminBox, 11, 2, 1, 1 );

    smaxBox = new QSpinBox( centralWidget );
    smaxBox->setObjectName( "smaxBox" );
    smaxBox->setMaximum( 255 );
    smaxBox->setValue( 255 );

    gridLayout->addWidget( smaxBox, 8, 2, 1, 1 );

    horizontalSlider_5 = new QSlider( centralWidget );
    horizontalSlider_5->setObjectName( "horizontalSlider_5" );
    horizontalSlider_5->setMaximum( 255 );
    horizontalSlider_5->setValue( 255 );
    horizontalSlider_5->setOrientation( Qt::Orientation::Horizontal );

    gridLayout->addWidget( horizontalSlider_5, 8, 1, 1, 1 );

    label_2 = new QLabel( centralWidget );
    label_2->setObjectName( "label_2" );

    gridLayout->addWidget( label_2, 7, 1, 1, 1 );

    hminBox = new QSpinBox( centralWidget );
    hminBox->setObjectName( "hminBox" );
    hminBox->setMaximum( 255 );

    gridLayout->addWidget( hminBox, 2, 2, 1, 1 );

    addButton = new QPushButton( centralWidget );
    addButton->setObjectName( "addButton" );

    gridLayout->addWidget( addButton, 20, 2, 1, 1 );

    horizontalSlider_6 = new QSlider( centralWidget );
    horizontalSlider_6->setObjectName( "horizontalSlider_6" );
    horizontalSlider_6->setMaximum( 255 );
    horizontalSlider_6->setOrientation( Qt::Orientation::Horizontal );

    gridLayout->addWidget( horizontalSlider_6, 6, 1, 1, 1 );

    label_3 = new QLabel( centralWidget );
    label_3->setObjectName( "label_3" );

    gridLayout->addWidget( label_3, 1, 1, 1, 1 );

    horizontalSlider_3 = new QSlider( centralWidget );
    horizontalSlider_3->setObjectName( "horizontalSlider_3" );
    horizontalSlider_3->setMaximum( 255 );
    horizontalSlider_3->setValue( 255 );
    horizontalSlider_3->setOrientation( Qt::Orientation::Horizontal );

    gridLayout->addWidget( horizontalSlider_3, 18, 1, 1, 1 );

    label_6 = new QLabel( centralWidget );
    label_6->setObjectName( "label_6" );

    gridLayout->addWidget( label_6, 17, 1, 1, 1 );

    horizontalSlider = new QSlider( centralWidget );
    horizontalSlider->setObjectName( "horizontalSlider" );
    horizontalSlider->setMaximum( 255 );
    horizontalSlider->setOrientation( Qt::Orientation::Horizontal );

    gridLayout->addWidget( horizontalSlider, 11, 1, 1, 1 );

    sminBox = new QSpinBox( centralWidget );
    sminBox->setObjectName( "sminBox" );
    sminBox->setMaximum( 255 );

    gridLayout->addWidget( sminBox, 6, 2, 1, 1 );

    horizontalSlider_2 = new QSlider( centralWidget );
    horizontalSlider_2->setObjectName( "horizontalSlider_2" );
    horizontalSlider_2->setMaximum( 255 );
    horizontalSlider_2->setOrientation( Qt::Orientation::Horizontal );

    gridLayout->addWidget( horizontalSlider_2, 2, 1, 1, 1 );

    label = new QLabel( centralWidget );
    label->setObjectName( "label" );

    gridLayout->addWidget( label, 5, 1, 1, 1 );

    vmaxBox = new QSpinBox( centralWidget );
    vmaxBox->setObjectName( "vmaxBox" );
    vmaxBox->setMaximum( 255 );
    vmaxBox->setValue( 255 );

    gridLayout->addWidget( vmaxBox, 18, 2, 1, 1 );

    label_4 = new QLabel( centralWidget );
    label_4->setObjectName( "label_4" );

    gridLayout->addWidget( label_4, 3, 1, 1, 1 );

    label_7 = new QLabel( centralWidget );
    label_7->setObjectName( "label_7" );

    gridLayout->addWidget( label_7, 0, 1, 1, 1, Qt::AlignmentFlag::AlignLeft );

    horizontalSlider_4 = new QSlider( centralWidget );
    horizontalSlider_4->setObjectName( "horizontalSlider_4" );
    horizontalSlider_4->setMaximum( 255 );
    horizontalSlider_4->setValue( 255 );
    horizontalSlider_4->setOrientation( Qt::Orientation::Horizontal );

    gridLayout->addWidget( horizontalSlider_4, 4, 1, 1, 1 );

    hmaxBox = new QSpinBox( centralWidget );
    hmaxBox->setObjectName( "hmaxBox" );
    hmaxBox->setMaximum( 255 );
    hmaxBox->setValue( 255 );

    gridLayout->addWidget( hmaxBox, 4, 2, 1, 1 );

    label_5 = new QLabel( centralWidget );
    label_5->setObjectName( "label_5" );

    gridLayout->addWidget( label_5, 10, 1, 1, 1 );

    nameLineEdit = new QLineEdit( centralWidget );
    nameLineEdit->setObjectName( "nameLineEdit" );

    gridLayout->addWidget( nameLineEdit, 20, 1, 1, 1 );

    label_8 = new QLabel( centralWidget );
    label_8->setObjectName( "label_8" );

    gridLayout->addWidget( label_8, 19, 1, 1, 1 );

    defaultButton = new QPushButton( centralWidget );
    defaultButton->setObjectName( "defaultButton" );

    gridLayout->addWidget( defaultButton, 0, 2, 1, 1 );

    videoTrakWindow->setCentralWidget( centralWidget );
    horizontalSlider_6->raise();
    label_6->raise();
    horizontalSlider_3->raise();
    horizontalSlider->raise();
    label->raise();
    horizontalSlider_2->raise();
    label_5->raise();
    label_3->raise();
    hminBox->raise();
    sminBox->raise();
    vmaxBox->raise();
    vminBox->raise();
    label_7->raise();
    label_4->raise();
    horizontalSlider_4->raise();
    hmaxBox->raise();
    label_2->raise();
    horizontalSlider_5->raise();
    smaxBox->raise();
    nameLineEdit->raise();
    addButton->raise();
    label_8->raise();
    defaultButton->raise();
    menuBar = new QMenuBar( videoTrakWindow );
    menuBar->setObjectName( "menuBar" );
    menuBar->setGeometry( QRect( 0, 0, 654, 33 ) );
    videoTrakWindow->setMenuBar( menuBar );
    mainToolBar = new QToolBar( videoTrakWindow );
    mainToolBar->setObjectName( "mainToolBar" );
    videoTrakWindow->addToolBar( Qt::ToolBarArea::TopToolBarArea, mainToolBar );
    statusBar = new QStatusBar( videoTrakWindow );
    statusBar->setObjectName( "statusBar" );
    videoTrakWindow->setStatusBar( statusBar );

    retranslateUi( videoTrakWindow );
    QObject::connect( hminBox, &QSpinBox::valueChanged, horizontalSlider_2, &QSlider::setValue );
    QObject::connect( hmaxBox, &QSpinBox::valueChanged, horizontalSlider_4, &QSlider::setValue );
    QObject::connect( sminBox, &QSpinBox::valueChanged, horizontalSlider_6, &QSlider::setValue );
    QObject::connect( smaxBox, &QSpinBox::valueChanged, horizontalSlider_5, &QSlider::setValue );
    QObject::connect( vminBox, &QSpinBox::valueChanged, horizontalSlider, &QSlider::setValue );
    QObject::connect( vmaxBox, &QSpinBox::valueChanged, horizontalSlider_3, &QSlider::setValue );
    QObject::connect( horizontalSlider_2, &QSlider::valueChanged, hminBox, &QSpinBox::setValue );
    QObject::connect( horizontalSlider_4, &QSlider::valueChanged, hmaxBox, &QSpinBox::setValue );
    QObject::connect( horizontalSlider_6, &QSlider::valueChanged, sminBox, &QSpinBox::setValue );
    QObject::connect( horizontalSlider_5, &QSlider::valueChanged, smaxBox, &QSpinBox::setValue );
    QObject::connect( horizontalSlider, &QSlider::valueChanged, vminBox, &QSpinBox::setValue );
    QObject::connect( horizontalSlider_3, &QSlider::valueChanged, vmaxBox, &QSpinBox::setValue );

    QMetaObject::connectSlotsByName( videoTrakWindow );
  } // setupUi

  void retranslateUi( QMainWindow* videoTrakWindow )
  {
    videoTrakWindow->setWindowTitle(
      QCoreApplication::translate( "videoTrakWindow", "MainWindow", nullptr ) );
    label_2->setText( QCoreApplication::translate( "videoTrakWindow", "S_MAX", nullptr ) );
    addButton->setText( QCoreApplication::translate( "videoTrakWindow", "Add", nullptr ) );
    label_3->setText( QCoreApplication::translate( "videoTrakWindow", "H_MIN", nullptr ) );
    label_6->setText( QCoreApplication::translate( "videoTrakWindow", "V_MAX", nullptr ) );
    label->setText( QCoreApplication::translate( "videoTrakWindow", "S_MIN", nullptr ) );
    label_4->setText( QCoreApplication::translate( "videoTrakWindow", "H_MAX", nullptr ) );
    label_7->setText(
      QCoreApplication::translate( "videoTrakWindow",
                                   "Adjust the HSV range until the target object is the only part "
                                   "of the image isolated in white.",
                                   nullptr ) );
    label_5->setText( QCoreApplication::translate( "videoTrakWindow", "V_MIN", nullptr ) );
    label_8->setText( QCoreApplication::translate( "videoTrakWindow", "Name :", nullptr ) );
    defaultButton->setText(
      QCoreApplication::translate( "videoTrakWindow", " Default Settings ", nullptr ) );
  } // retranslateUi
};

namespace Ui {
class videoTrakWindow : public Ui_videoTrakWindow
{};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOTRACK_H
