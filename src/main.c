#include<stdio.h>
#include<stdlib.h>
//#include"backend.h"

int main(int argc, char* argv[]){
	//okokokokokokokokokok
	//initalize that rubik cube
	
	int face = 6, facePiece = 8, i, j, count;
	
	//initalizes the memory space needed
	int *cubePiece[face]; //[6]
	for (i=0; i<face; i++) //0 .. 5
		cubePiece[i] = (int *)malloc(facePiece * sizeof(int));

	//assigns values which are stored in the memory prev allocated.
	count = 0;
	for (i=0; i<face; i++){
		for (j=0; j<facePiece; j++){
			cubePiece[i][j] = count;
			}
		count++;
	}
	
	char *empty = "";
	printf("%9s[%d][%d][%d]\n", empty, cubePiece[0][0], cubePiece[0][1], cubePiece[0][2]);
	printf("%9s[%d][W][%d]\n", empty, cubePiece[0][3], cubePiece[0][4]);
	printf("%9s[%d][%d][%d]\n", empty, cubePiece[0][5], cubePiece[0][6], cubePiece[0][7]);

        printf("[%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d]\n", cubePiece[1][0], cubePiece[1][1], cubePiece[1][2], cubePiece[2][0], cubePiece[2][1], cubePiece[2][2], cubePiece[4][0], cubePiece[4][1], cubePiece[4][2], cubePiece[5][0], cubePiece[5][1], cubePiece[5][2]);
        printf("[%d][G][%d][%d][R][%d][%d][B][%d][%d][O][%d]\n", cubePiece[1][3], cubePiece[1][4], cubePiece[2][3], cubePiece[2][4], cubePiece[4][3], cubePiece[4][4], cubePiece[5][3], cubePiece[5][4]);
        printf("[%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d]\n", cubePiece[1][5], cubePiece[1][6], cubePiece[1][7], cubePiece[2][5], cubePiece[2][6], cubePiece[2][7], cubePiece[4][5], cubePiece[4][6], cubePiece[4][7], cubePiece[5][5], cubePiece[5][6], cubePiece[5][7]);

        printf("%9s[%d][%d][%d]\n", empty, cubePiece[3][0], cubePiece[3][1], cubePiece[3][2]);
        printf("%9s[%d][Y][%d]\n", empty, cubePiece[3][3], cubePiece[3][4]);
        printf("%9s[%d][%d][%d]\n", empty, cubePiece[3][5], cubePiece[3][6], cubePiece[3][7]);
	
	//printf("suh dude \n");
	//Dealocating memory to avoid memory leaks
	for (int i=0; i < face; i++){
		free(cubePiece[i]);
		printf("%d\n", i);
	}
	//free(cubePiece);
	return 0;
}
