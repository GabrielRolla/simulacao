#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Jager.hpp"

Jager::Jager(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Jager::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Jager::getResistencia() 
{
     
    
    return this->resistencia * 3 - 10;

}