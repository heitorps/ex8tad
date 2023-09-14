#ifndef _PARTIDA_H
#define _PARTIDA_H
#include "time.h"

typedef struct
{
    char timeCasa[MAXTAM_NOME_TIME];
    char timeFora[MAXTAM_NOME_TIME];
    int pontosCasa,pontosFora;
}tPartida;

tPartida LePartida();

char VencedorPartida(tPartida par);

#endif