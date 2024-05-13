#ifndef BITCOIN
#define BITCOIN

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Bitcoin : public ArmaAtaque
{
    public:
        Bitcoin(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif