#pragma once

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")// 该指令仅支持VS环境
#endif

#include <QtWidgets/QWidget>
#include "ui_yolov7_tensorrt.h"
#include "yolo.hpp"
#include <QFileDialog>
#include <QPixmap>
#include <QImage>
#include <QTimer>

class yolov7_tensorrt_qt : public QWidget
{
	Q_OBJECT

public:
	yolov7_tensorrt_qt(QWidget* parent = nullptr);
	QString filepath;
	std::string file_path;
	std::string image_path;
	QPixmap img;
	QImage qImg;
	cv::VideoCapture cap;
	cv::Mat frame;
	cv::Mat temp;

public slots:
	void updateImage();

	void on_openfile_clicked();

	void on_openimage_clicked();

	void on_opencamera_clicked();

	void on_closecamera_clicked();

	void on_openvideo_clicked();

	void on_clearshow_clicked();

	/*void recive_object(QString msg);*/

private:
	Ui::yolov7_tensorrt_qtClass ui;
	QTimer* timer;
	YOLO* yolo;
};
