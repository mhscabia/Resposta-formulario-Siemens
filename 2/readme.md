Fiz uso de um operador ternário nesta questão por conta da complexidade de if aninhados traz ao código, para o exemplo
não temos uma mudança significante no tempo, porém se for algo maior, faz toda a diferença.


ABAIXO COMO FICARIA O CÓDIGO UTILIZANDO IF

for (int i = 1; i <= 100; i++){
    if (i % 3 == 0){
        if (i % 5 == 0){
            printf("FooBaa\n");
        }else{
            printf("Foo\n");
        }
    }else if (i % 5 == 0){
        printf("Baa\n");
    }else{
        printf("%i\n",i);
    }
}