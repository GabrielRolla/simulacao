#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Recyclops.hpp"

Recyclops::Recyclops(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Recyclops::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Recyclops::getResistencia() 
{
    return this->resistencia + 12;
}