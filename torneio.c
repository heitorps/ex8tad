#include "torneio.h"
#include <stdio.h>
#include <string.h>

tTorneio IniciaTorneio(){   //realiza a leitura de todos os times
    tTorneio torneio;
    torneio.numTimes=0;torneio.numPartidas=0;

    char acao;
    
    while(acao!='E'){
        scanf("%c%*c",&acao);
        if(acao=='E') break;
        switch(acao){
            case 'F':
                torneio.times[torneio.numTimes]=LeTime();
                torneio.numTimes++;
                break;
            
            case 'P':
                torneio = JogaPartida(torneio);
                torneio.numPartidas++;
                break;
        }
        
    }
        
    return torneio;
}

tTorneio JogaPartida(tTorneio torneio){
        torneio.partidas[torneio.numPartidas]=LePartida();
        
        torneio.times[AchaVencedor(torneio,torneio.partidas[torneio.numPartidas])] =
            ContaVitoria(torneio.times[AchaVencedor(torneio,torneio.partidas[torneio.numPartidas])],
                         VencedorPartida(torneio.partidas[torneio.numPartidas]));
        torneio.times[AchaPerdedor(torneio,torneio.partidas[torneio.numPartidas])] =
            ContaDerrota(torneio.times[AchaPerdedor(torneio,torneio.partidas[torneio.numPartidas])]);
    
    return torneio;
}

int AchaVencedor(tTorneio torneio, tPartida partida){
    char vencedor[MAXTAM_NOME_TIME];
    VencedorPartida(partida)==CASA ? strcpy(vencedor,partida.timeCasa) : strcpy(vencedor,partida.timeFora);

    int i=0;
    for(i=0;i<torneio.numTimes;i++){
        if(!strcmp(torneio.times[i].nome,vencedor))
            break;
    }
    printf("TIME %d VENCEDOR!!!\n",i+1);
    return i;
}

int AchaPerdedor(tTorneio torneio, tPartida partida){
    char perdedor[MAXTAM_NOME_TIME];
    VencedorPartida(partida)==FORA ? strcpy(perdedor,partida.timeCasa) : strcpy(perdedor,partida.timeFora);

    for(int i=0;i<torneio.numTimes;i++){
        if(!strcmp(torneio.times[i].nome,perdedor)) return i;
    }
}

void ResultadosTorneio(tTorneio torneio){
    for(int i=0;i<torneio.numTimes;i++){
        ImprimeTime(torneio.times[i]);
    }
}