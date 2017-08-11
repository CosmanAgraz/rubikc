#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//global memory
int face = 6, facePiece = 8, i, j, count, temp;
char *empty = "";

//master function
void rotate(int** cube, int side, int rotation){
        //if (0<=side<=5 && 0<=rotation<=1){
                if (rotation==0){
                        //rotates face pieces CCW
                        temp = cube[side][0];
                        cube[side][0] = cube[side][2];
                        cube[side][2] = cube[side][7];
                        cube[side][7] = cube[side][5];
                        cube[side][5] = temp;

                        temp = cube[side][1];
                        cube[side][1] = cube[side][4];
                        cube[side][4] = cube[side][6];
                        cube[side][6] = cube[side][3];
                        cube[side][3] = temp;

                        switch(side){
                                case 0: //white
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
                                        break;
                                case 1: //green
                                        temp = cube[0][0];
                                        cube[0][0] = cube[2][0];
                                        cube[2][0] = cube[3][0];
                                        cube[3][0] = cube[5][7];
                                        cube[5][7] = temp;

                                        temp = cube[0][3];
                                        cube[0][3] = cube[2][3];
                                        cube[2][3] = cube[3][3];
                                        cube[3][3] = cube[5][4];
                                        cube[5][4] = temp;

                                        temp = cube[0][5];
                                        cube[0][5] = cube[2][5];
                                        cube[2][5] = cube[3][5];
                                        cube[3][5] = cube[5][2];
                                        cube[5][2] = temp;
                                        break;
                                case 2: //red
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
                                        cube[3][0] = cube[1][2];
                                        cube[1][2] = temp;
                                        break;
                                case 3: //yellow
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
                                        break;
                                case 4: //blue
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
                                        break;
                                case 5: //orange
                                        temp = cube[0][2];
                                        cube[0][2] = cube[1][0];
                                        cube[1][0] = cube[3][5];
                                        cube[3][5] = cube[4][7];
                                        cube[4][7] = temp;

                                        temp = cube[0][1];
                                        cube[0][1] = cube[1][3];
                                        cube[1][3] = cube[3][6];
                                        cube[3][6] = cube[4][4];
                                        cube[4][4] = temp;

                                        temp = cube[0][0];
                                        cube[0][0] = cube[1][5];
                                        cube[1][5] = cube[3][7];
                                        cube[3][7] = cube[4][2];
                                        cube[4][2] = temp;
                                        break;
                        }
                } else {
                        //rotates face pieces CW
                        temp = cube[side][0];
                        cube[side][0] = cube[side][5];
                        cube[side][5] = cube[side][7];
                        cube[side][7] = cube[side][2];
                        cube[side][2] = temp;

                        temp = cube[side][1];
                        cube[side][1] = cube[side][3];
                        cube[side][3] = cube[side][6];
                        cube[side][6] = cube[side][4];
                        cube[side][4] = temp;

                        switch(side){
                                case 0: //white
                                        temp = cube[1][0];
                                        cube[1][0] = cube[2][0];
                                        cube[2][0] = cube[4][0];
                                        cube[4][0] = cube[5][0];
                                        cube[5][0] = temp;

                                        temp = cube[1][1];
                                        cube[1][1] = cube[2][1];
                                        cube[2][1] = cube[4][1];
                                        cube[4][1] = cube[5][1];
                                        cube[5][1] = temp;

                                        temp = cube[1][2];
                                        cube[1][2] = cube[2][2];
                                        cube[2][2] = cube[4][2];
                                        cube[4][2] = cube[5][2];
                                        cube[5][2] = temp;
                                        break;
                                case 1: //green
                                        temp = cube[0][0];
                                        cube[0][0] = cube[5][7];
                                        cube[5][7] = cube[3][0];
                                        cube[3][0] = cube[2][0];
                                        cube[2][0] = temp;

                                        temp = cube[0][3];
                                        cube[0][3] = cube[5][4];
                                        cube[5][4] = cube[3][3];
                                        cube[3][3] = cube[2][3];
                                        cube[2][3] = temp;

                                        temp = cube[0][5];
                                        cube[0][5] = cube[5][2];
                                        cube[5][2] = cube[3][5];
                                        cube[3][5] = cube[2][5];
                                        cube[2][5] = temp;
                                        break;
                                case 2: //red
                                        temp = cube[0][5];
                                        cube[0][5] = cube[1][7];
                                        cube[1][7] = cube[3][2];
                                        cube[3][2] = cube[4][0];
                                        cube[4][0] = temp;

                                        temp = cube[0][6];
                                        cube[0][6] = cube[1][4];
                                        cube[1][4] = cube[3][1];
                                        cube[3][1] = cube[4][3];
                                        cube[4][3] = temp;

                                        temp = cube[0][7];
                                        cube[0][7] = cube[1][2];
                                        cube[1][2] = cube[3][0];
                                        cube[3][0] = cube[4][5];
                                        cube[4][5] = temp;
                                        break;
                                case 3: //yellow
                                        temp = cube[2][5];
                                        cube[2][5] = cube[1][5];
                                        cube[1][5] = cube[5][5];
                                        cube[5][5] = cube[4][5];
                                        cube[4][5] = temp;

                                        temp = cube[2][6];
                                        cube[2][6] = cube[1][6];
                                        cube[1][6] = cube[5][6];
                                        cube[5][6] = cube[4][6];
                                        cube[4][6] = temp;

                                        temp = cube[2][7];
                                        cube[2][7] = cube[1][7];
                                        cube[1][7] = cube[5][7];
                                        cube[5][7] = cube[4][7];
                                        cube[4][7] = temp;
                                        break;
                                case 4: //blue
                                        temp = cube[0][7];
                                        cube[0][7] = cube[2][7];
                                        cube[2][7] = cube[3][7];
                                        cube[3][7] = cube[5][0];
                                        cube[5][0] = temp;

                                        temp = cube[0][4];
                                        cube[0][4] = cube[2][4];
                                        cube[2][4] = cube[3][4];
                                        cube[3][4] = cube[5][3];
                                        cube[5][3] = temp;

                                        temp = cube[0][2];
                                        cube[0][2] = cube[2][2];
                                        cube[2][2] = cube[3][2];
                                        cube[3][2] = cube[5][5];
                                        cube[5][5] = temp;
                                        break;
                                case 5: //orange
                                        temp = cube[0][2];
                                        cube[0][2] = cube[4][7];
                                        cube[4][7] = cube[3][5];
                                        cube[3][5] = cube[1][0];
                                        cube[1][0] = temp;

                                        temp = cube[0][1];
                                        cube[0][1] = cube[4][4];
                                        cube[4][4] = cube[3][6];
                                        cube[3][6] = cube[1][3];
                                        cube[1][3] = temp;

                                        temp = cube[0][0];
                                        cube[0][0] = cube[4][2];
                                        cube[4][2] = cube[3][7];
                                        cube[3][7] = cube[1][5];
                                        cube[1][5] = temp;
                                        break;
                        }
                }
                return 1; //successful call
        }
        return 0; //unsuccessful call
}

