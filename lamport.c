#include <stdio.h>

DEFINE llave ?0


int main(){
    char direcciones[][5] = {"192.168.1.70","192.168.1.88","192.168.1.127","192.168.1.91","192.168.1.100"}
    return 0;
}


int main(){
	int numero=-1;

	while(1){
		if (numero == 155){
			break;
		}
		srand(time(NULL)); 
		numero=random()%500;
		printf("%d\n",numero);	
	}

	return 0;
}