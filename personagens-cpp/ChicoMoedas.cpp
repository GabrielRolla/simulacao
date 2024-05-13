#include "../personagens-hpp/ChicoMoedas.hpp"

ChicoMoedas::ChicoMoedas(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int ChicoMoedas::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int ChicoMoedas::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string ChicoMoedas::pegarDescricao() 
{
    return "Quem não erra em 2023?";
}