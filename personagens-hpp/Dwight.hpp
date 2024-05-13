#ifndef DWIGHT
#define DWIGHT
#include "../core-simulador-hpp/Personagem.hpp"
class Dwight : public Personagem
{
    public:
        Dwight(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif