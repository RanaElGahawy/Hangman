#include "hangman.h"
#include "ui_hangman.h"

Hangman::Hangman(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Hangman)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(-300,-300,300,300);

}

void Hangman :: head()
{
   QBrush BlackBrush ( Qt :: black);
   QPen Whitepen(Qt::white);
   Whitepen.setWidth(6);
   ellipse = scene->addEllipse(-360, -370, 100, 100, Whitepen, BlackBrush);

}

void Hangman :: stand()
{
    QBrush BlackBrush ( Qt :: black);
    QPen Whitepen(Qt::white);
    Whitepen.setWidth(6);
    rectangle = scene->addRect(-470, -450, 3, 550, Whitepen, BlackBrush);
    rectangle = scene->addRect(-470, -450, 160, 3, Whitepen, BlackBrush);
    rectangle = scene->addRect(-310, -450, 3, 80, Whitepen, BlackBrush);
    rectangle = scene->addRect(-525, 100, 120, 3, Whitepen, BlackBrush);
}

void Hangman :: body()
{
    QBrush BlackBrush ( Qt :: black);
    QPen Whitepen(Qt::white);
    rectangle = scene->addRect(-310, -270, 3, 230, Whitepen, BlackBrush);
}
Hangman::~Hangman()
{
    delete ui;
}


void Hangman :: hand()
{
    QPen Whitepen(Qt::white);
    Whitepen.setWidth(6);
    rightarm = new QLineF (QPoint (-310,-200), QPoint (-260, -150));
    scene->addLine(*rightarm, Whitepen);
    leftarm = new QLineF (QPoint (-310,-200), QPoint (-360, -150));
    scene->addLine(*leftarm, Whitepen);
}

void Hangman :: legs()
{
    QPen Whitepen(Qt::white);
    Whitepen.setWidth(6);
    rightleg = new QLineF (QPoint (-310,-40), QPoint (-260, 10));
    scene->addLine(*rightleg, Whitepen);
    leftleg = new QLineF (QPoint (-310,-40), QPoint (-360, 10));
    scene->addLine(*leftleg, Whitepen);
}


void Hangman :: check()
{

    if (counter_right < 7)
    {
    switch (counter_wrong)
    {
case 0:
    {break;}
    case 1:
    { stand(); break;}
    case 2:
    { head(); break;}
    case 3:
    { body(); break; }
    case 4:
    {hand(); break; }
    case 5:
    {legs();
     ui->lineEdit_8->setText ("GAME OVER!!!"); break; }
   }
   }
    else
    {
        ui->lineEdit_8->setText ("YOU WON!!!");
    }

}

void Hangman::on_A_clicked()
{
 ui->lineEdit->setText("A");
 ui->lineEdit_6->setText("A");
 counter_right += 2;
 check();
}

void Hangman::on_B_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_C_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_D_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_E_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_F_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_G_clicked()
{
    ui->lineEdit_2->setText("G");
    counter_right++;
    check();
}

void Hangman::on_H_clicked()
{
    ui->lineEdit_7->setText("H");
    counter_right++;
    check();
}

void Hangman::on_I_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_J_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_K_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_L_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_M_clicked()
{
    ui->lineEdit_4->setText("M");
    counter_right++;
    check();
}

void Hangman::on_N_clicked()
{
    ui->lineEdit_3->setText("N");
    ui->lineEdit_5->setText("N");
    counter_right+=2;
    check();
}

void Hangman::on_O_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_P_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_Q_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_R_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_S_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_T_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_U_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_V_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_W_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_X_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_Y_clicked()
{
    counter_wrong++;
    check();
}

void Hangman::on_Z_clicked()
{
    counter_wrong++;
    check();
}

