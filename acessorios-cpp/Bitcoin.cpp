#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Bitcoin.hpp"

Bitcoin::Bitcoin(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Bitcoin::gerarForcaAtaque()
{
    return maxForca;
}

string Bitcoin::gerarRuidoAtaque()
{
    return "EUUUU";
}