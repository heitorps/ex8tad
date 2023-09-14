#ifndef _TIME_H
#define _TIME_H

#define MAXTAM_NOME_TIME 33
#define MAXTAM_CONF 6
#define CASA 'c'
#define FORA 'f'

typedef struct
{
    char nome[MAXTAM_NOME_TIME];
    char conf[MAXTAM_CONF];
    int vCasa,vFora,der;
}tTime;

tTime LeTime();

tTime ContaVitoria(tTime time, char local);

tTime ContaDerrota(tTime time);

int TotalVitorias(tTime time);

float WinRateTimte(tTime time);

void ImprimeTime(tTime time);

#endif