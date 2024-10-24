#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QStandardPaths>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Just Do It!");

   // QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"\\ToDoFile.txt");
    QFile file(path);
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::information(0,"error",file.errorString());

    }
    QTextStream in(&file);

    while(!in.atEnd())
    {
        QListWidgetItem* item = new QListWidgetItem(in.readLine(),ui->listWidget);
        ui->listWidget->addItem(item);
            //ui->listWidget->addItem(ui->lineEdit->text());
        item->setFlags(item->flags() | Qt::ItemIsEditable); //代办事项可修改
    }
    file.close();

    resize(450,650);
    ui->label->setFont(QFont("Times",18));
    ui->label->setStyleSheet("color:darkred");

    ui->label->clear();
    ui->label2->setFont(QFont("Times",18));
    ui->label2->setStyleSheet("color:darkgreen");


    connect(ui->listWidget, SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)),
            this, SLOT(showThings(QListWidgetItem*, QListWidgetItem*)));



    ui->btn_Add->setFont(QFont("Times",12));
    ui->btn_Add->setStyleSheet("color:darkbalck");

    ui->btn_Clear->setFont(QFont("Times",12));
    ui->btn_Clear->setStyleSheet("color:darkbalck");

    ui->btn_Exit->setFont(QFont("Times",12));
    ui->btn_Exit->setStyleSheet("color:darkbalck");

    ui->btn_Finished->setFont(QFont("Times",12));
    ui->btn_Finished->setStyleSheet("color:darkbalck");;

    ui->btn_FinishedAll->setFont(QFont("Times",12));
    ui->btn_FinishedAll->setStyleSheet("color:darkbalck");;

    ui->btn_Rmove->setFont(QFont("Times",12));
    ui->btn_RmoveAll->setStyleSheet("color:darkbalck");
    ui->btn_Rmove->setStyleSheet("color:darkbalck");

    ui->listWidget->setFont(QFont("Times",20));
    ui->listWidget->setStyleSheet("color:darkgreen");





}


MainWindow::~MainWindow()
{
    delete ui;

    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\ToDoFile.txt");

    // 以WriteOnly模式打开文件，这样可以清空并覆盖原文件
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::information(0, "error", file.errorString());
        return;
    }

    QTextStream out(&file);

    // 将当前QListWidget中的所有事项写入文件
    for (int i = 0; i < ui->listWidget->count(); i++) {
        out << ui->listWidget->item(i)->text() << "\n";
    }

    file.close();
}



void MainWindow::on_btn_Add_clicked()
{

    // 获取文本并去除前后空白
    QString text = ui->lineEdit->text().trimmed();


    // 检查去除空格后的文本是否为空
    if (!text.isEmpty()) {
        QListWidgetItem* item = new QListWidgetItem(text, ui->listWidget);
        ui->listWidget->addItem(item);  // 仅在非空时添加项目
        item->setFlags(item->flags() | Qt::ItemIsEditable);  // 允许编辑项目

        // 清空输入框并设置焦点
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
}


void MainWindow::on_btn_Rmove_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();  // 获取当前选中的项目
    if (item) {
        delete ui->listWidget->takeItem(ui->listWidget->row(item));  // 删除选中的项目
    }
}


void MainWindow::on_btn_RmoveAll_clicked()
{

    ui->listWidget->clear();

}


void MainWindow::on_btn_Clear_clicked()
{

    ui->lineEdit->clear();
}


void MainWindow::on_btn_Exit_clicked()
{
    close();
}


void MainWindow::on_btn_FinishedAll_clicked()
{
    if (ui->listWidget->count() != 0) {

    ui->listWidget->clear();
    ui->label->setText("Congratulations！ You had finished all things!");
}
}


void MainWindow::on_btn_Finished_clicked()
{
    if (ui->listWidget->count() == 0) {
        ui->label->setText("Congratulations！ You had finished all things!");
    }

    else
    {
        ui->label->clear();
        QListWidgetItem *item = ui->listWidget->currentItem();  // 获取当前选中的项目
        QString str = "You are Finished :" + item->text();
        ui->label2->setText(str);
        if (item) {

            delete ui->listWidget->takeItem(ui->listWidget->row(item));  // 删除选中的项目
        }

    }

}

void MainWindow::showThings(QListWidgetItem* current, QListWidgetItem* previous)
{
    // 检查当前选中的项目是否为空
    if (current) {
        ui->label->setText(current->text());  // 将选中项的文本显示在 QLabel 上
    } else {
        ui->label->clear();  // 如果没有选中项，则清空 QLabel
    }
}


