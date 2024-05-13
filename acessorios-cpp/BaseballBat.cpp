#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/BaseballBat.hpp"

BaseballBat::BaseballBat(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int BaseballBat::gerarForcaAtaque()
{
    return maxForca;
}

string BaseballBat::gerarRuidoAtaque()
{
    return "FAKE NATTY";
}