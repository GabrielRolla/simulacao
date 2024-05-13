#ifndef RAYGUN
#define RAYGUN

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Raygun : public ArmaAtaque
{
    public:
        Raygun(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif