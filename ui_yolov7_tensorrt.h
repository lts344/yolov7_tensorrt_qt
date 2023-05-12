/********************************************************************************
** Form generated from reading UI file 'yolov7_tensorrtZPJjku.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef YOLOV7_TENSORRTZPJJKU_H
#define YOLOV7_TENSORRTZPJJKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_yolov7_tensorrt_qtClass
{
public:
    QLabel *cameraview;
    QSplitter *mode;
    QPushButton *openfile;
    QPushButton *openimage;
    QPushButton *openvideo;
    QPushButton *opencamera;
    QPushButton *closecamera;
    QSplitter *path;
    QLabel *modelpath;
    QLabel *imagepath;
    QTextEdit *detectshow;
    QSplitter *splitter;
    QPushButton *clearshow;
    QPushButton *clearshow_2;

    void setupUi(QWidget *yolov7_tensorrt_qtClass)
    {
        if (yolov7_tensorrt_qtClass->objectName().isEmpty())
            yolov7_tensorrt_qtClass->setObjectName(QString::fromUtf8("yolov7_tensorrt_qtClass"));
        yolov7_tensorrt_qtClass->resize(1095, 680);
        cameraview = new QLabel(yolov7_tensorrt_qtClass);
        cameraview->setObjectName(QString::fromUtf8("cameraview"));
        cameraview->setGeometry(QRect(30, 90, 640, 480));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        cameraview->setFont(font);
        mode = new QSplitter(yolov7_tensorrt_qtClass);
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setGeometry(QRect(20, 20, 651, 51));
        mode->setFont(font);
        mode->setOrientation(Qt::Horizontal);
        openfile = new QPushButton(mode);
        openfile->setObjectName(QString::fromUtf8("openfile"));
        openfile->setFont(font);
        mode->addWidget(openfile);
        openimage = new QPushButton(mode);
        openimage->setObjectName(QString::fromUtf8("openimage"));
        openimage->setFont(font);
        mode->addWidget(openimage);
        openvideo = new QPushButton(mode);
        openvideo->setObjectName(QString::fromUtf8("openvideo"));
        openvideo->setFont(font);
        mode->addWidget(openvideo);
        opencamera = new QPushButton(mode);
        opencamera->setObjectName(QString::fromUtf8("opencamera"));
        opencamera->setFont(font);
        mode->addWidget(opencamera);
        closecamera = new QPushButton(mode);
        closecamera->setObjectName(QString::fromUtf8("closecamera"));
        closecamera->setFont(font);
        mode->addWidget(closecamera);
        path = new QSplitter(yolov7_tensorrt_qtClass);
        path->setObjectName(QString::fromUtf8("path"));
        path->setGeometry(QRect(20, 600, 651, 71));
        path->setFont(font);
        path->setOrientation(Qt::Vertical);
        modelpath = new QLabel(path);
        modelpath->setObjectName(QString::fromUtf8("modelpath"));
        modelpath->setFont(font);
        path->addWidget(modelpath);
        imagepath = new QLabel(path);
        imagepath->setObjectName(QString::fromUtf8("imagepath"));
        imagepath->setFont(font);
        path->addWidget(imagepath);
        detectshow = new QTextEdit(yolov7_tensorrt_qtClass);
        detectshow->setObjectName(QString::fromUtf8("detectshow"));
        detectshow->setGeometry(QRect(690, 130, 201, 541));
        detectshow->setFont(font);
        splitter = new QSplitter(yolov7_tensorrt_qtClass);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(690, 20, 201, 101));
        splitter->setOrientation(Qt::Vertical);
        clearshow = new QPushButton(splitter);
        clearshow->setObjectName(QString::fromUtf8("clearshow"));
        clearshow->setFont(font);
        splitter->addWidget(clearshow);
        clearshow_2 = new QPushButton(splitter);
        clearshow_2->setObjectName(QString::fromUtf8("clearshow_2"));
        clearshow_2->setFont(font);
        splitter->addWidget(clearshow_2);

        retranslateUi(yolov7_tensorrt_qtClass);

        QMetaObject::connectSlotsByName(yolov7_tensorrt_qtClass);
    } // setupUi

    void retranslateUi(QWidget *yolov7_tensorrt_qtClass)
    {
        yolov7_tensorrt_qtClass->setWindowTitle(QApplication::translate("yolov7_tensorrt_qtClass", "yolov7_tensorrt_qt", nullptr));
        cameraview->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\347\224\273\351\235\242\346\230\276\347\244\272\345\214\272\345\237\237", nullptr));
        openfile->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\351\200\211\346\213\251\346\250\241\345\236\213", nullptr));
        openimage->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\345\233\276\347\211\207\346\243\200\346\265\213", nullptr));
        openvideo->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\350\247\206\351\242\221\346\243\200\346\265\213", nullptr));
        opencamera->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\347\233\270\346\234\272\346\243\200\346\265\213", nullptr));
        closecamera->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\345\205\263\351\227\255\347\224\273\351\235\242", nullptr));
        modelpath->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\346\250\241\345\236\213\345\234\260\345\235\200", nullptr));
        imagepath->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\350\257\273\345\217\226\345\234\260\345\235\200", nullptr));
        detectshow->setHtml(QApplication::translate("yolov7_tensorrt_qtClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Adobe \345\256\213\344\275\223 Std L';\"><br /></p></body></html>", nullptr));
        clearshow->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\346\270\205\347\251\272\344\277\241\346\201\257\346\241\206", nullptr));
        clearshow_2->setText(QApplication::translate("yolov7_tensorrt_qtClass", "\346\243\200\346\265\213\345\210\260\347\232\204\347\211\251\344\275\223\346\225\260\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class yolov7_tensorrt_qtClass: public Ui_yolov7_tensorrt_qtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // YOLOV7_TENSORRTZPJJKU_H
