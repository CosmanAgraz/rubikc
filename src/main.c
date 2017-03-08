#include<stdio.h>
#include<stdlib.h>

//global memory
int face = 6, facePiece = 8;

void whiteCCW(int cube[face][facePiece]){
	
	//modifies white face pieces
	int temp;
	temp = cube[0][0];
	cube[0][0] = cube[0][2];
	cube[0][2] = cube[0][7];
	cube[0][7] = cube[0][5];
	cube[0][5] = temp;

	temp = cube[0][1];
	cube[0][1] = cube[0][4];
	cube[0][4] = cube[0][6];
	cube[0][6] = cube[0][3];
	cube[0][3] = temp;

	//modifies the pieces around the white face
	temp = cube[1][0];
	cube[1][0] = cube[5][0];
	cube[5][0] = cube[4][0];
	cube[4][0] = cube[2][0];
	cube[2][0] = temp;

	temp = cube[1][1];
        cube[1][1] = cube[5][1];
        cube[5][1] = cube[4][1];
        cube[4][1] = cube[2][1];
        cube[2][1] = temp;

	temp = cube[1][2];
        cube[1][2] = cube[5][2];
        cube[5][2] = cube[4][2];
        cube[4][2] = cube[2][2];
        cube[2][2] = temp;
}

void greenCCW(int cube[face][facePiece]){
	//rotate green face
	int temp;
        temp = cube[1][0];
        cube[1][0] = cube[1][2];
        cube[1][2] = cube[1][7];
        cube[1][7] = cube[1][5];
        cube[1][5] = temp;

        temp = cube[1][1];
        cube[1][1] = cube[1][4];
        cube[1][4] = cube[1][6];
        cube[1][6] = cube[1][3];
        cube[1][3] = temp;

	//mods the pieces around green face
	temp = cube[0][0];
        cube[0][0] = cube[2][0];
        cube[2][0] = cube[3][0];
        cube[3][0] = cube[5][2];
        cube[5][2] = temp;

        temp = cube[0][3];
        cube[0][3] = cube[2][3];
        cube[2][3] = cube[3][3];
        cube[3][3] = cube[5][4];
        cube[5][4] = temp;

        temp = cube[0][5];
        cube[0][5] = cube[2][5];
        cube[2][5] = cube[3][5];
        cube[3][5] = cube[5][7];
        cube[5][7] = temp;
}

void redCCW(int cube[face][facePiece]){
        //rotate red face
	int temp;
        temp = cube[2][0];
        cube[2][0] = cube[2][2];
        cube[2][2] = cube[2][7];
        cube[2][7] = cube[2][5];
        cube[2][5] = temp;

        temp = cube[2][1];
        cube[2][1] = cube[2][4];
        cube[2][4] = cube[2][6];
        cube[2][6] = cube[2][3];
        cube[2][3] = temp;

        //mods the pieces around red face
        temp = cube[0][5];
        cube[0][5] = cube[4][0];
        cube[4][0] = cube[3][2];
        cube[3][2] = cube[1][7];
        cube[1][7] = temp;

        temp = cube[0][6];
        cube[0][6] = cube[4][3];
        cube[4][3] = cube[3][1];
        cube[3][1] = cube[1][4];
        cube[1][4] = temp;

        temp = cube[0][7];
        cube[0][7] = cube[4][5];
        cube[4][5] = cube[3][0];
        cube[3][0] = cube[2][2];
        cube[2][2] = temp;

}

void yellowCCW(int cube[face][facePiece]){
        //rotates yellow face
	int temp;
        temp = cube[3][0];
        cube[3][0] = cube[3][2];
        cube[3][2] = cube[3][7];
        cube[3][7] = cube[3][5];
        cube[3][5] = temp;

        temp = cube[3][1];
        cube[3][1] = cube[3][4];
        cube[3][4] = cube[3][6];
        cube[3][6] = cube[3][3];
        cube[3][3] = temp;

        //mods the pieces around yellow face
        temp = cube[1][5];
        cube[1][5] = cube[2][5];
        cube[2][5] = cube[4][5];
        cube[4][5] = cube[5][5];
        cube[5][5] = temp;

        temp = cube[1][6];
        cube[1][6] = cube[2][6];
        cube[2][6] = cube[4][6];
        cube[4][6] = cube[5][6];
        cube[5][6] = temp;

        temp = cube[1][7];
        cube[1][7] = cube[2][7];
        cube[2][7] = cube[4][7];
        cube[4][7] = cube[5][7];
        cube[5][7] = temp;

}

