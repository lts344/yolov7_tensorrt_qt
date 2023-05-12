#include "yolov7_tensorrt.h"
#include <QtWidgets/QApplication>
#include <qtextcodec.h>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	yolov7_tensorrt_qt w;
	w.show();
	return a.exec();
}
