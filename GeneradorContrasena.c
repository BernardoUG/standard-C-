#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Mi primer generador de contrasenas en C

    srand(time(0));

    char Mayusculas [26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char Minusculas [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char Caracteres_especiales [10] = {'!','@','#','$','%','^','&','*','?','-'};
    int Numeros [] = {0,1,2,3,4,5,6,7,8,9};
    char contrasena [14];

    for (int i = 0; i < 14; i++) {
        int tipo = rand() % 4;

        if (tipo == 0) {
            contrasena[i] = Mayusculas[rand() % 26]; 
        } else if (tipo == 1) {
            contrasena[i] = Minusculas[rand() % 26]; 
        } else if (tipo == 2) {
            contrasena[i] = '0' + (rand() % 10); 
        } else {
            contrasena[i] = Caracteres_especiales[rand() % 10];  
        }
    }

    printf("%s", contrasena);

}