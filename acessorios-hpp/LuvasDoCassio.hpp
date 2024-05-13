#ifndef LUVAS
#define LUVAS

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class LuvasDoCassio : public ArmaDefesa
{
    public:
        LuvasDoCassio(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif