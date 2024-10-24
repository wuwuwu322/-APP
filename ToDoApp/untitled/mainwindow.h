#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardPaths>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_btn_Add_clicked();

    void on_btn_Rmove_clicked();

    void on_btn_RmoveAll_clicked();

    void on_btn_Clear_clicked();

    void on_btn_Exit_clicked();

    void on_btn_FinishedAll_clicked();

    void on_btn_Finished_clicked();

    void showThings(QListWidgetItem* current, QListWidgetItem* previous);

private:
    Ui::MainWindow *ui;
    QString path = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"\\ToDoFile.txt";
};
#endif // MAINWINDOW_H
