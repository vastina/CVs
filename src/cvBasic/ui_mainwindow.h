/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
  QWidget* centralwidget;
  QLabel* label;
  QLabel* label_1;
  QPushButton* gray_balance;
  QPushButton* grad_sharpen;
  QPushButton* gray_leval;
  QPushButton* select_files;
  QPushButton* pushButton;
  QPushButton* laplace_sharpen;
  QLabel* label_2;
  QLabel* label_3;
  QPushButton* roberts_edge;
  QPushButton* sobel_edge;
  QPushButton* laplace_edge;
  QPushButton* prewitt;
  QPushButton* Canny;
  QPushButton* salt_noise;
  QPushButton* guass_noise;
  QPushButton* average_filter;
  QPushButton* middle_filter;
  QPushButton* krisch_edge;
  QPushButton* window_filter;
  QPushButton* form_filter;
  QPushButton* gauss_filter;
  QPushButton* affine;
  QPushButton* perspective;
  QPushButton* threshold_seg;
  QPushButton* OSTU;
  QPushButton* Kittler;
  QPushButton* frame_diff;
  QPushButton* mix_guass;
  QPushButton* circle_lbp;
  QPushButton* target_det;
  QPushButton* model_check;
  QPushButton* cloaking;
  QPushButton* SIFT;
  QPushButton* orb;
  QPushButton* color_fit;
  QPushButton* svm_test;
  QPushButton* word_test;
  QPushButton* Haar_1;
  QPushButton* Haar_2;
  QPushButton* gaber;
  QPushButton* face_haar;
  QGroupBox* groupBox;
  QGroupBox* groupBox_2;
  QGroupBox* groupBox_3;
  QGroupBox* groupBox_4;
  QGroupBox* groupBox_5;
  QGroupBox* groupBox_6;
  QGroupBox* groupBox_7;
  QGroupBox* groupBox_8;
  QPushButton* camera2;
  QPushButton* camera2_2;
  QGroupBox* groupBox_10;
  QPushButton* video_track;
  QMenuBar* menubar;
  QStatusBar* statusbar;

  void setupUi( QMainWindow* MainWindow )
  {
    if ( MainWindow->objectName().isEmpty() )
      MainWindow->setObjectName( "MainWindow" );
    MainWindow->resize( 1037, 685 );
    centralwidget = new QWidget( MainWindow );
    centralwidget->setObjectName( "centralwidget" );
    label = new QLabel( centralwidget );
    label->setObjectName( "label" );
    label->setGeometry( QRect( 30, 10, 251, 251 ) );
    label_1 = new QLabel( centralwidget );
    label_1->setObjectName( "label_1" );
    label_1->setGeometry( QRect( 290, 10, 251, 251 ) );
    gray_balance = new QPushButton( centralwidget );
    gray_balance->setObjectName( "gray_balance" );
    gray_balance->setGeometry( QRect( 560, 120, 113, 32 ) );
    grad_sharpen = new QPushButton( centralwidget );
    grad_sharpen->setObjectName( "grad_sharpen" );
    grad_sharpen->setGeometry( QRect( 560, 150, 113, 32 ) );
    gray_leval = new QPushButton( centralwidget );
    gray_leval->setObjectName( "gray_leval" );
    gray_leval->setGeometry( QRect( 560, 90, 109, 32 ) );
    select_files = new QPushButton( centralwidget );
    select_files->setObjectName( "select_files" );
    select_files->setGeometry( QRect( 560, 60, 111, 32 ) );
    pushButton = new QPushButton( centralwidget );
    pushButton->setObjectName( "pushButton" );
    pushButton->setGeometry( QRect( 560, 30, 111, 32 ) );
    laplace_sharpen = new QPushButton( centralwidget );
    laplace_sharpen->setObjectName( "laplace_sharpen" );
    laplace_sharpen->setGeometry( QRect( 560, 180, 111, 32 ) );
    label_2 = new QLabel( centralwidget );
    label_2->setObjectName( "label_2" );
    label_2->setGeometry( QRect( 30, 270, 251, 251 ) );
    label_3 = new QLabel( centralwidget );
    label_3->setObjectName( "label_3" );
    label_3->setGeometry( QRect( 290, 270, 251, 251 ) );
    roberts_edge = new QPushButton( centralwidget );
    roberts_edge->setObjectName( "roberts_edge" );
    roberts_edge->setGeometry( QRect( 560, 240, 113, 32 ) );
    sobel_edge = new QPushButton( centralwidget );
    sobel_edge->setObjectName( "sobel_edge" );
    sobel_edge->setGeometry( QRect( 560, 270, 113, 32 ) );
    laplace_edge = new QPushButton( centralwidget );
    laplace_edge->setObjectName( "laplace_edge" );
    laplace_edge->setGeometry( QRect( 560, 300, 113, 32 ) );
    prewitt = new QPushButton( centralwidget );
    prewitt->setObjectName( "prewitt" );
    prewitt->setGeometry( QRect( 560, 330, 113, 32 ) );
    Canny = new QPushButton( centralwidget );
    Canny->setObjectName( "Canny" );
    Canny->setGeometry( QRect( 560, 360, 113, 32 ) );
    salt_noise = new QPushButton( centralwidget );
    salt_noise->setObjectName( "salt_noise" );
    salt_noise->setGeometry( QRect( 560, 470, 113, 31 ) );
    guass_noise = new QPushButton( centralwidget );
    guass_noise->setObjectName( "guass_noise" );
    guass_noise->setGeometry( QRect( 560, 510, 113, 31 ) );
    average_filter = new QPushButton( centralwidget );
    average_filter->setObjectName( "average_filter" );
    average_filter->setGeometry( QRect( 700, 30, 113, 32 ) );
    middle_filter = new QPushButton( centralwidget );
    middle_filter->setObjectName( "middle_filter" );
    middle_filter->setGeometry( QRect( 700, 60, 113, 32 ) );
    krisch_edge = new QPushButton( centralwidget );
    krisch_edge->setObjectName( "krisch_edge" );
    krisch_edge->setGeometry( QRect( 560, 390, 113, 32 ) );
    window_filter = new QPushButton( centralwidget );
    window_filter->setObjectName( "window_filter" );
    window_filter->setGeometry( QRect( 700, 90, 113, 32 ) );
    form_filter = new QPushButton( centralwidget );
    form_filter->setObjectName( "form_filter" );
    form_filter->setGeometry( QRect( 700, 120, 113, 32 ) );
    gauss_filter = new QPushButton( centralwidget );
    gauss_filter->setObjectName( "gauss_filter" );
    gauss_filter->setGeometry( QRect( 700, 150, 113, 32 ) );
    affine = new QPushButton( centralwidget );
    affine->setObjectName( "affine" );
    affine->setGeometry( QRect( 700, 210, 113, 32 ) );
    perspective = new QPushButton( centralwidget );
    perspective->setObjectName( "perspective" );
    perspective->setGeometry( QRect( 700, 240, 113, 32 ) );
    threshold_seg = new QPushButton( centralwidget );
    threshold_seg->setObjectName( "threshold_seg" );
    threshold_seg->setGeometry( QRect( 700, 300, 113, 32 ) );
    OSTU = new QPushButton( centralwidget );
    OSTU->setObjectName( "OSTU" );
    OSTU->setGeometry( QRect( 700, 330, 113, 32 ) );
    Kittler = new QPushButton( centralwidget );
    Kittler->setObjectName( "Kittler" );
    Kittler->setGeometry( QRect( 700, 360, 113, 32 ) );
    frame_diff = new QPushButton( centralwidget );
    frame_diff->setObjectName( "frame_diff" );
    frame_diff->setGeometry( QRect( 700, 390, 113, 32 ) );
    mix_guass = new QPushButton( centralwidget );
    mix_guass->setObjectName( "mix_guass" );
    mix_guass->setGeometry( QRect( 700, 420, 113, 32 ) );
    circle_lbp = new QPushButton( centralwidget );
    circle_lbp->setObjectName( "circle_lbp" );
    circle_lbp->setGeometry( QRect( 840, 30, 113, 32 ) );
    target_det = new QPushButton( centralwidget );
    target_det->setObjectName( "target_det" );
    target_det->setGeometry( QRect( 840, 60, 113, 32 ) );
    model_check = new QPushButton( centralwidget );
    model_check->setObjectName( "model_check" );
    model_check->setGeometry( QRect( 840, 90, 113, 32 ) );
    cloaking = new QPushButton( centralwidget );
    cloaking->setObjectName( "cloaking" );
    cloaking->setGeometry( QRect( 840, 120, 113, 32 ) );
    SIFT = new QPushButton( centralwidget );
    SIFT->setObjectName( "SIFT" );
    SIFT->setGeometry( QRect( 840, 240, 113, 32 ) );
    orb = new QPushButton( centralwidget );
    orb->setObjectName( "orb" );
    orb->setGeometry( QRect( 840, 270, 113, 32 ) );
    color_fit = new QPushButton( centralwidget );
    color_fit->setObjectName( "color_fit" );
    color_fit->setGeometry( QRect( 840, 150, 113, 32 ) );
    svm_test = new QPushButton( centralwidget );
    svm_test->setObjectName( "svm_test" );
    svm_test->setGeometry( QRect( 840, 300, 113, 32 ) );
    word_test = new QPushButton( centralwidget );
    word_test->setObjectName( "word_test" );
    word_test->setGeometry( QRect( 840, 330, 113, 32 ) );
    Haar_1 = new QPushButton( centralwidget );
    Haar_1->setObjectName( "Haar_1" );
    Haar_1->setGeometry( QRect( 840, 390, 113, 32 ) );
    Haar_2 = new QPushButton( centralwidget );
    Haar_2->setObjectName( "Haar_2" );
    Haar_2->setGeometry( QRect( 840, 360, 113, 32 ) );
    gaber = new QPushButton( centralwidget );
    gaber->setObjectName( "gaber" );
    gaber->setGeometry( QRect( 840, 180, 113, 32 ) );
    face_haar = new QPushButton( centralwidget );
    face_haar->setObjectName( "face_haar" );
    face_haar->setGeometry( QRect( 840, 420, 113, 32 ) );
    groupBox = new QGroupBox( centralwidget );
    groupBox->setObjectName( "groupBox" );
    groupBox->setGeometry( QRect( 560, 10, 111, 201 ) );
    groupBox_2 = new QGroupBox( centralwidget );
    groupBox_2->setObjectName( "groupBox_2" );
    groupBox_2->setGeometry( QRect( 560, 220, 111, 201 ) );
    groupBox_3 = new QGroupBox( centralwidget );
    groupBox_3->setObjectName( "groupBox_3" );
    groupBox_3->setGeometry( QRect( 560, 450, 111, 101 ) );
    groupBox_4 = new QGroupBox( centralwidget );
    groupBox_4->setObjectName( "groupBox_4" );
    groupBox_4->setGeometry( QRect( 700, 10, 111, 171 ) );
    groupBox_5 = new QGroupBox( centralwidget );
    groupBox_5->setObjectName( "groupBox_5" );
    groupBox_5->setGeometry( QRect( 700, 190, 111, 81 ) );
    groupBox_6 = new QGroupBox( centralwidget );
    groupBox_6->setObjectName( "groupBox_6" );
    groupBox_6->setGeometry( QRect( 700, 280, 111, 171 ) );
    groupBox_7 = new QGroupBox( centralwidget );
    groupBox_7->setObjectName( "groupBox_7" );
    groupBox_7->setGeometry( QRect( 840, 10, 111, 201 ) );
    groupBox_8 = new QGroupBox( centralwidget );
    groupBox_8->setObjectName( "groupBox_8" );
    groupBox_8->setGeometry( QRect( 840, 220, 111, 231 ) );
    camera2 = new QPushButton( centralwidget );
    camera2->setObjectName( "camera2" );
    camera2->setGeometry( QRect( 700, 470, 113, 32 ) );
    camera2_2 = new QPushButton( centralwidget );
    camera2_2->setObjectName( "camera2_2" );
    camera2_2->setGeometry( QRect( 840, 470, 113, 32 ) );
    groupBox_10 = new QGroupBox( centralwidget );
    groupBox_10->setObjectName( "groupBox_10" );
    groupBox_10->setGeometry( QRect( 700, 450, 251, 101 ) );
    video_track = new QPushButton( groupBox_10 );
    video_track->setObjectName( "video_track" );
    video_track->setGeometry( QRect( 0, 60, 113, 32 ) );
    MainWindow->setCentralWidget( centralwidget );
    groupBox_10->raise();
    groupBox_8->raise();
    groupBox_7->raise();
    groupBox_6->raise();
    groupBox_5->raise();
    groupBox_4->raise();
    groupBox_3->raise();
    groupBox_2->raise();
    groupBox->raise();
    cloaking->raise();
    label->raise();
    label_1->raise();
    gray_balance->raise();
    grad_sharpen->raise();
    gray_leval->raise();
    select_files->raise();
    pushButton->raise();
    laplace_sharpen->raise();
    label_2->raise();
    label_3->raise();
    roberts_edge->raise();
    sobel_edge->raise();
    laplace_edge->raise();
    prewitt->raise();
    Canny->raise();
    salt_noise->raise();
    guass_noise->raise();
    average_filter->raise();
    middle_filter->raise();
    krisch_edge->raise();
    window_filter->raise();
    form_filter->raise();
    gauss_filter->raise();
    affine->raise();
    perspective->raise();
    threshold_seg->raise();
    OSTU->raise();
    Kittler->raise();
    frame_diff->raise();
    mix_guass->raise();
    circle_lbp->raise();
    target_det->raise();
    model_check->raise();
    SIFT->raise();
    orb->raise();
    color_fit->raise();
    svm_test->raise();
    word_test->raise();
    Haar_1->raise();
    Haar_2->raise();
    gaber->raise();
    face_haar->raise();
    camera2->raise();
    camera2_2->raise();
    menubar = new QMenuBar( MainWindow );
    menubar->setObjectName( "menubar" );
    menubar->setGeometry( QRect( 0, 0, 1037, 33 ) );
    MainWindow->setMenuBar( menubar );
    statusbar = new QStatusBar( MainWindow );
    statusbar->setObjectName( "statusbar" );
    MainWindow->setStatusBar( statusbar );

    retranslateUi( MainWindow );

    QMetaObject::connectSlotsByName( MainWindow );
  } // setupUi

  void retranslateUi( QMainWindow* MainWindow )
  {
    MainWindow->setWindowTitle(
      QCoreApplication::translate( "MainWindow", "MainWindow", nullptr ) );
    label->setText( QCoreApplication::translate(
      "MainWindow", "                             \345\233\276\345\203\2171", nullptr ) );
    label_1->setText( QCoreApplication::translate(
      "MainWindow", "                              \345\233\276\345\203\2172", nullptr ) );
    gray_balance->setText( QCoreApplication::translate(
      "MainWindow", "\347\201\260\345\272\246\345\235\207\350\241\241", nullptr ) );
    grad_sharpen->setText( QCoreApplication::translate(
      "MainWindow", "\346\242\257\345\272\246\351\224\220\345\214\226", nullptr ) );
    gray_leval->setText( QCoreApplication::translate(
      "MainWindow", "\347\201\260\345\272\246\347\233\264\346\226\271\345\233\276", nullptr ) );
    select_files->setText( QCoreApplication::translate(
      "MainWindow", "\347\201\260\345\272\246\345\244\204\347\220\206", nullptr ) );
    pushButton->setText( QCoreApplication::translate(
      "MainWindow", "\351\200\211\346\213\251\345\233\276\345\203\217", nullptr ) );
    laplace_sharpen->setText(
      QCoreApplication::translate( "MainWindow", "Laplace\351\224\220\345\214\226", nullptr ) );
    label_2->setText( QCoreApplication::translate(
      "MainWindow", "                            \345\233\276\345\203\2173", nullptr ) );
    label_3->setText( QCoreApplication::translate(
      "MainWindow", "                              \345\233\276\345\203\2174", nullptr ) );
    roberts_edge->setText( QCoreApplication::translate( "MainWindow", "Roberts", nullptr ) );
    sobel_edge->setText( QCoreApplication::translate( "MainWindow", "Sobel", nullptr ) );
    laplace_edge->setText( QCoreApplication::translate( "MainWindow", "Laplace", nullptr ) );
    prewitt->setText( QCoreApplication::translate( "MainWindow", "Prewitt", nullptr ) );
    Canny->setText( QCoreApplication::translate( "MainWindow", "Canny", nullptr ) );
    salt_noise->setText( QCoreApplication::translate(
      "MainWindow", "\346\244\222\347\233\220\345\231\252\345\243\260", nullptr ) );
    guass_noise->setText( QCoreApplication::translate(
      "MainWindow", "\351\253\230\346\226\257\345\231\252\345\243\260", nullptr ) );
    average_filter->setText( QCoreApplication::translate(
      "MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", nullptr ) );
    middle_filter->setText( QCoreApplication::translate(
      "MainWindow", "\344\270\255\345\200\274\346\273\244\346\263\242", nullptr ) );
    krisch_edge->setText( QCoreApplication::translate( "MainWindow", "Krisch", nullptr ) );
    window_filter->setText( QCoreApplication::translate(
      "MainWindow", "\350\276\271\347\252\227\346\273\244\346\263\242", nullptr ) );
    form_filter->setText( QCoreApplication::translate(
      "MainWindow", "\345\275\242\346\200\201\345\255\246\346\273\244\346\263\242", nullptr ) );
    gauss_filter->setText( QCoreApplication::translate(
      "MainWindow", "\351\253\230\346\226\257\346\273\244\346\263\242", nullptr ) );
    affine->setText( QCoreApplication::translate(
      "MainWindow", "\344\273\277\345\260\204\345\217\230\346\215\242", nullptr ) );
    perspective->setText( QCoreApplication::translate(
      "MainWindow", "\351\200\217\350\247\206\345\217\230\346\215\242", nullptr ) );
    threshold_seg->setText( QCoreApplication::translate(
      "MainWindow", "\351\230\210\345\200\274\345\210\206\345\211\262", nullptr ) );
    OSTU->setText( QCoreApplication::translate( "MainWindow", "OSTU", nullptr ) );
    Kittler->setText( QCoreApplication::translate( "MainWindow", "Kittler", nullptr ) );
    frame_diff->setText( QCoreApplication::translate(
      "MainWindow", "\345\270\247\351\227\264\345\267\256\345\210\206", nullptr ) );
    mix_guass->setText( QCoreApplication::translate(
      "MainWindow",
      "\351\253\230\346\226\257\346\267\267\345\220\210\350\203\214\346\231\257",
      nullptr ) );
    circle_lbp->setText( QCoreApplication::translate( "MainWindow", "LBP", nullptr ) );
    target_det->setText( QCoreApplication::translate(
      "MainWindow", "\347\233\264\346\226\271\345\233\276\346\243\200\346\265\213", nullptr ) );
    model_check->setText( QCoreApplication::translate(
      "MainWindow", "\346\250\241\346\235\277\345\214\271\351\205\215", nullptr ) );
    cloaking->setText( QCoreApplication::translate(
      "MainWindow", "\351\232\220\350\272\253\346\225\210\346\236\234", nullptr ) );
    SIFT->setText( QCoreApplication::translate( "MainWindow", "SIFT", nullptr ) );
    orb->setText( QCoreApplication::translate( "MainWindow", "ORB", nullptr ) );
    color_fit->setText( QCoreApplication::translate(
      "MainWindow", "\351\242\234\350\211\262\345\214\271\351\205\215", nullptr ) );
    svm_test->setText( QCoreApplication::translate(
      "MainWindow", "\345\235\220\346\240\207\347\202\271SVM", nullptr ) );
    word_test->setText( QCoreApplication::translate(
      "MainWindow", "\345\255\227\347\254\246\346\265\213\350\257\225", nullptr ) );
    Haar_1->setText( QCoreApplication::translate(
      "MainWindow", "Haar\347\256\227\346\263\225-\346\260\264\345\271\263", nullptr ) );
    Haar_2->setText( QCoreApplication::translate(
      "MainWindow", "Haar\347\256\227\346\263\225-\347\253\226\347\233\264", nullptr ) );
    gaber->setText(
      QCoreApplication::translate( "MainWindow", "Garbor\346\273\244\346\263\242", nullptr ) );
    face_haar->setText( QCoreApplication::translate( "MainWindow", "face_Haar", nullptr ) );
    groupBox->setTitle( QCoreApplication::translate(
      "MainWindow", "\345\233\276\345\203\217\351\242\204\345\244\204\347\220\206", nullptr ) );
    groupBox_2->setTitle( QCoreApplication::translate(
      "MainWindow", "\350\276\271\347\274\230\346\243\200\346\265\213", nullptr ) );
    groupBox_3->setTitle(
      QCoreApplication::translate( "MainWindow", "\345\231\252\345\243\260", nullptr ) );
    groupBox_4->setTitle(
      QCoreApplication::translate( "MainWindow", "\346\273\244\346\263\242", nullptr ) );
    groupBox_5->setTitle( QCoreApplication::translate(
      "MainWindow", "\345\233\276\345\203\217\345\217\230\346\215\242", nullptr ) );
    groupBox_6->setTitle( QCoreApplication::translate(
      "MainWindow", "\350\203\214\346\231\257\345\244\204\347\220\206", nullptr ) );
    groupBox_7->setTitle( QCoreApplication::translate(
      "MainWindow", "\347\211\271\345\276\201\346\230\216\346\230\276", nullptr ) );
    groupBox_8->setTitle( QCoreApplication::translate(
      "MainWindow", "\347\211\271\345\276\201\346\217\220\345\217\226", nullptr ) );
    camera2->setText( QCoreApplication::translate(
      "MainWindow", "\346\221\204\345\203\217\346\234\272\346\240\207\345\256\232", nullptr ) );
    camera2_2->setText( QCoreApplication::translate(
      "MainWindow", "\347\253\213\344\275\223\345\214\271\351\205\215", nullptr ) );
    groupBox_10->setTitle( QCoreApplication::translate(
      "MainWindow", "\346\221\204\345\203\217\346\240\207\345\256\232", nullptr ) );
    video_track->setText( QCoreApplication::translate( "MainWindow", "video track", nullptr ) );
  } // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow
{};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
