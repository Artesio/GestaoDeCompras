#ifndef COMPRADOR_H
#define COMPRADOR_H
#include <iostream>
#include <string>
#include <QMainWindow>
#include <funcionario.h>
namespace Ui {
class Comprador;
}

class Comprador : public QMainWindow
{
    Q_OBJECT

public:
    explicit Comprador(QWidget *parent = nullptr);
    ~Comprador();
bool checar;
Funcionario fun;


private slots:
    void on_checkBox_clicked();
    void on_checkBox_released();
    void on_checkBox_clicked(bool checked);
    void on_EHoras_timeChanged(const QTime &time);
    void on_pushButton_clicked();
    void on_entradaValorInicial_textChanged(const QString &valorInicial);
    void on_PrecoPao_textChanged(const QString &preco);
    void on_QuantidadePao_textChanged(const QString &quantidade);
    void on_EntradaDescricaoOutrasCompras_textChanged(const QString &DescricaoOutras);
    void on_entradaQuantidadeOutrasCompras_textChanged(const QString &QuantidadeOutras);
    void on_entradaPrecoOutrasCompras_textChanged(const QString &PrecoOutras);

    void on_pushButton_3_clicked();

private:
    Ui::Comprador *ui;

};

#endif // COMPRADOR_H
