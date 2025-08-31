#include <stdio.h>

void moverTorre (int casasT){

if (casasT > 0)
{
    printf("Direita \n");
    moverTorre (casasT - 1);
}

}

void moverBispo(int casasB){
    if (casasB > 0)
    {
        printf("Cima Direita \n");
        moverBispo (casasB -1);
    }
    
}

void moverRainha(int casasR){
    if (casasR > 0)
    {
        printf("Esquerda \n");
        moverRainha(casasR - 1);
    }
    
}



int main(){

//Mover torre

moverTorre(5);

//Mover bispo

moverBispo(5);

//Mover rainha

moverRainha(8);

//Mover Cavalo

for (int moverCavalo = 0; moverCavalo < 3; moverCavalo++)
{
    if (moverCavalo < 2)
    {
        printf("Cima ");
        continue;
    }
    printf("Direita \n");
    break;
}



    return 0;
}