#include "mywidget.h"
#include "ui_mywidget.h"

#include <QHBoxLayout>
#include <QGridLayout>


MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);

//    QVBoxLayout * layout = new QVBoxLayout;
//    layout->addWidget(ui->label);
//    layout->addWidget(ui->label_2);
//    layout->addWidget(ui->label_3);
//    layout->setSpacing(50);
//    layout->setContentsMargins(0,0,50,100);

//    setLayout(layout);

    /*
    QGridLayout * pLayout = new QGridLayout;
    pLayout->addWidget(ui->label,       0,0,1,1, Qt::AlignLeft | Qt::AlignVCenter);
    pLayout->addWidget(ui->label_2,     0,1,1,1, Qt::AlignLeft | Qt::AlignVCenter);
    pLayout->addWidget(ui->label_3,     1,0,1,1, Qt::AlignLeft | Qt::AlignVCenter);
    pLayout->addWidget(ui->pushButton,  1,1,1,1, Qt::AlignLeft | Qt::AlignVCenter);
    pLayout->addWidget(ui->checkBox,    2,0,1,1);
    pLayout->addWidget(ui->lineEdit,2,1,1,1);
    pLayout->addWidget(ui->spinBox,3,0,1,3);
    */

    //pLayout->setSizeConstraint()
    //pLayout->setGeometry( QRect(10,10,200,200) );
    // 设置水平间距
    //pLayout->setHorizontalSpacing(10);
    // 设置垂直间距
    //pLayout->setVerticalSpacing(30);
    // 设置外间距
    //pLayout->setContentsMargins(500, 100, 30, 500);

    //setLayout(pLayout);

}

MyWidget::~MyWidget()
{
    delete ui;
}

