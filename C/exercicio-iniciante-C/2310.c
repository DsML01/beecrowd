#include <stdio.h>
int main(){int n, serve = 0, block = 0, spike = 0, serve_try = 0, block_try = 0, spike_try = 0, s, b, a, s1, b1, a1;
    scanf("%d", &n);
    char nome[20];
    for(int i = 1; i <= n; i++){scanf("%s", nome);
        scanf("%d %d %d %d %d %d", &s, &b, &a, &s1, &b1, &a1);
        serve_try += s, block_try += b, spike_try += a, serve += s1, block += b1, spike += a1;}
    double saque = ((double) serve / serve_try) * 100, bloqueio = ((double) block / block_try) * 100, ataque = ((double) spike / spike_try) * 100;
    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n", saque, bloqueio, ataque);}