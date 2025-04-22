#include <stdio.h>
#include <assert.h>

void testar() {
    // função de teste simples
    assert(1 == 1);
    printf("Teste passou!\n");
}
  
int main() {
    testar();
    return 0;
}