#ifndef BIBLIOTECA_H   //p n bugar dps, amorecooss :)
#define BIBLIOTECA_H

typedef struct {
    int codigo;
    char titulo[100];
    char autor[100];
    int ano;
    int quantidade;
} Livro;

void exibirMenu(void);

#endif