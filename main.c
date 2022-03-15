#include <stdio.h>
#include <conio.h>

int main(void)
{
    printf("********** TABELA KM PERCORRIDO **********");
    printf("\n");
    printf("****** DESENVOLVIDO POR PEDRO PARRO ******");
    printf("\n");
    printf("\n");
    
    float mediaTotal, litros, KmPercorrido;
    int kmInicio, kmFinal;
    
    //kmInicio
    printf("KM Inicial: ");
    scanf("%i",&kmInicio);
    printf("\n");
    
    //kmFinal
    printf("KM Final: ");
    scanf("%i",&kmFinal);
    printf("\n");
    
    //litros
    printf("Litros Abastecido: ");
    scanf("%f",&litros);
    printf("\n");
    
    //KM Percorrido
    KmPercorrido = kmFinal - kmInicio;
    printf("\n");
    
    //Media kmTotal
    mediaTotal = (KmPercorrido / litros);

    /*RESULTADO*/
    printf("*************** RESULTADO ****************");
    printf("\n");
    printf("\n");
    
    printf("KM inicial foi: %i",kmInicio);
    printf("\n");
    printf("KM final foi: %i",kmFinal);
    printf("\n");
    printf("Litros abastecidos foi: %.2f",litros);
    printf("\n");
    printf("KM percorrido foi: %.2f",KmPercorrido);
    printf("\n");
    printf("Sua média de consumo é: %.2f",mediaTotal);
    printf("\n");
    
    getch();
    return 0;
}
