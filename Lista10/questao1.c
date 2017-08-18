#include <stdio.h>
int somar(int);
int isPair(int);
int calculaMedia(int);
float dobrar(float);

int main() {
    int opInicial;
    while(opInicial != 0){
        printf("Digite 1 para ver o menu ou 0 para finalizar o programa");
        scanf("%d",&opInicial);
    }
}

int somar(int *a, int *b){
    return *a+*b;
}

int isPair(int *a){
    if (*a % 2 == 0)
        return 1;
    return 0;

}

float calculaMedia(float *a,float *b){
    return (*a+*b)/2;

}

float dobrar(float *a){
    return (*a)*2;

}

int checaMaior(int *x,int *y){
    if (*x > *y)
        return *x;
    return *y;

}

int checaMenor(int *x,int *y){
    if (*x < *y)
        return *x;
    return *y;

}

int numMaior (int a, int b, int c){
    int m;
    if (a > b && a > c)
        m = a;
    else if (b > a && a > c)
        m = b;
    else if (c > a && c > b)
        m = c;
    return m;
}

int somatorio (int num){
    int s;
    for(s = 1; num > 1; num = num - 1)
        s = s + num;
    return s;
}

int produto (int num){
    int p;
    for(p = 1; p == num; p++)
        p = p * (p + 1);
    return p;
}


