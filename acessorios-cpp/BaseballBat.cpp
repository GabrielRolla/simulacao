#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/BaseballBat.hpp"

BaseballBat::BaseballBat(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int BaseballBat::gerarForcaAtaque()
{
    return maxForca - minForca + 8;
}

string BaseballBat::gerarRuidoAtaque()
{
    return "FAKE NATTY";
}