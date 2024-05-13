#ifndef IGUINHOJOB
#define IGUINHOJOB
#include "../core-simulador-hpp/Personagem.hpp"
class IguinhoJob : public Personagem
{
    public:
        IguinhoJob(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif