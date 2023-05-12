#include "yolov7_tensorrt.h"

using namespace std;

yolov7_tensorrt_qt::yolov7_tensorrt_qt(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle(("YoloV7目标检测软件"));

	timer = new QTimer(this);
	timer->setInterval(33);
	//yolo = new YOLO;
	connect(timer, SIGNAL(timeout()), this, SLOT(updateImage()));
	//connect(yolo, SIGNAL(send_object()), this, SLOT(recive_object()));

	this->setFixedSize(900, 680);
}

void yolov7_tensorrt_qt::on_openfile_clicked()
{
	filepath = QFileDialog::getOpenFileName(this, "选择单个文件", ".", "*.engine");
	ui.cameraview->clear();
	ui.modelpath->clear();
	ui.modelpath->setText("模型地址：" + filepath);
}


void yolov7_tensorrt_qt::on_openimage_clicked()
{
	timer->stop();
	cap.release();
	QString imagepath = QFileDialog::getOpenFileName(this, ("选择图片"), ".", "*.png; *.jpeg; *.webp; *.bmp; *.jpg; *.tif; *.GIF");
	std::string image_path = imagepath.toStdString();
	if (imagepath.trimmed().isEmpty() == false)
	{
		cv::Mat image = cv::imread(image_path);

		if (image.channels() == 4)
			cv::cvtColor(image, temp, cv::COLOR_BGRA2RGB);
		else if (image.channels() == 3)
			cv::cvtColor(image, temp, cv::COLOR_BGR2RGB);
		else
			cv::cvtColor(image, temp, cv::COLOR_GRAY2RGB);

		std::string file_path = filepath.toStdString();
		YOLO yolo;
		yolo.path(file_path);
		yolo.detect_img(temp);

		qImg = QImage((uchar*)(temp.data), temp.cols, temp.rows, temp.step, QImage::Format_RGB888);

		ui.detectshow->append(yolo.msg);

		ui.imagepath->clear();
		ui.imagepath->setText("文件地址：" + imagepath);
		ui.cameraview->clear();
		ui.cameraview->setPixmap(QPixmap::fromImage(qImg));
		ui.cameraview->setScaledContents(true);
	}
}

void yolov7_tensorrt_qt::on_opencamera_clicked()
{
	int video_driver = 0;
	cap.open(video_driver);
	QString video_path = QString::number(video_driver);
	timer->start();
	ui.imagepath->clear();
	ui.imagepath->setText("文件地址：相机的ID是 " + video_path);
}

void yolov7_tensorrt_qt::on_closecamera_clicked()
{
	timer->stop();
	cap.release();
	ui.cameraview->clear();
}

void yolov7_tensorrt_qt::updateImage()
{
	cap >> frame;
	if (frame.empty()) return;

	cv::cvtColor(frame, temp, cv::COLOR_BGR2RGB);

	std::string file_path = filepath.toStdString();
	YOLO yolo;
	yolo.path(file_path);
	yolo.detect_video(temp);

	QImage vImg = QImage((uchar*)(temp.data), temp.cols, temp.rows, temp.step, QImage::Format_RGB888);

	ui.detectshow->append(yolo.msg);
	ui.cameraview->clear();
	ui.cameraview->setPixmap(QPixmap::fromImage(vImg));
	ui.cameraview->setScaledContents(true);
}

void yolov7_tensorrt_qt::on_openvideo_clicked()
{
	QString videopath = QFileDialog::getOpenFileName(this, ("选择视频"), ".", "*.mp4; *.mkv");
	cap.open(videopath.toStdString());
	timer->start();
	ui.imagepath->clear();
	ui.imagepath->setText("文件地址：" + videopath);
}

void yolov7_tensorrt_qt::on_clearshow_clicked()
{
	ui.detectshow->clear();
}

//void yolov7_tensorrt_qt::recive_object(QString msg)
//{
//	ui.detectshow->append(msg);
//}

