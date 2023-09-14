#include "torneio.h"

tTorneio IniciaTorneio(){
    tTorneio torneio;
    torneio.numTimes=0;torneio.numPartidas=0;

    char acao;
    while(acao != 'E'){
        scanf("%c",&acao);
        switch(acao){
            case 'F':
                torneio.times[torneio.numTimes]=LeTime();
                break;
        }
    }
}