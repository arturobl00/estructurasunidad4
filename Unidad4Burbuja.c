#include <stdio.h>
int arreglo[5];
int x, y;
int opc;
int burbuja;
void main(){
    do{
        printf("Unidad 4 Metodo de la Burbuja\n");
        printf("Este Programa leera 5 numeros y los podra ordenar.\n");
        printf("Menu.\n");
        printf("1.- Capturar o sobre escribir Numeros.\n");
        printf("2.- Ordenar de Mayor a Menor y mostrar.\n");
        printf("3.- Ordenar de Menor a Mayor y mostrar.\n");
        printf("4.- Salir.\n");
        printf("Seleccione una Opcion: ");
        scanf("%d",&opc);
        switch (opc)
        {
        case 1:
            for(x=0; x<5; x++){
                printf("Numero para la pos %d: ",x+1);
                scanf("%d",&arreglo[x]);
            }
            break;
        case 2:
            if(arreglo[4]!=NULL){
                printf("Arreglo lleno\n");
                //el primer ciclo compara de la pos 0 a la penultima
                for(x=0; x<4; x++){
                    //el segundo ciclo inicia en la pos del primer ciclo + 1 y termina en la ultima pos
                    for(y=x+1; y<5; y++){
                        if(arreglo[x]<arreglo[y]){
                            burbuja = arreglo[y];
                            arreglo[y] = arreglo[x];
                            arreglo[x] = burbuja; 
                        }
                    }
                    
                    for(x=0; x<5; x++){
                        printf("Numero para la pos %d: %d\n",x+1, arreglo[x]);
                    }
                }
                getch();
            }
            else{
                printf("Para usar esta opcion primero llene el arreglo.");
                getch();
            }
            break;
        case 3:
            if(arreglo[4]!=NULL){
                printf("Arreglo lleno");
                getch();
            }
            else{
                printf("Para usar esta opcion primero llene el arreglo.");
                getch();
            }
            break;
        case 4:
                printf("Presione una tecla para terminar el programa.");
                getch();
            break;
        default:
                printf("Opcion no Valida, intente de nuevo.");
                getch();
            break;
        }
    }while(opc!=4);
}