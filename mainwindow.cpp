#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	connect(ui->actionImport_files, SIGNAL(triggered()), this, SLOT(openResultFiles()));
	connect(ui->actionReset, SIGNAL(triggered()), this, SLOT(resetResults()));
}

MainWindow::~MainWindow()
{
	delete ui;
}


void MainWindow::openResultFiles(){
	QStringList filenames = QFileDialog::getOpenFileNames(this,
													("Open File"), "",
													"Results (*.s01)");
	if(filenames.size() == 0)
		return; // cancel
	for(QString filename: filenames){
		std::cout << "Filename " << filename.toStdString() << std::endl;
		results.push_back(new ResultsFile(filename.toStdString()));
	}
}

void MainWindow::exportResults(){
	QString dir = QFileDialog::getSaveFileName(this, "Save file", "",
											   "Text files (*.txt);;All files (*.*)");
	if(dir.size() == 0)
		return; // cancel

}
void MainWindow::resetResults(){
	for(ResultsFile* result: results)
		delete result;
	results.clear();
}

