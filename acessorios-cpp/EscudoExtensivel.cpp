#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/EscudoExtensivel.hpp"

EscudoExtensivel::EscudoExtensivel(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string EscudoExtensivel::getDescricaoArma() 
{
    return this->descricaoArma;
}

int EscudoExtensivel::getResistencia() 
{
    return this->resistencia + 8;
}