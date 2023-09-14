#include "partida.h"
#include <stdio.h>

tPartida LePartida(){
    tPartida par;
    scanf("%s @ %s %d %d%*c",par.timeFora,par.timeCasa,&par.pontosFora,
                                                        par.pontosCasa);
    
    return par;
}

char VencedorPartida(tPartida par){
    return par.pontosCasa>par.pontosFora ? CASA : FORA;
}