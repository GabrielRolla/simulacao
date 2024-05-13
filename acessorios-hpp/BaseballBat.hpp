#ifndef BASEBALLBAT
#define BASEBALLBAT

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class BaseballBat : public ArmaAtaque
{
    public:
        BaseballBat(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif