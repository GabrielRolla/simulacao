#include "../personagens-hpp/IguinhoJob.hpp"

IguinhoJob::IguinhoJob(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int IguinhoJob::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int IguinhoJob::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string IguinhoJob::pegarDescricao() 
{
    return "Sarneia vida";
}