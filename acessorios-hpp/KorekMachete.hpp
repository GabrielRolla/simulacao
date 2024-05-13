#ifndef KOREKMACHETE
#define KOREKMACHETE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class KorekMachete : public ArmaAtaque
{
    public:
        KorekMachete(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif