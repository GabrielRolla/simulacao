#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Resolver.hpp"

Resolver::Resolver(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Resolver::gerarForcaAtaque()
{
    return (minForca + 1) * 6 - (minForca * 2);
}

string Resolver::gerarRuidoAtaque()
{
    return "pá pá";
}