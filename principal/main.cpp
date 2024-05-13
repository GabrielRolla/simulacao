#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/RodrigoGoes.hpp"
#include "../personagens-hpp/IguinhoJob.hpp"
#include "../personagens-hpp/Lactea.hpp"
#include "../personagens-hpp/ChicoMoedas.hpp"
#include "../personagens-hpp/Dwight.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

#include "../acessorios-hpp/BaseballBat.hpp"
#include "../acessorios-hpp/Bitcoin.hpp"
#include "../acessorios-hpp/EscudoExtensivel.hpp"
#include "../acessorios-hpp/Jager.hpp"
#include "../acessorios-hpp/KorekMachete.hpp"

#include "../acessorios-hpp/LuvasDoCassio.hpp"
#include "../acessorios-hpp/Raygun.hpp"
#include "../acessorios-hpp/Recyclops.hpp"
#include "../acessorios-hpp/Resolver.hpp"
#include "../acessorios-hpp/Suco.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* baseballBat  = new BaseballBat("Baseball Bat",10,30);
    ArmaAtaque* bitcoin = new Bitcoin("BitCoin",5,20);
    ArmaAtaque* rosa = new Rosa("Rosa do Igu",0,20);
    ArmaAtaque* raygun = new Raygun("Ray Gun",30,70);
    ArmaDefesa* suco = new Suco("Suco Fake Natty", 2);
    ArmaDefesa* recyclops = new Recyclops("Recyclops", 10);
    ArmaDefesa* luvasDoCassio = new LuvasDoCassio("Luvas do Cassio", 5);
    ArmaDefesa* jager = new Jager("SDA Jager", 8);
    
    Personagem* p1 = new RodrigoGoes(1, "Rodrigo Goes", 120, baseballBat, suco);
    Personagem* p3 = new ChicoMoedas(1, "Chico Moedas", 90, bitcoin, jager);
    Personagem* p2 = new Dwight(2, "Dwight Shrute", 110, raygun, recyclops);
    Personagem* p4 = new IguinhoJob(2, "Igor Job From Brasil", 100, rosa, luvasDoCassio);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 2);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}