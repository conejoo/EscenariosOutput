#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "resultsfile.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
		Q_OBJECT

	public:
		explicit MainWindow(QWidget *parent = 0);
		~MainWindow();

	public slots:
		void openResultFiles();
		void exportResults();
		void resetResults();

	private:
		std::vector<ResultsFile*> results;
		Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
