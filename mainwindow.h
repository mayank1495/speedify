#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

	private slots:
		//void on_actionOpen_triggered();

		void on_openBut_clicked();

//    void on_quitButton_clicked();

//    void on_actionSave_triggered();

		void on_startBut_clicked();

		void on_stopBut_clicked();

		void on_actionExit_triggered();

private:
		Ui::MainWindow *ui;
		int checkWords();
};

#endif // MAINWINDOW_H
