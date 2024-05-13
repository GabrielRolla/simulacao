#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Resolver.hpp"

Resolver::Resolver(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Resolver::gerarForcaAtaque()
{
    return maxForca;
}

string Resolver::gerarRuidoAtaque()
{
    return "pá pá";
}