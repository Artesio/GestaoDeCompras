#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <QString>
using namespace std;
class Funcionario
{
public:
    Funcionario();
    void efectuarCompras(bool checa);
    void setSaldoInicial(double saldoInicial);
    void setSaldoActual(double saldoActual);
    void setTrocos(double Trocos);
    void setQuantidadeOutrasCompras(int quantidadeOutras);
    void setQuantidadePao(int quantidadePao);
    void setValorToltal(double valorTotal);
    void setPrecoOutras(double precoOutras);
    void setPrecoPao(double precoPao);
    void setValorInicial(double valorInicial);
    void setDescricaoOutas(string descricaoOutras){this->descricaoOutras=descricaoOutras;}

    //getters
    double getSaldoInicial(){return this->saldoInicial; }
    double getValorInicial(){return this->valorInicial; }
    double getSaldoActual(){return this->saldoActual ;}
    double getTrocos(){return this->trocos ;}
    int getQuantidadeOutrasCompras(){return this->quantidadeOutrasCompras; }
    double getQuantidadePao(){return this->quantidade;}
    double getValorToltal(){return this->valorTotal;}
    double getPrecoOutras(){return this->precoOutrasCompras;}
    double getPrecoPao(){return this->PrecoPao;}
    string getDescricaoOutras(){return this->descricaoOutras;}

private:
    double saldoInicial, saldoActual, valorTotal;
    double trocos, precoOutrasCompras, PrecoPao=0, valorInicial=0;
    int quantidade=0, quantidadeOutrasCompras;
    string descricaoOutras;

};

#endif // FUNCIONARIO_H
