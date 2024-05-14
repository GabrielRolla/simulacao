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

#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* baseballBat  = new BaseballBat("Baseball Bat",10, 60);
    ArmaAtaque* bitcoin = new Bitcoin("BitCoin",10, 60);
    ArmaAtaque* rosa = new Rosa("Rosa do Igu",10, 60);
    ArmaAtaque* raygun = new Raygun("Ray Gun",10, 60);
    ArmaDefesa* suco = new Suco("Suco Fake Natty", 10);
    ArmaDefesa* recyclops = new Recyclops("Recyclops", 10);
    ArmaDefesa* luvasDoCassio = new LuvasDoCassio("Luvas do Cassio", 10);
    ArmaDefesa* jager = new Jager("SDA Jager", 10);
    
    Personagem* p1 = new RodrigoGoes(1, "Rodrigo Goes", 120, baseballBat, suco);
    Personagem* p2 = new ChicoMoedas(2, "Chico Moedas", 90, bitcoin, jager);
    Personagem* p3 = new Dwight(3, "Dwight Schrute", 110, raygun, recyclops);
    Personagem* p4 = new IguinhoJob(4, "Igor Job From Brasil", 100, rosa, luvasDoCassio);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 2);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}