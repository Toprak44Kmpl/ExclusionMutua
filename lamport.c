#include <stdio.h>
#include <sys/time.h>
#include <time.h>

int llave = 0

int main(){
    char direcciones[][5] = {"192.168.1.70","192.168.1.88","192.168.1.127","192.168.1.91","192.168.1.100"}
    

    if(llave == 1){
        //solicitar tiempo local
        //Enviar mensaje a todas máquinas el par (tiempo loca, dirección ip) 
    }

	//obtención del tiempo
	gettimeofday(&current_time, NULL); //Se obtiene el tiempo
        
	printf("\nTime (seconds) : %ld\n",current_time.tv_sec); //Se imprime el tiempo en segundos
	t=current_time.tv_sec;
	info=localtime(&t);
	strftime(hora,sizeof hora,"The time is %I:%M:%S %p.\n",info); //Se imprime el tiempo en formato HH:MM:SS
	printf("%s",hora);

	sprintf(str, "%ld", current_time.tv_sec);
	bzero(buffer, 1024);
	strcpy(buffer, str);
	send(sock, buffer, strlen(buffer),0);

    
}


int main(){
	int numero=-1;
	while(1){
		if (numero == 155){
			llave = 1
            break;
		}
		srand(time(NULL)); 
		numero=random()%500;
		printf("%d\n",numero);	
	}
	return 0;
}