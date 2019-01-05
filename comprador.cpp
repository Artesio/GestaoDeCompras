#include "comprador.h"
#include "ui_comprador.h"
#include <QDateTime>
#include <QTime>
#include <QTimeZone>
#include <funcionario.h>
#include <QString>
#include <QMessageBox>
#include <string>

using namespace std;
Comprador::Comprador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Comprador)
{
    ui->setupUi(this);
    ui->EntradaDescricaoOutrasCompras->setVisible(false);
    ui->entradaPrecoOutrasCompras->setVisible(false);
    ui->entradaQuantidadeOutrasCompras->setVisible(false);
    ui->LPrecoOutras->setVisible(false);
    ui->LDescricaoOutras->setVisible(false);
    ui->LQuantidadeOutras->setVisible(false);
      Funcionario fun;
      ui->LSaldoActual->setNum(fun.getSaldoActual());
}

Comprador::~Comprador()
{
    delete ui;
}

void Comprador::on_checkBox_clicked()
{
    ui->EntradaDescricaoOutrasCompras->setVisible(true);
    ui->entradaPrecoOutrasCompras->setVisible(true);
    ui->entradaQuantidadeOutrasCompras->setVisible(true);
    ui->LPrecoOutras->setVisible(true);
    ui->LDescricaoOutras->setVisible(true);
    ui->LQuantidadeOutras->setVisible(true);

}

void Comprador::on_checkBox_released()
{
    ui->EntradaDescricaoOutrasCompras->setVisible(false);
    ui->entradaPrecoOutrasCompras->setVisible(false);
    ui->entradaQuantidadeOutrasCompras->setVisible(false);
}

void Comprador::on_checkBox_clicked(bool checked)
{
    if(checked==false){
        ui->EntradaDescricaoOutrasCompras->setVisible(false);
        ui->entradaPrecoOutrasCompras->setVisible(false);
        ui->entradaQuantidadeOutrasCompras->setVisible(false);
        ui->LPrecoOutras->setVisible(false);
        ui->LDescricaoOutras->setVisible(false);
        ui->LQuantidadeOutras->setVisible(false);

    }
    checar=checked;
}

void Comprador::on_EHoras_timeChanged(const QTime &time)
{
    QTime hora=time.currentTime();
    ui->EHoras->setTime(hora);
}

void Comprador::on_pushButton_clicked()
{
fun.efectuarCompras(checar);
}

void Comprador::on_entradaValorInicial_textChanged(const QString &valorInicial)
{
    fun.setValorInicial(valorInicial.toDouble());
}

void Comprador::on_PrecoPao_textChanged(const QString &preco)
{
    fun.setPrecoPao(preco.toDouble());
}

void Comprador::on_QuantidadePao_textChanged(const QString &quantidade)
{
   fun.setQuantidadePao(quantidade.toInt());
}

void Comprador::on_EntradaDescricaoOutrasCompras_textChanged(const QString &DescricaoOutras)
{
fun.setDescricaoOutas(DescricaoOutras.toStdString());
}

void Comprador::on_entradaQuantidadeOutrasCompras_textChanged(const QString &QuantidadeOutras)
{
fun.setQuantidadeOutrasCompras(QuantidadeOutras.toInt());
}

void Comprador::on_entradaPrecoOutrasCompras_textChanged(const QString &PrecoOutras)
{
fun.setPrecoOutras(PrecoOutras.toDouble());
}

void Comprador::on_pushButton_3_clicked()
{
     fun.efectuarCompras(checar);
    ui->LTrocosPao->setNum(fun.getTrocos());
    ui->LValorTotalCompra->setNum(fun.getValorToltal());
    ui->LSaldoActual->setNum(fun.getSaldoActual());


}
