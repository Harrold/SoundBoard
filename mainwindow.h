#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractButton>
#include <QMediaPlayer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

	void setupButtons();

public slots:
	void buttonClicked();
	void buttonClicked2();
	void buttonClicked3();
	void buttonClicked4();
	void buttonClicked5();
	void buttonClicked6();
	void buttonClicked7();
	void buttonClicked8();
	void buttonClicked9();
	void buttonClicked10();
	void stop();

private:
	Ui::MainWindow *ui;

	QMediaPlayer *player;
};

#endif // MAINWINDOW_H
