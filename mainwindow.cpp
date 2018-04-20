#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QButtonGroup>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);


	player = new QMediaPlayer();

	connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::buttonClicked);
	connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::buttonClicked2);
	connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::buttonClicked3);
	connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::buttonClicked4);
	connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::buttonClicked5);
	connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::buttonClicked6);
	connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::buttonClicked7);
	connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::buttonClicked8);
	connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::buttonClicked9);
	connect(ui->pushButton_10, &QPushButton::clicked, this, &MainWindow::buttonClicked10);

	connect(ui->pushButton_11, &QPushButton::clicked, this, &MainWindow::stop);

}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::setupButtons()
{

}

void MainWindow::buttonClicked()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "1.mp3";
	qDebug() << "File: " << file << endl;
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}

void MainWindow::buttonClicked2()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "2.mp3";
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}
void MainWindow::buttonClicked3()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "3.mp3";
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}
void MainWindow::buttonClicked4()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "4.mp3";
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}
void MainWindow::buttonClicked5()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "5.mp3";
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}
void MainWindow::buttonClicked6()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "6.mp3";
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}
void MainWindow::buttonClicked7()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "7.mp3";
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}
void MainWindow::buttonClicked8()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "8.mp3";
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}
void MainWindow::buttonClicked9()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "9.mp3";
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}
void MainWindow::buttonClicked10()
{
	QString path = QCoreApplication::applicationDirPath();
	QString file = path + "/" + "10.mp3";
	player->setMedia(QUrl::fromLocalFile(file));
	player->setVolume(90);
	player->play();
}

void MainWindow::stop()
{
	player->stop();
}
