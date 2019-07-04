#include <iostream>

void impressa (int V[], int N, int i){
	printf("Realizando: ");
	for (int j=0;j<N;j++){
	 if (i==V[j])
	 	printf("->%d ",V[j]);
	 	else
	 	printf("%d ",V[j]);
	if(j+1==N)
       printf("\n",V[j]); 
	}
}

void impressaAntes(int V[], int N){
	printf("\nOrigem:     ");
	for (int j=0;j<N;j++){
	 	printf("%d ",V[j]);
			if(j+1==N)
       	printf("\n",V[j]); 
	}
}

void impressaresul(int V[], int N){
	printf("\nResultado: ");
	for (int j=0;j<N;j++){
	 	printf("%d ",V[j]);
			if(j+1==N)
       	printf("\n\n",V[j]); 
	}
}

void metodoBolha(int V[], int N)
{
    int i,continua,aux;
    do{
        continua = 0;
		for(i=0;i<N-1;i++)
        {
            if(V[i]>V[i+1]){									
				aux=V[i];
              	V[i]=V[i+1];
               	V[i+1]=aux;               	
        		continua=i;
            	impressa(V,N,aux);
			}
        }
    }while(continua!=0);
    impressaresul(V, N);
}


int main(int argc, const char * argv[]) {
    int Vetor[]={1,3,5,7,8,9,2,6,0};
    int n=sizeof(Vetor)/sizeof(int);
    printf("|__       |__  |__  |    ___        __  __   __  _|_\n");
    printf("|__) (__( |__) |__) |_, (__/_     __)  (__) |  '  |_,\n");
    impressaAntes(Vetor,n);
	metodoBolha(Vetor, n);
    system("pause");
	return 0;
}
