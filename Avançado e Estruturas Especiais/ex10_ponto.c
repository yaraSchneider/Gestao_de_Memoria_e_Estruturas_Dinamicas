#include <stdlib.h>
#include <math.h>
#include "ex9_ponto.h"

struct ponto {
    float x;
    float y;
};

Ponto* criar(float x, float y) {
    Ponto *p = (Ponto *) malloc(sizeof(Ponto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}

float distancia(Ponto *p1, Ponto *p2) {
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}

void destruir(Ponto *p) {
    free(p);
}