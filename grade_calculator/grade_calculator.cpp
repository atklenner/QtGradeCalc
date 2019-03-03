#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked(bool)),
                         this,SLOT(update_overall(bool)));
}

grade_calculator::~grade_calculator()
{
    delete ui;
}

void grade_calculator::update_overall(bool unused){
    double score = 0;
if(ui->radioButton->isChecked()){
    score = (ui->hw_1->value() + ui->hw_2->value()
            + ui->hw_3->value() + ui->hw_4->value()
            + ui->hw_5->value() + ui->hw_6->value()
            + ui->hw_7->value() + ui->hw_8->value()) * (0.25/160)
            + (ui->midterm_1->value()+ ui->midterm_2->value()) * (0.40/200)
            + (ui->final_2->value()) * (0.35/100);
} else {
    score = (ui->hw_1->value() + ui->hw_2->value()
            + ui->hw_3->value() + ui->hw_4->value()
            + ui->hw_5->value() + ui->hw_6->value()
            + ui->hw_7->value() + ui->hw_8->value()) * (0.25/160)
            + (ui->midterm_1->value()) * (0.30/100)
            + (ui->final_2->value()) * (0.44/100);
}
    ui->lcdNumber->display(QString::number(score * 100));

    return;
}
