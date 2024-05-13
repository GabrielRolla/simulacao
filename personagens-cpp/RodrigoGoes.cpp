#include "../personagens-hpp/RodrigoGoes.hpp"

RodrigoGoes::RodrigoGoes(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int RodrigoGoes::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int RodrigoGoes::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string RodrigoGoes::pegarDescricao() 
{
    return "QUEM VOCÊ PENSA QUE É?";
}