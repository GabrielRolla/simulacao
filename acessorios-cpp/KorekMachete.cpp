#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/KorekMachete.hpp"

KorekMachete::KorekMachete(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int KorekMachete::gerarForcaAtaque()
{
    return maxForca - 8;
}

string KorekMachete::gerarRuidoAtaque()
{
    return "slin slin";
}