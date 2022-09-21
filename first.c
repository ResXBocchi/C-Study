/*
Comentários vêm aqui.
*/

// Ou aqui

#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[10];
    char surname[10];
    printf("Insira o seu nome completo:\n");
    scanf("%s %s",name, surname);
    printf("Seu bendito nome: %s %s",name, surname);
    return 0;
}