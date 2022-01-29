#include <stdio.h>

int main(){

char num[6]; //limite de 6 por que a maior palavra é FooBaa, de 6 letras

for (int i = 1; i <= 100; i++){
    sprintf(num, "%i", i); //para evitar usar dois prints, utilizei o sprintf para guardar o "i" como string
    printf("%s\n", i % 3 == 0 ? (i % 5 == 0 ? "FooBaa" : "Foo") : (i % 5 == 0 ? "Baa" : num));
}


return 0;
}

