#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

//variable contador para salir del ciclo despues de recibir dos signals
int i=0;

void salidaSigusr1(int sig){
	time_t tiempo;
	time(&tiempo);
//solicita tiempo por la libreria time.h para luego imprimirlo cuando se solicite la senal SIGUSR1
	printf("\nSenal SIGUSR1 recibida:  %s\n",ctime(&tiempo));
}
void salidaCodigo(int sig){
//se suma 1 a la variable contador i para luego al tener 2 de estas interrupciones salir.
	printf("\n");
	i++;
	if(i==2){
		exit(sig);//finaliza el programa por medio de la senal control + c
	}
}

int main(int argc, char* argv[]){
	signal(SIGUSR1,salidaSigusr1);
	signal(SIGINT,salidaCodigo);
	signal(SIGUSR2, SIG_IGN);//cuando recibe esta senal es ignorada
	while(1)
	{
		printf("Programa hora ejecutandose. PID=%d\nListo para recibir la senal SIGUSR1.\n",getpid());
//mostramos el pid correspondiente al programa en ejecucion
		sleep(3);
//cada 3 segundos mustra el mensaje anterior
	}
	return (EXIT_SUCCESS);
}
