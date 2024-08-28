#pragma once

#include <QObject>
#include <QString>
#include <QMainWindow>
#include <QMenuBar>
#include <QToolBar>
#include <QAction>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QStatusBar>
#include <QLabel>
#include <QGraphicsPixmapItem>
#include <QMap>

#include "edit.hpp"

class MainWindow : public QMainWindow
{
  // Q_OBJECT

public:
  explicit MainWindow( QWidget* parent = nullptr );
  ~MainWindow();

private:
  void initUI();
  void createActions();
  void showImage( const QString& );
  void setupShortcuts();
  // plugin
  void loadPlugins();

//private slots:
  void openImage();
  void zoomIn();
  void zoomOut();
  void prevImage();
  void nextImage();
  void saveAs();
  // for editting
  void blurImage();
  void pluginPerform();

//private:
  QMenu* fileMenu;
  QMenu* viewMenu;
  QMenu* editMenu;

  QToolBar* fileToolBar;
  QToolBar* viewToolBar;
  QToolBar* editToolBar;

  QGraphicsScene* imageScene;
  QGraphicsView* imageView;

  QStatusBar* mainStatusBar;
  QLabel* mainStatusLabel;

  QAction* openAction;
  QAction* saveAsAction;
  QAction* exitAction;
  QAction* zoomInAction;
  QAction* zoomOutAction;
  QAction* prevAction;
  QAction* nextAction;

  QAction* blurAction;

  QString currentImagePath;
  QGraphicsPixmapItem* currentImage;

  QMap<QString, EditorPluginInterface*> editPlugins;
};