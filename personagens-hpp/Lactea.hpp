#ifndef LACTEA
#define LACTEA
#include "../core-simulador-hpp/Personagem.hpp"
class Lactea : public Personagem
{
    public:
        Lactea(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif