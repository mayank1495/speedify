#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName= QFileDialog::getOpenFileName(this,tr("Open File"),QString(),tr("Text Files (*.txt);;")); //;;C++ Files(*.cpp *.h)"));
    if(!fileName.isEmpty())
    {
        QFile file(fileName);
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::critical(this,tr("Error"),tr("Could not open file."));
            return;
        }
        ui->fileText->clear();
        QTextStream in(&file);
        ui->fileText->setText(in.readAll());
        ui->startBut->setEnabled(true);
        ui->resetBut->setEnabled(true);
        file.close();
    }
}

//void MainWindow::on_quitButton_clicked()
//{
//    qApp->quit();
//}

//void MainWindow::on_actionSave_triggered()
//{
//    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QString(),
//               tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

//       if (!fileName.isEmpty()) {
//           QFile file(fileName);
//           if (!file.open(QIODevice::WriteOnly)) {
//               // error message
//           } else {
//               QTextStream stream(&file);
//               stream << ui->textEdit->toPlainText();
//               stream.flush();
//               file.close();
//           }
//       }
//}

QTime myTimer;
int elpsd=0;
int wordcnt=0;

int MainWindow::checkWords()
{
    int cnt=0;
    QString text=ui->enterText->toPlainText();
    QString text2=ui->fileText->toPlainText();
    QStringList list=text.split(' ',QString::SkipEmptyParts);
    QStringList list2=text2.split(' ',QString::SkipEmptyParts);
    for(int i=0; i<list.count();i++)
       if(i<list2.count())
         if(list[i]==list2[i])
             //if(!(list[i]==","||list[i]=="\""));
               cnt++;
    return cnt;
}

void MainWindow::on_startBut_clicked()
{
    myTimer.start();
    ui->stopBut->setEnabled(true);
    ui->enterText->setReadOnly(false);
}

void MainWindow::on_stopBut_clicked()
{
    elpsd=myTimer.elapsed();
    elpsd/=1000;
    if(elpsd>=60)
        elpsd/=60;
    ui->enterText->setReadOnly(true);
    ui->startBut->setEnabled(false);
    ui->stopBut->setEnabled(false);
    //ui->resultText->setText(QString::number(elpsd));
//    QString text=ui->enterText->toPlainText();
//    QString text2=ui->fileText->toPlainText();
//    QStringList list=text.split(' ',QString::SkipEmptyParts);
//    QStringList list2=text2.split(' ',QString::SkipEmptyParts);
//    for(int i=0; i<list.size();i++)
//        if(list[i]==list2[i])
//            wordcnt++;
    //wordcnt=checkWords();
    int cnt=checkWords();
    wordcnt=cnt/elpsd;
    QString s= QString::number(wordcnt);
    QString s2=QString::number(cnt);
    if (wordcnt<1)
    {
        ui->resultText->setText(s2+" words in\n "+QString::number(elpsd)+" seconds.");
    }
    else
     ui->resultText->setText(s+" words per min.");
}

void MainWindow::on_resetBut_clicked()
{
    ui->enterText->clear();
    ui->resultText->clear();
    ui->resultText->clear();
    ui->stopBut->setDisabled(true);
    ui->startBut->setDisabled(false);
    ui->enterText->setReadOnly(true);
    elpsd=0;
    wordcnt=0;
}

void MainWindow::on_actionExit_triggered()
{
    qApp->quit();
}
