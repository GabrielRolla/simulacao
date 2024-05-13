#ifndef CHICO_MOEDAS
#define CHICO_MOEDAS
#include "../core-simulador-hpp/Personagem.hpp"
class ChicoMoedas : public Personagem
{
    public:
        ChicoMoedas(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif