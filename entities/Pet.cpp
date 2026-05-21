#include "Pet.h"
#include <cmath>

int Pet::id = 0;

Pet::Pet()
{
    std::cout<<"Construtor de Pet Chamado"<<std::endl;
    id ++;
}
Pet::Pet(std::string nomePet)
    : nome(nomePet),
      personalidade("Aventureiro"),
      humor("Feliz"),
      felicidade(65),
      xp_acumulado(0),
      nivel(0)
{
    std::cout<<"Pet de nome: "<< this->nome << " esta na existencia"<<std::endl;
    id ++;
}
Pet::~Pet()
{
   std::cout<<"Destrutor de Pet Chamado"<<std::endl;
   std::cout<<"Destruindo Pet da Existencia"<<std::endl;
   id --;
}

//Depois criar contador para Maximos de pontos de Felicidade que se pode ganhar alimentando no periodo do dia.
void Pet::alimentar()
{
    if(this->felicidade<100){
        this->felicidade +=5;
        this->xp_acumulado +=1;
        std::cout<<"Fui Alimentado"<<std::endl;
    }else
    {
        this->felicidade = 100;
        std::cout<<"Estou Cheio"<<std::endl;
    }
this->atualizar();
this->calcularNivel();

}

void Pet::brincar()
{
    if(this->felicidade<100){
        this->felicidade +=10;
        this->xp_acumulado +=10;
        std::cout<<"Estou Gostando"<<std::endl;
    }else
    {
        this->felicidade = 100;
        this->xp_acumulado +=1;
        std::cout<<"Estou em Extase"<<std::endl;
    }
this->atualizar();
this->calcularNivel();

}

void Pet::dormir()
{
    if(this->felicidade<100){
        this->felicidade +=20;
        std::cout<<"Estou Dormindo"<<std::endl;
    }else
    {
        this->felicidade = 100;
        std::cout<<"Hora de Levantar"<<std::endl;
    }
this->atualizar();
}

void Pet::atualizar()
{
    std::cout<<"Atualizar Caracteristicas"<<std::endl;
    if((this->felicidade >= 50) and (this->felicidade < 70))
    {
        this->humor = "Feliz";
    }else if((this->felicidade < 50) and (this->felicidade >=20))
    {
        this->humor = "Desanimado";
    }else if(this->felicidade < 20)
    {
        this->humor = "Triste";
    }else
    {
        this->humor = "Super Feliz";
    }
//Adicionar Calcular Nivel
this->calcularNivel();
}

void Pet::imprimir()
{
    std::cout<<"DADOS DO PET**************************"<<std::endl;
    std::cout<<"NOME: "<< this->nome <<std::endl;
    std::cout<<"PERSONALIDADE: "<< this->personalidade <<std::endl;
    std::cout<<"HUMOR: "<< this->humor <<std::endl;
    std::cout<<"FEICIDADE: "<< this->felicidade <<std::endl;
    std::cout<<"XP ACUMULADO: "<< this->xp_acumulado <<std::endl;
    std::cout<<"NIVEL: "<< this->nivel <<std::endl;
    std::cout<<"**************************************"<<std::endl;

}

int Pet::calcularNivel()
{
    int nivelAntigo = this->nivel;

    this->nivel = std::sqrt(this->xp_acumulado / 10);

    if(this->nivel > nivelAntigo)
    {
        std::cout << "LEVEL UP!" << std::endl;
        std::cout << "Novo Nivel: "
                  << this->nivel
                  << std::endl;
    }

    return this->nivel;
}

int Pet::getFelicidade()
{
    return this->felicidade;
}

int Pet::getXp()
{
    return this->xp_acumulado;
}

int Pet::getNivel()
{
    return this->nivel;
}

std::string Pet::getNome(){
    return this->nome;
}
