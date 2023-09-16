#include "time.h"
#include <stdio.h>
#include <string.h>

tTime LeTime(){
    tTime time;
    scanf("%s%s%*c",time.nome,time.conf);
    time.vCasa=0; time.vFora=0; time.der=0;
    return time;
}

tTime ContaVitoria(tTime time, char local){
    local==CASA ? time.vCasa++ : time.vFora++;
    return time;
}

tTime ContaDerrota(tTime time){
    time.der++;
    return time;
}

int TotalVitorias(tTime time){
    return (time.vCasa + time.vFora);
}

float WinRateTimte(tTime time){
    if((TotalVitorias(time)+time.der))return(TotalVitorias(time)/(TotalVitorias(time)+time.der));
    else return 0;
}

void ImprimeTime(tTime time){
    char abrev[3];
    !(strcmp(time.conf,"LESTE")) ? strcpy(abrev,"CL") : strcpy(abrev,"CO");

    printf("%s [%s] %d %d %.2f %d %d\n",time.nome,abrev,TotalVitorias(time),
                                        time.der,WinRateTimte(time),
                                        time.vCasa,time.vFora);
}