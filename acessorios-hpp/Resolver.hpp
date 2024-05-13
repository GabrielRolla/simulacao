#ifndef RESOLVER
#define RESOLVER

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Resolver : public ArmaAtaque
{
    public:
        Resolver(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif