#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/LuvasDoCassio.hpp"

LuvasDoCassio::LuvasDoCassio(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string LuvasDoCassio::getDescricaoArma() 
{
    return this->descricaoArma;
}

int LuvasDoCassio::getResistencia() 
{
    return this->resistencia;
}