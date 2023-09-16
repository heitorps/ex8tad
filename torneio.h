#ifndef _TORNEIO_H
#define _TORNEIO_H
#include "time.h"
#include "partida.h"
#define MAXTAM_TIMES_PARTIDAS 100

typedef struct{
    tTime times[MAXTAM_TIMES_PARTIDAS];
    tPartida partidas[MAXTAM_TIMES_PARTIDAS];
    int numTimes,numPartidas;
}tTorneio;

tTorneio IniciaTorneio();
tTorneio JogaPartida(tTorneio torneio);

int AchaVencedor(tTorneio torneio, tPartida partida);
int AchaPerdedor(tTorneio torneio, tPartida partida);

void ResultadosTorneio(tTorneio torneio);

#endif