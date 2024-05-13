#include "../personagens-hpp/Dwight.hpp"

Dwight::Dwight(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Dwight::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Dwight::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Dwight::pegarDescricao() 
{
    return "That's what she said";
}