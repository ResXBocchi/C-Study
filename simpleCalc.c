#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Declara variaveis
    double a, b;
    char operator;
    int keepalive = 1;
    //Instrui usuario
    printf("\n|##################|\n|Calculadora FIAP  |\n|rm95147\
           |\n|Operacoes:        |\n|+ - * / ^ %%       |\n|####\
##############|\n\n");
    //Do-While Operacoes Matematicas
    do{
        printf("Insira a expressao a ser avaliada.\n");
        scanf("%lf %c %lf",&a,&operator,&b);

        if(operator=='+'){
            printf("%.2lf\n",a+b);
        }
        else if(operator=='*'){
            printf("%.2lf\n",a*b);        
        }
        else if(operator=='/'){
            printf("%.2lf\n",a/b);
        }
        else if(operator=='-'){
            printf("%.2lf\n",a-b);
        }
        else if(operator=='^'){
            printf("%.2lf\n",pow(a,b));
        }
        else if(operator=='%'){
            printf("%.2lf\n",(b/a)*100);
        }
        printf("Gostaria de realizar outro calculo? (1 para sim)\n");
        scanf("%d",&keepalive);
    } while(keepalive == 1);
    return 0;
}