#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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