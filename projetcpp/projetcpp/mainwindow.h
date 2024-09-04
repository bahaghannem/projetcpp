#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QString>
#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QPieSeries>
#include <QPieSlice>
#include <QChart>
#include <QChartView>
#include <QWidget>
#include <QPainter>
#include <QMainWindow>
#include <QPieSeries>
#include <QChartView>
#include <QSqlQueryModel>
#include <QMainWindow>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include "qr.h"

using namespace QtCharts;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_clicked();

    void on_pushButton_clicked();

    void on_upp_clicked();

    void on_tableView_17_doubleClicked(const QModelIndex &index);

    void on_saveFormateur_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_add_2_clicked();

    void on_pushButton_5_clicked();

    void on_modifierformation_clicked();

    void on_tableView_18_doubleClicked(const QModelIndex &index);

    void on_upp_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_sortComboBox_currentIndexChanged(int index);

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_comboBox_currentIndexChanged(int index);


    void on_pushButton_16_clicked();

    void on_tableView_19_doubleClicked(const QModelIndex &index);

    void on_pushButton_17_clicked();
    void handleChat();


    void on_pushButton_18_clicked();

private:
    Ui::MainWindow *ui;
    int IDF;
    QSqlQueryModel *model;    // Modèle pour gérer les données de la table
    void generateQRCode(const QString &text);  // Function to generate and display QR code



};
#endif // MAINWINDOW_H
