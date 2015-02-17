#include <stdio.h>
#include <stdlib.h>

int fattorialeIterativo(int n);
int fattorialeRicorsivo(int n);

int main(int argc, char** argv) {
    int n;
    int rIterativo, rRicorsivo;
    
    printf("Inserisci un numero naturale non negativo: ");
    scanf("%d", &n);
    
    rIterativo = fattorialeIterativo(n);
    rRicorsivo = fattorialeRicorsivo(n);
    
    printf("%d! = %d (formulazione iterativa)\n", n, rIterativo);
    printf("%d! = %d (formulazione iterativa)\n", n, rRicorsivo);
    return (EXIT_SUCCESS);
}

int fattorialeIterativo(int n) {
int ris;
ris = 1;

while (n > 0){
    
    ris*=n;
    n--;
    
    
}

    return ris;
}
int fattorialeRicorsivo(int n) {
int ris;

ris = 1;

if (n == 0){
    
  return ris;  
    
}
   else {
     
     ris = n * fattorialeRicorsivo(n-1);
    
      
   }
   
    return ris;
}