//Show me what the cube looks like
void displayCube(int** cube){
        printf("%9s[%d][%d][%d]\n", empty, cube[0][0], cube[0][1], cube[0][2]);
        printf("%9s[%d][W][%d]\n", empty, cube[0][3], cube[0][4]);
        printf("%9s[%d][%d][%d]\n", empty, cube[0][5], cube[0][6], cube[0][7]);

        printf("[%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d]\n", cube[1][0], cube[1][1], cube[1][2], cube[2][0], cube[2][1], cube[2][2], cube[4][0], cube[4][1], cube[4][2], cube[5][0], cube[5][1], cube[5][2]);
        printf("[%d][G][%d][%d][R][%d][%d][B][%d][%d][O][%d]\n", cube[1][3], cube[1][4], cube[2][3], cube[2][4], cube[4][3], cube[4][4], cube[5][3], cube[5][4]);
        printf("[%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d][%d]\n", cube[1][5], cube[1][6], cube[1][7], cube[2][5], cube[2][6], cube[2][7], cube[4][5], cube[4][6], cube[4][7], cube[5][5], cube[5][6], cube[5][7]);

        printf("%9s[%d][%d][%d]\n", empty, cube[3][0], cube[3][1], cube[3][2]);
        printf("%9s[%d][Y][%d]\n", empty, cube[3][3], cube[3][4]);
        printf("%9s[%d][%d][%d]\n\n", empty, cube[3][5], cube[3][6], cube[3][7]);
}

//Reset cube to solved state
void resetCube(int** cube){
	count = 0;
	for (i=0; i<face; i++){
		for (j=0; j<facePiece; j++){
			cube[i][j] = count;
			}
		count++;
	}
}

void randomizeCube(int** cube){
        for (i=0; i<23; i++){
                rotate(cube, (int) rand() % 2, (int) rand() % 6);
        }
}

//checks if the modifications work as intended.  For debugging purposes
void testRuns(int** cube){

        displayCube(cube);
        
        printf("rotate white face\n");
        rotate(cube, 0, 0);
        rotate(cube, 0, 1);
        displayCube(cube);

        printf("rotate green face\n");
        rotate(cube, 1, 0);
        rotate(cube, 1, 1);
        displayCube(cube);

        printf("rotate red face\n");
        rotate(cube, 2, 0);
        rotate(cube, 2, 1);
        displayCube(cube);

        printf("rotate yellow face\n");
        rotate(cube, 3, 0);
        rotate(cube, 3, 1);
        displayCube(cube);

        printf("rotate blue face\n");
        rotate(cube, 4, 0);
        rotate(cube, 4, 1);
        displayCube(cube);

        printf("rotate orange face\n");
        rotate(cube, 5, 0);
        rotate(cube, 5, 1);
        displayCube(cube);
}

int main(int argc, char* argv[]){
        //okokokokokokokokokok
        
        //initalizes the memory space needed
        int *cube[face]; //[6]
        for (i=0; i<face; i++) //0 .. 5
                cube[i] = (int *)malloc(facePiece * sizeof(int));
        printf("Memory allocation OK..\n");

        //assigns values which are stored in the memory prev allocated.
        resetCube(cube);
        printf("Memory assignment OK..\n");
	
        //testRuns(cube);
        //printf("Test runs DONE.\n");

        randomizeCube(cube);
        printf("Cube READY.\n")

        printf("Instructions:\n");
        printf("You are running a function with two (2) parameters");
        
	//printf("suh dude \n");
	//Dealocating memory to avoid memory leaks
	for (int i=0; i < face; i++){
		free(cube[i]);
		printf("%d\n", i);
	}
	//free(cube);
	return 0;
}
