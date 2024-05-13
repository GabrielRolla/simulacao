#include "../personagens-hpp/Lactea.hpp"

Lactea::Lactea(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Lactea::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Lactea::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Lactea::pegarDescricao() 
{
    return "Que isso meu fi?";
}