void blueCCW(int cube[face][facePiece]){
	//rotates blue face
	int temp;
        temp = cube[4][0];
        cube[4][0] = cube[4][2];
        cube[4][2] = cube[4][7];
        cube[4][7] = cube[4][5];
        cube[4][5] = temp;

        temp = cube[4][1];
        cube[4][1] = cube[4][4];
        cube[4][4] = cube[4][6];
        cube[4][6] = cube[4][3];
        cube[4][3] = temp;
	
	//mods the pieces around green face
        temp = cube[0][7];
        cube[0][7] = cube[5][0];
        cube[5][0] = cube[3][7];
        cube[3][7] = cube[2][7];
        cube[2][7] = temp;

        temp = cube[0][4];
        cube[0][4] = cube[5][3];
        cube[5][3] = cube[3][4];
        cube[3][4] = cube[2][4];
        cube[2][4] = temp;

        temp = cube[0][2];
        cube[0][2] = cube[5][5];
        cube[5][5] = cube[3][2];
        cube[3][2] = cube[2][2];
        cube[2][2] = temp;
}

void orangeCCW(int cube[face][facePiece]){
	//rotates orange face
        int temp;
        temp = cube[5][0];
        cube[5][0] = cube[5][2];
        cube[5][2] = cube[5][7];
        cube[5][7] = cube[5][5];
        cube[5][5] = temp;

        temp = cube[5][1];
        cube[5][1] = cube[5][4];
        cube[5][4] = cube[5][6];
        cube[5][6] = cube[5][3];
        cube[5][3] = temp;

        //mods the pieces around orange face
        temp = cube[0][2];
        cube[0][2] = cube[2][0];
        cube[2][0] = cube[3][5];
        cube[3][5] = cube[4][7];
        cube[4][7] = temp;

        temp = cube[0][1];
        cube[0][1] = cube[2][3];
        cube[2][3] = cube[3][6];
        cube[3][6] = cube[4][4];
        cube[4][4] = temp;

        temp = cube[0][0];
        cube[0][0] = cube[2][5];
        cube[2][5] = cube[3][7];
        cube[3][7] = cube[4][2];
        cube[4][2] = temp;

}
int main(int argc, char* argv[]){
	//okokokokokokokokokok
	//initalize that rubik cube
	
	int i, j, count;
	
	//initalizes the memory space needed
	int *cube[face]; //[6]
	for (i=0; i<face; i++) //0 .. 5
		cube[i] = (int *)malloc(facePiece * sizeof(int));

	//assigns values which are stored in the memory prev allocated.
	count = 0;
	for (i=0; i<face; i++){
		for (j=0; j<facePiece; j++){
			cube[i][j] = count;
			}
		count++;
	}
	
	char *empty = "";
	printf("%9s[%d][%d][%d]\n", empty, cube[0][0], cube[0][1], cube[0][2]);
	printf("%9s[%d][W][%d]\n", empty, cube[0][3], cube[0][4]);
	printf("%9s[%d][%d][%d]\n", empty, cube[0][5], cube[0][6], cube[0][7]);

        printf("[%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d]\n", cube[1][0], cube[1][1], cube[1][2], cube[2][0], cube[2][1], cube[2][2], cube[4][0], cube[4][1], cube[4][2], cube[5][0], cube[5][1], cube[5][2]);
        printf("[%d][G][%d][%d][R][%d][%d][B][%d][%d][O][%d]\n", cube[1][3], cube[1][4], cube[2][3], cube[2][4], cube[4][3], cube[4][4], cube[5][3], cube[5][4]);
        printf("[%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d]\n", cube[1][5], cube[1][6], cube[1][7], cube[2][5], cube[2][6], cube[2][7], cube[4][5], cube[4][6], cube[4][7], cube[5][5], cube[5][6], cube[5][7]);

        printf("%9s[%d][%d][%d]\n", empty, cube[3][0], cube[3][1], cube[3][2]);
        printf("%9s[%d][Y][%d]\n", empty, cube[3][3], cube[3][4]);
        printf("%9s[%d][%d][%d]\n", empty, cube[3][5], cube[3][6], cube[3][7]);
	
	//printf("suh dude \n");
	//Dealocating memory to avoid memory leaks
	for (int i=0; i < face; i++){
		free(cube[i]);
		printf("%d\n", i);
	}
	//free(cube);
	return 0;
}
