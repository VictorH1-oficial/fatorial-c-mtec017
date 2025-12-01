#include <stdio.h>
#include <assert.h>
#include "fatorial.c"

int main() {
assert(fatorial(5)==120));
assert(fatorial(0)==1));
    

    
    if (fatorial(-3) == -1)
        printf("Teste 3 OK\n");
    else {
        printf("Teste 3 FALHOU\n");
        return 1;
    }

    printf("Todos os testes passaram!\n");
    return 0;
}
