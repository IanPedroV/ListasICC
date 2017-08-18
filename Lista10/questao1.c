#include <stdio.h>

int somar(int);

int isPair(int);

float calculaMedia(float);

float dobrar(float);

int checaMaior(int);

int checaMenor(int);

int numMaior(int);

int calculaFatorial(int);

int calculaProduto(int);


int main() {
    int opInicial, opFuncao;
    while (opInicial != 0) {
        printf("Digite 1 para ver o menu ou 0 para finalizar o programa");
        scanf("%d", &opInicial);
        printf("Digite a opção desejada: ");
        scanf("%d", &opFuncao);
        switch (opFuncao) {
            case (1):
                int n1;
                int n2;
                int soma;
                printf("Digite os numeros a serem somados:\n");
                scanf("%d%d", &n1, &n2);
                soma = somar(&n1, &n2);
                printf("Soma de %d e %d é igual a: %d", n1, n2, soma);
                break;
            case (2):
                int n1;
                printf("Digite o numero a ser checado:\n");
                scanf("%d", &n1);
                if (isPair(&n1)==1)
                    printf("O número digitado é par");
                else
                    printf("O número digitado é impar");
            default:
                printf("Opcao incorreta!");
        }
    }
}

int somar(int *a, int *b) {
    return *a + *b;
}

int isPair(int *a) {
    if (*a % 2 == 0)
        return 1;
    return 0;

}

float calculaMedia(float *a, float *b) {
    return (*a + *b) / 2;

}

float dobrar(float *a) {
    return (*a) * 2;

}

int checaMaior(int *x, int *y) {
    if (*x > *y)
        return *x;
    return *y;

}

int checaMenor(int *x, int *y) {
    if (*x < *y)
        return *x;
    return *y;

}

int numMaior(int a, int b, int c) {
    int m;
    if (a > b && a > c)
        m = a;
    else if (b > a && a > c)
        m = b;
    else if (c > a && c > b)
        m = c;
    return m;
}

int calculaFatorial(int num) {
    int s;
    for (s = 1; num > 1; num = num - 1)
        s = s + num;
    return s;
}

int calculaProduto(int num) {
    int p;
    for (p = 1; p == num; p++)
        p = p * (p + 1);
    return p;
}


