// criado no compilador online gdb!!!
#include <stdio.h>
int main()
{
    int x1,x2,valor,operador,resposta;
    do{
    printf("escolha a operaçao desejada 1:soma 2:subtraçao 3:multiplicaçao 4: divição:");
    scanf("%d",&valor);
    printf("digite o primeiro valor:");
    scanf("%d",&x1);
     printf("digite o segundo valor:");
    scanf("%d",&x2);
    
    if(valor==1){
        operador=x1+x2;
        printf("o valor da soma é:%d",operador);
    }
    else if(valor==2){
        operador=x1-x2;
          printf("o valor da subtraçao é:%d",operador);
    }
    else if(valor==3){
        operador=x1*x2;
          printf("o valor da multiplicação é:%d",operador);
    }
    else if(valor==4){
        operador=x1/x2;
         printf("o valor da divisão é:%d",operador);
    }
    printf("\nquer repetir alguma operaçao 1(sim) 2(não)");
    scanf("%d",&resposta);
}   while(resposta==1);
    printf("\nfim do programa");

    return 0;
}