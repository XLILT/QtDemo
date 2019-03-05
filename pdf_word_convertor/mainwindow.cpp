#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    bg(new QButtonGroup),
    fd(new QFileDialog)
{
    ui->setupUi(this);

    bg->addButton(ui->radioButton);
    bg->addButton(ui->radioButton_2);

    fd->setFileMode(QFileDialog::ExistingFile);
    // fd->setFilter();
}

MainWindow::~MainWindow()
{
    delete bg;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(!QString::compare(bg->checkedButton()->objectName(), ui->radioButton->objectName()))
    {
        fd->setNameFilter("*.pdf");
    }
    else
    {
        fd->setNameFilter("*.docx *.doc");
    }

    fd->setVisible(true);
}
