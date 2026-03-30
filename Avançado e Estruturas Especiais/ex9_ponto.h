#ifndef PONTO_H
#define PONTO_H

typedef struct ponto Ponto;

// cria ponto
Ponto* criar(float x, float y);

// calcula distância entre dois pontos
float distancia(Ponto *p1, Ponto *p2);

// libera memória
void destruir(Ponto *p);

#endif