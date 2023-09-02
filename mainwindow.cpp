
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QVector>

int SIZE = 4;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::print(QVector<QVector<int>>& v)
{
    int SIZE = 4;
    QVector<QVector<QChar>> vl;
    for(int i=0; i<SIZE;i++)
    {
        QVector<QChar> vec;
        for (int j = 0; j <SIZE ; j++) {
            if(v[i][j]==1)
                vec.push_back('X');
            else
                vec.push_back('O');
        }
        vl.push_back(vec);
    }
     ui->label->setText(QString(vl[0][0]));
     ui->label_2->setText(QString(vl[0][1]));
     ui->label_3->setText(QString(vl[0][2]));
     ui->label_4->setText(QString(vl[0][3]));
     ui->label_5->setText(QString(vl[1][0]));
     ui->label_6->setText(QString(vl[1][1]));
     ui->label_7->setText(QString(vl[1][2]));
     ui->label_8->setText(QString(vl[1][3]));
     ui->label_9->setText(QString(vl[2][0]));
     ui->label_10->setText(QString(vl[2][1]));
     ui->label_11->setText(QString(vl[2][2]));
     ui->label_12->setText(QString(vl[2][3]));
     ui->label_13->setText(QString(vl[3][0]));
     ui->label_14->setText(QString(vl[3][1]));
     ui->label_15->setText(QString(vl[3][2]));
     ui->label_16->setText(QString(vl[3][3]));
}

void MainWindow::print_revers(QVector<QVector<int>>& v)
{
     int SIZE = 4;
     QVector<QVector<QChar>> vl;
     for(int i=0; i<SIZE;i++)
     {
        QVector<QChar> vec;
        for (int j = 0; j <SIZE ; j++) {
            if(v[i][j]==0)
                vec.push_back('X');
            else
                vec.push_back('O');
        }
        vl.push_back(vec);
     }
     ui->label->setText(QString(vl[0][0]));
     ui->label_2->setText(QString(vl[0][1]));
     ui->label_3->setText(QString(vl[0][2]));
     ui->label_4->setText(QString(vl[0][3]));
     ui->label_5->setText(QString(vl[1][0]));
     ui->label_6->setText(QString(vl[1][1]));
     ui->label_7->setText(QString(vl[1][2]));
     ui->label_8->setText(QString(vl[1][3]));
     ui->label_9->setText(QString(vl[2][0]));
     ui->label_10->setText(QString(vl[2][1]));
     ui->label_11->setText(QString(vl[2][2]));
     ui->label_12->setText(QString(vl[2][3]));
     ui->label_13->setText(QString(vl[3][0]));
     ui->label_14->setText(QString(vl[3][1]));
     ui->label_15->setText(QString(vl[3][2]));
     ui->label_16->setText(QString(vl[3][3]));
}
void MainWindow::on_pushButton_clicked()
{

      srand(time(0));
     // Кількість 0 і 1 в послідовності
     int count0 = 8;
     int count1 = 9;

     // Генеруємо випадкову послідовність
     for (int i = 0; i <SIZE; ++i)
     {
        QVector<int> vec;
        for (int j = 0; j <SIZE ; j++)
        {

        int randomNumber = rand() % 2; // Генеруємо випадкове число 0 або 1

        // Перевіряємо, чи можемо додати ще одну 0 або 1
        if ((randomNumber == 0 && count0 > 0) || (randomNumber == 1 && count1 > 0))
        {
           vec.push_back(randomNumber);
            // Оновлюємо лічильники
            if (randomNumber == 0)
                count0--;
             else
                count1--;

        }
        else
           {
            // Якщо не можемо додати 0 або 1, спробуємо ще раз
            j--;
           }
        }
        v.push_back(vec);
     }

     print(v);

}

void MainWindow::on_pushButton_2_clicked()
{
         print_revers(v);
}


void MainWindow::on_pushButton_3_clicked()
{
         ui->label->setText(QString(""));
         ui->label_2->setText(QString(""));
         ui->label_3->setText(QString(""));
         ui->label_4->setText(QString(""));
         ui->label_5->setText(QString(""));
         ui->label_6->setText(QString(""));
         ui->label_7->setText(QString(""));
         ui->label_8->setText(QString(""));
         ui->label_9->setText(QString(""));
         ui->label_10->setText(QString(""));
         ui->label_11->setText(QString(""));
         ui->label_12->setText(QString(""));
         ui->label_13->setText(QString(""));
         ui->label_14->setText(QString(""));
         ui->label_15->setText(QString(""));
         ui->label_16->setText(QString(""));
        // cout<<v.size();
//         v.resize(v.size()-15);
}

