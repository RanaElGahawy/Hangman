#ifndef HANGMAN_H
#define HANGMAN_H
#include<QPainter>
#include<QGraphicsItem>
#include<QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include<QTimer>
#include <QDialog>
#include <QLineF>

QT_BEGIN_NAMESPACE
namespace Ui { class Hangman; }
QT_END_NAMESPACE

class Hangman : public QDialog
{
    Q_OBJECT

public:
    Hangman(QWidget *parent = nullptr);
    ~Hangman();
    void head();
    void stand();
    void body();
    void hand();
    void legs();

private slots:
    void on_A_clicked();

    void on_B_clicked();

    void on_C_clicked();

    void on_D_clicked();

    void on_E_clicked();

    void on_F_clicked();

    void on_G_clicked();

    void on_H_clicked();

    void on_I_clicked();

    void on_J_clicked();

    void on_K_clicked();

    void on_L_clicked();

    void on_M_clicked();

    void on_N_clicked();

    void on_O_clicked();

    void on_P_clicked();

    void on_Q_clicked();

    void on_R_clicked();

    void on_S_clicked();

    void on_T_clicked();

    void on_U_clicked();

    void on_V_clicked();

    void on_W_clicked();

    void on_X_clicked();

    void on_Y_clicked();

    void on_Z_clicked();

private:
    Ui::Hangman *ui;
    QGraphicsScene* scene;
    QGraphicsEllipseItem* ellipse;
    QGraphicsRectItem* rectangle;
    int counter_right = 0;
    int counter_wrong = 0;
    void check();
    QLineF* rightarm;
    QLineF* leftarm;
    QLineF* rightleg;
    QLineF* leftleg;
};
#endif // HANGMAN_H
