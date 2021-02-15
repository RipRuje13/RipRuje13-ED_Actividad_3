#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>


int main(int argc, char *argv[]) {
	int opc=0,res;
	int buscar;
	int **mat;
	int n;
	int i,j,a,b;
	int filas, colum;
	int pos,des;

	
	do{
		
		printf("\n MENU DE OPCIONES PARA LAS MATRICES \n");
		printf("1.MATRIZ TRIANGULAR INFERIOR IZQUIERDA \n");
		printf("2.MATRIZ TRIANGULAR SUPERIOR DERECHA \n");
		printf("3.MATRIZ TRIANGULAR SUPERIOR IZQUIERDA \n");
		printf("4.MATRIZ TRIANGULAR INFERIOR DERECHA \n");
		printf("5.MATRIZ TRIDIAGONAL \n");
		printf("6.SALIR \n");
		printf("DIJITE LA OPCION ELEGIDA \n");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				printf("    MATRIZ TRIANGULAR INFERIOR IZQUIERDA \n");
	            printf("\n INGRESE EL TAMAÑO DE LA MATRIZ \n ");
	            printf("\n ");
            	scanf ("%i",&n);
				printf("\n");
				printf("\n");
            	filas = n;
            	colum = n;
            	mat=(int**)malloc(filas*sizeof(int*));
            	for(i=0;i<filas;i++){
            		mat[i]= (int*)malloc(colum*sizeof(int));
				}          	
			    srand (time(NULL)); 
				for(i=0;i<filas;i++){
					for(j=0;j<colum;j++){
						if(i >= j){
							(mat[i][j]) = rand() % 101;	
							printf("%i \t ", (mat[i][j]));
						}			
					}
				   printf("\n");
				}           
			   do{
			   printf("QUE ELEMENTO QUIERES BUSCAR \n");
				 scanf ("%i", &buscar);
				 
				 for(i=0;i<filas;i++){
					for(j=0;j<colum;j++){
						if(mat[i][j]== buscar){
							printf("\n Numero %d: \n", buscar);
							printf("\n Posicion en la matriz es  %i , %i : \n ", i,j);
							des = ((i*(i+1))/2)+j;							
						    printf("\n Posicion en el arreglo es %i : \n" , des+1);
						    printf("\n Desea buscar otro numero si = 2 no = 1  : \n" );
			            	scanf("%d",&res);
						}
				   }
				}
				}while(res == 2);
			    break;
				
				case 2:
					
					printf("    MATRIZ TRIANGULAR SUPERIOR DERECHA \n");
					printf("\n INGRESE EL TAMAÑO DE LA MATRIZ \n ");
					printf("\n ");
					scanf ("%d",&n);
					printf("\n");
					printf("\n");
					filas = n;
					colum = n;
					mat=(int**)malloc(filas*sizeof(int*));
                    for(i=0;i<filas;i++){
						mat[i]= (int*)malloc(colum*sizeof(int));
					}          	
					srand (time(NULL)); 
					for(i=0;i<filas;i++){
						for(j=0;j<colum;j++){
							a=i+j;
							b=n-1;
							if(i<=j){
								(mat[i][j]) = rand() % 101;	
								printf("%i \t ", (mat[i][j]));
							}else{
								printf(" \t ");
							}				
						}
						printf("\n");
					}           
					do{
					printf("QUE ELEMENTO QUIERES BUSCAR \n");
					scanf ("%i", &buscar);
					
					for(i=0;i<filas;i++){
						for(j=0;j<colum;j++){
							if(mat[i][j]== buscar){
								printf("\n Numero %d: \n", buscar);
								printf("\n Posicion en la matriz es %i , %i : \n ", i,j);
								des = ((i*(i+1))/2)+(i*(n-i-1))+j;							
								printf("\n Posicion en el arreglo es %i : \n" , des+1);
								printf("\n Desea buscar otro numero si = 2 no = 1  : \n" );
			                	scanf("%d",&res);
							}
						}
					}
					}while(res == 2);
			        break;
					
					case 3:
						
						printf("    MATRIZ TRIANGULAR SUPERIOR IZQUIERDA \n");
						printf("\n INGRESE EL TAMAÑO DE LA MATRIZ \n ");
						printf("\n ");
						scanf ("%d",&n);
						printf("\n");
						printf("\n");
						filas = n;
						colum = n;
						mat=(int**)malloc(filas*sizeof(int*));
						for(i=0;i<filas;i++){
							mat[i]= (int*)malloc(colum*sizeof(int));
						}          	
						
						srand (time(NULL)); 
						for(i=0;i<filas;i++){
							for(j=0;j<colum;j++){
								a=i+j;
								b=n-1;
								if(a<=b){
									(mat[i][j]) = rand() % 101;	
									printf("%i \t ", (mat[i][j]));
								}else{
									printf(" \t ");
								}				
							}
							printf("\n");
						}           
						do{
						printf("QUE ELEMENTO QUIERES BUSCAR \n");
						scanf ("%i", &buscar);
						for(i=0;i<filas;i++){
							for(j=0;j<colum;j++){
								if(mat[i][j]== buscar){
									printf("\n Numero %d: \n", buscar);
									printf("\n Posicion en la matriz es  %i , %i:  \n ", i,j);
									des = ((i*(i+1))/2)+(i*(n-1))+j;							
									printf("\n Posicion en el arreglo es %i : \n" , des+1);
									printf("\n Desea buscar otro numero si = 2 no = 1  : \n" );
			            	        scanf("%d",&res);
								}
							}
						}
						}while(res == 2);
						break;
						case 4:
							
							printf("    MATRIZ TRIANGULAR INFERIOR DERECHA \n");
							printf("\n INGRESE EL TAMAÑO DE LA MATRIZ \n ");
							printf("\n ");
							scanf ("%d",&n);
							printf("\n");
							printf("\n");
							filas = n;
							colum = n;
							mat=(int**)malloc(filas*sizeof(int*));
							for(i=0;i<filas;i++){
								mat[i]= (int*)malloc(colum*sizeof(int));
							}          	
							srand (time(NULL)); 
							for(i=0;i<filas;i++){
								for(j=0;j<colum;j++){
									a=i+j;
									b=n-1;
									if(a>=b){
										(mat[i][j]) = rand() % 101;	
										printf("%i \t ", (mat[i][j]));
									}else{
										printf(" \t ");
									}				
								}
								printf("\n");
							}           
							do{
							printf("QUE ELEMENTO QUIERES BUSCAR \n");
							scanf ("%i", &buscar);
							for(i=0;i<filas;i++){
								for(j=0;j<colum;j++){
									if(mat[i][j]== buscar){
										printf("\n Numero %d: \n", buscar);
										printf("\n Posicion en la matriz es  %i , %i : \n ", i,j);
										des = (i*(i+1))/2 + (i-(n+1))+j;							
										printf("\n Posicion en el arreglo es %i : \n" , des+1);
										printf("\n Desea buscar otro numero si = 2 no = 1  : \n" );
			                        	scanf("%d",&res);
									}
								}
							}
							}while(res == 2);
							break;
							case 5:
								
								printf("    MATRIZ TRIDIAGONAL \n");
								printf("\n INGRESE EL TAMAÑO DE LA MATRIZ \n ");
								printf("\n ");
								scanf ("%d",&n);
								printf("\n");
								printf("\n");
								filas = n;
								colum = n;
								mat=(int**)malloc(filas*sizeof(int*));
								for(i=0;i<filas;i++){
									mat[i]= (int*)malloc(colum*sizeof(int));
								}          	
								srand (time(NULL)); 
								for(i=0;i<filas;i++){
									for(j=0;j<colum;j++){
										a=i-j;
										//b=n-1;
										if(fabs(a)<=1){
											(mat[i][j]) = rand() % 101;	
											printf("%i \t ", (mat[i][j]));
										}else{
											printf(" \t ");
										}				
									}
									printf("\n");
								}           
								do{
								printf("QUE ELEMENTO QUIERES BUSCAR \n");
								scanf ("%i", &buscar);
								for(i=0;i<filas;i++){
									for(j=0;j<colum;j++){
										if(mat[i][j]== buscar){
											printf("\n Numero %d: \n", buscar);
											printf("\n Posicion en la matriz es  %i , %i:  \n ", i,j);
											des = (((i*(i+1))/2)-(((i-1)*i)/2)+i+j);							
											printf("\n Posicion en el arreglo es %i : \n" , des+1);
											printf("\n Desea buscar otro numero si = 2 no = 1  : \n" );
			            	                scanf("%d",&res);
										}
									}
								}
								}while(res == 2);
								break;
								
								case 6 :
									break;
	    }
	}while(opc != 6);
	return 0;
}




