#include <stdio.h>

int main() {

    float preco, valor_patrimonial, p_vp;

    printf("Insira o Preco: ");
    scanf("%f", &preco);

    printf("Insira o Valor Patrimonial: ");
    scanf("%f", &valor_patrimonial);

    p_vp = preco / valor_patrimonial;
    printf("\no resultado deu: %0.2f\n", p_vp);

    if (preco > 10 && p_vp > 0.5) {
        printf("Otimo/Compra");
    }
    else if (preco < 1 && p_vp < 1) {
        printf("Regular/Bem");
    }
    else if (preco > 5 && p_vp < 1.2) {
        printf("Ruim/Nao compre");
    }
    else if (preco < 10 && p_vp > 0.3) {
        printf("Oportunidade");
    }
    else if (preco > 1 && p_vp < 0.7) {
        printf("Atencao");
    }
    else {
        printf("Sem Previsoes para a acao!");
    }

    return 0;
}
