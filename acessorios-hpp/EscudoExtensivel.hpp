#ifndef ESCUDOEXTENSIVEL
#define ESCUDOEXTENSIVEL

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class EscudoExtensivel : public ArmaDefesa
{
    public:
        EscudoExtensivel(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif