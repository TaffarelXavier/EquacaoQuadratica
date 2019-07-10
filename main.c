#include <stdio.h>
#include <math.h>

//Variáveis globais
float a, b, c;

void equacao2Grau() {

    //determinante = delta
    float determinante, r1, r2;

    determinante = b * b - 4 * a * c;

    if (determinante >= 0) {
        r1 = (-b + sqrt(determinante)) / (2 * a);
        r2 = (-b - sqrt(determinante)) / (2 * a);
        printf("A raíz x' é: %.2f\n", r1);
        printf("A raíz x'' é: %.2f\n", r2);
    } else {
        printf("Não existem raízes reais que satisfaçam esta Equação.");
    }

}

int main() {

    do {

        printf("Digite o coeficiente de a: ");
        scanf("%f", &a);

        printf("Digite o coeficiente de b: ");
        scanf("%f", &b);

        printf("Digite o coeficiente de c: ");
        scanf("%f", &c);

        equacao2Grau(a, b, c);

    } while (a != 0 || b != 0 || c != 0);

    return 0;
}