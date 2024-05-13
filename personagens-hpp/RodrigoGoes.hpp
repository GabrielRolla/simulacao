#ifndef RODRIGOGOES
#define RODRIGOGOES
#include "../core-simulador-hpp/Personagem.hpp"
class RodrigoGoes : public Personagem
{
    public:
        RodrigoGoes(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif