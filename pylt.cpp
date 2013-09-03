#include <iostream>

#include "pylt.h"
#include "ui_pylt.h"

Pylt::Pylt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pylt)
{
    ui->setupUi(this);

    QObject::connect(ui->pushButton_19, SIGNAL(clicked()), this , SLOT(AllGo()));
    QObject::connect(ui->pushButton_20, SIGNAL(clicked()), this , SLOT(Stop()));

    QObject::connect(ui->pushButton, SIGNAL(clicked()), this , SLOT(Plus()));
    QObject::connect(ui->pushButton_3, SIGNAL(clicked()), this , SLOT(Minus()));
    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this , SLOT(Period()));

  //  QObject::connect(ui->pushButton_20, SIGNAL(clicked()), this , SLOT(Stop()));

    ui->lineEdit->setValidator(new QRegExpValidator(QRegExp("(\\+|-)?\\d+")));
    ui->lineEdit_2->setValidator(new QRegExpValidator(QRegExp("(\\+|-)?\\d+")));
    ui->lineEdit_3->setValidator(new QRegExpValidator(QRegExp("(\\+|-)?\\d+")));
    ui->lineEdit_4->setValidator(new QRegExpValidator(QRegExp("(\\+|-)?\\d+")));
    ui->lineEdit_5->setValidator(new QRegExpValidator(QRegExp("(\\+|-)?\\d+")));
    ui->lineEdit_6->setValidator(new QRegExpValidator(QRegExp("(\\+|-)?\\d+")));

    ui->lineEdit->setText("1000");
    ui->lineEdit_2->setText("1000");
    ui->lineEdit_3->setText("1000");
    ui->lineEdit_4->setText("1000");
    ui->lineEdit_5->setText("1000");
    ui->lineEdit_6->setText("1000");


//fghb uhg vgh mkbd h
}

Pylt::~Pylt()
{
    delete ui;
}

void Pylt::AllGo()
{
    //FIXME: заметь здесь можно сделать цикл, как то так:
    //for(int i=0;i<suppButtons.size();i++) suppButtons[i]->setChecked(1);
    // конечно в конструкторе этот массив надо проиниц, для массива всегда лучше пользовать std::vector


ui->pushButton_4->setChecked(1);
ui->pushButton_5->setChecked(1);
ui->pushButton_6->setChecked(1);
ui->pushButton_7->setChecked(1);
ui->pushButton_8->setChecked(1);
ui->pushButton_9->setChecked(1);
 ui->pushButton_10->setChecked(1);
 ui->pushButton_11->setChecked(1);
 ui->pushButton_12->setChecked(1);
 ui->pushButton_13->setChecked(1);
 ui->pushButton_14->setChecked(1);
 ui->pushButton_15->setChecked(1);

}

void Pylt::Stop()
{
    ui->pushButton_4->setChecked(0);
    ui->pushButton_5->setChecked(0);
    ui->pushButton_6->setChecked(0);
    ui->pushButton_7->setChecked(0);
    ui->pushButton_8->setChecked(0);
    ui->pushButton_9->setChecked(0);
     ui->pushButton_10->setChecked(0);
     ui->pushButton_11->setChecked(0);
     ui->pushButton_12->setChecked(0);
     ui->pushButton_13->setChecked(0);
     ui->pushButton_14->setChecked(0);
     ui->pushButton_15->setChecked(0);

}


void Pylt::Plus()
{
    std::cout << "Plus" << std::endl;
    //TODO:
    //Логика следующая:
    //необходимо знать виджет(LineEdit) в каком будем изменять данные
    //Это виджет по которому последний раз тыкнули мышой, либо кто то по умолчанию (если еще никуда не тыкали)
    //Вводим поле currentLineEdit, в конструкторе присваеваем ui->lineEdit - это будет по умолчанию.
    //Для обработки кого последний раз ткнули мышой:
    //на lineEdit'ы вешаем обработчик на сигнал приобретения фокуса (как то так должен называться)
    //в этом обработчике пишем как то так:
    //currentLineEdit = sender;  - те кто прислал сигнал тот и последний

    //а в методе Plus  делаем как то так:
    //QString lValue = currentLineEdit->text();
    //lValue = QString().fromInt(lValue.toInt() ++);
    //currentLineEdit->setText(lValue);


}

void Pylt::Minus()
{

    std::cout << "Minus" << std::endl;
}

void Pylt::Period()
{
    std::cout << "Period" << std::endl;
}
