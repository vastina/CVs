#pragma once

#include <QString>
#include <QObject>

#include <opencv2/opencv.hpp>

class EditorPluginInterface
{
public:
  virtual ~EditorPluginInterface() {};
  virtual QString name() = 0;
  virtual void edit( const cv::Mat& input, cv::Mat& output ) = 0;
};

#define EDIT_PLUGIN_INTERFACE_IID "com.kdr2.editorplugininterface"
Q_DECLARE_INTERFACE( EditorPluginInterface, EDIT_PLUGIN_INTERFACE_IID );

class AffinePlugin
  : public QObject
  , public EditorPluginInterface
{
  // Q_OBJECT
  Q_PLUGIN_METADATA( IID EDIT_PLUGIN_INTERFACE_IID );
  Q_INTERFACES( EditorPluginInterface );

public:
  QString name();
  void edit( const cv::Mat& input, cv::Mat& output );
};

class CartoonPlugin
  : public QObject
  , public EditorPluginInterface
{
  // Q_OBJECT
  Q_PLUGIN_METADATA( IID EDIT_PLUGIN_INTERFACE_IID );
  Q_INTERFACES( EditorPluginInterface );

public:
  QString name();
  void edit( const cv::Mat& input, cv::Mat& output );
};

class ErodePlugin
  : public QObject
  , public EditorPluginInterface
{
  // Q_OBJECT
  Q_PLUGIN_METADATA( IID EDIT_PLUGIN_INTERFACE_IID );
  Q_INTERFACES( EditorPluginInterface );

public:
  QString name();
  void edit( const cv::Mat& input, cv::Mat& output );
};

class RotatePlugin
  : public QObject
  , public EditorPluginInterface
{
  // Q_OBJECT
  Q_PLUGIN_METADATA( IID EDIT_PLUGIN_INTERFACE_IID );
  Q_INTERFACES( EditorPluginInterface );

public:
  QString name();
  void edit( const cv::Mat& input, cv::Mat& output );
};

class SharpenPlugin
  : public QObject
  , public EditorPluginInterface
{
  // Q_OBJECT
  Q_PLUGIN_METADATA( IID EDIT_PLUGIN_INTERFACE_IID );
  Q_INTERFACES( EditorPluginInterface );

public:
  QString name();
  void edit( const cv::Mat& input, cv::Mat& output );
};
