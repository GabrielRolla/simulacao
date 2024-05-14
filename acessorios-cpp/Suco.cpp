#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Suco.hpp"

Suco::Suco(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Suco::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Suco::getResistencia() 
{
    return this->resistencia + 5;
}