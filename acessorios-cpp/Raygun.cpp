#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Raygun.hpp"

Raygun::Raygun(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Raygun::gerarForcaAtaque()
{
    return maxForca;
}

string Raygun::gerarRuidoAtaque()
{
    return "plewn plewn";
}