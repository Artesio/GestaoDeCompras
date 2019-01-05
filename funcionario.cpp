#include "funcionario.h"
#include "comprador.h"

Funcionario::Funcionario()
{
    setSaldoActual(1000);

}
void Funcionario::efectuarCompras(bool checa)
{
if(checa==true){

    setTrocos(getValorInicial()-(getPrecoPao()+getPrecoOutras()));
    setValorToltal(getPrecoPao()+getPrecoOutras());
    setSaldoActual(getSaldoActual()+-(getPrecoPao()+getPrecoOutras()));
}else{
    setTrocos(getValorInicial()-getPrecoPao());
    setValorToltal(getPrecoPao());
    setSaldoActual(getSaldoActual()+-getPrecoPao());
}
}

void Funcionario::setValorInicial(double valorInicial)
{
    this->valorInicial=valorInicial;
}
void Funcionario::setTrocos(double Trocos)
{
    this->trocos=Trocos;
}

void Funcionario::setSaldoActual(double saldoActual)
{
 this->saldoActual=saldoActual;
}
void Funcionario::setValorToltal(double valorTotal)
{
 this->valorTotal=valorTotal;
}
void Funcionario::setSaldoInicial(double saldoInicial)
{
 this->saldoInicial=saldoInicial;
}
void Funcionario::setQuantidadePao(int quantidadePao)
{
 this->quantidade=quantidadePao;
}
void Funcionario::setQuantidadeOutrasCompras(int quantidadeOutras)
{
   this->quantidadeOutrasCompras=quantidadeOutras;
}
void Funcionario::setPrecoPao(double precoPao)
{
    this->PrecoPao=precoPao;
}
void Funcionario::setPrecoOutras(double precoOutras)
{
    this->precoOutrasCompras=precoOutras;
}

