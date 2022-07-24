#include <stdio.h> 

int n = 21;

int main() {
    if (n > 20 && n < 20) {
        printf("El numero es mayor que diez, pero es menor que 20");
    } else if (n == 10){
        printf("El numero es diez");
    } else if (n > 20) {
        printf("El numero es mayor que 20");
    } else if (n < 10){
        printf("El numero es menor que 10");
    }
    else 
    printf("Error no hay numero");
}