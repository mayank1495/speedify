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
  ui->enterText->setLineWrapMode((QTextEdit::LineWrapMode)0);
  ui->fileText->setLineWrapMode((QTextEdit::LineWrapMode)0);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
  QString fileName = QFileDialog::getOpenFileName(this,
						  tr("Open File"),
						  QString(),
						  tr("Text (*.txt);;"
						     "CPP (*.cpp);;"
						     "Log (*.log);;"
						     "Shell (*.sh);;"
						     "Python (*.py);;"
						     "HTML (*.html);;"
						     "Other Files (*)"));
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
  bool flag, f;
  QString text=ui->enterText->toPlainText();
  QString text2=ui->fileText->toPlainText();
  for (int i = 0; i < text.length() && i < text2.length(); )
    if (text[i] == text2[i])
      {
	flag = 1, f = 0;
	if (text2[i].isLetter())
	  while (i < text.length() && i < text2.length() && text2[i].isLetter())
	    if (text[i] != text2[i])
	      {
		flag = 0;
		break;
	      }
	    else
	      {
		++i;
		if (text2[i] == '\'' || text2[i] == '`')
		  {
		    if (f)
		      {
			++cnt;
			break;
		      }
		    f = 1;
		    ++i;
		    if (!text2[i].isLetter())
		      break;
		  }
	      }
	else if (text2[i].isDigit())
	  while (i < text.length() && i < text2.length() && text2[i].isDigit())
	    if (text[i] != text2[i])
	      {
		flag = 0;
		break;
	      }
	    else
	      ++i;
	if (!flag)
	  break;
	cnt++;
	while (i < text.length() && i < text2.length() &&
	       !(text2[i].isDigit() || text2[i].isLetter()))
	  if (text[i] != text2[i])
	    break;
	  else
	    ++i;
      }
    else
      break;
  return cnt;
}

void MainWindow::on_startBut_clicked()
{
  myTimer.start();
  ui->enterText->clear();
  ui->resultText->clear();
  ui->resultText->clear();
  ui->enterText->setTextInteractionFlags(Qt::TextEditable);
  ui->stopBut->setEnabled(true);
  elpsd=0;
  wordcnt=0;
}

void MainWindow::on_stopBut_clicked()
{
  elpsd = myTimer.elapsed();
  elpsd /= 1000;
  if(elpsd >= 60)
    elpsd /= 60;
  ui->stopBut->setDisabled(true);
  int cnt = checkWords();
  wordcnt = cnt/elpsd;
  QString s  = QString::number(wordcnt);
  QString s2 = QString::number(cnt);
  if (wordcnt < 1)
    {
      ui->resultText->setText(s2+" words in\n "+QString::number(elpsd)+" seconds.");
    }
  else
    ui->resultText->setText(s+" words per min.");
}

void MainWindow::on_actionExit_triggered()
{
  qApp->quit();
}
