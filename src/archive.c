//archive.c
//contains old source code..
//mainly functions which are now redundant

//rotation functions
void whiteCCW(int** cube){
	//modifies white face pieces
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

void whiteCW(int** cube){
        //modifies white face pieces
        temp = cube[0][0];
        cube[0][0] = cube[0][5];
        cube[0][5] = cube[0][7];
        cube[0][7] = cube[0][2];
        cube[0][2] = temp;

        temp = cube[0][1];
        cube[0][1] = cube[0][3];
        cube[0][3] = cube[0][6];
        cube[0][6] = cube[0][4];
        cube[0][4] = temp;

        //modifies the pieces around the white face
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
}

void greenCCW(int** cube){
	//rotate green face
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
}

void greenCW(int** cube){
        //modifies green face pieces
        temp = cube[1][0];
        cube[1][0] = cube[1][5];
        cube[1][5] = cube[1][7];
        cube[1][7] = cube[1][2];
        cube[1][2] = temp;

        temp = cube[1][1];
        cube[1][1] = cube[1][3];
        cube[1][3] = cube[1][6];
        cube[1][6] = cube[1][4];
        cube[1][4] = temp;

        //modifies the pieces around the green face
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
}

void redCCW(int** cube){
        //rotate red face
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
        cube[3][0] = cube[1][2];
        cube[1][2] = temp;
}

void redCW(int** cube){
        //modifies red face pieces
        temp = cube[2][0];
        cube[2][0] = cube[2][5];
        cube[2][5] = cube[2][7];
        cube[2][7] = cube[2][2];
        cube[2][2] = temp;

        temp = cube[2][1];
        cube[2][1] = cube[2][3];
        cube[2][3] = cube[2][6];
        cube[2][6] = cube[2][4];
        cube[2][4] = temp;

        //modifies the pieces around the red face
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
}

void yellowCCW(int** cube){
        //rotates yellow face
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

void yellowCW(int** cube){
        //modifies yellow face pieces
        temp = cube[3][0];
        cube[3][0] = cube[3][5];
        cube[3][5] = cube[3][7];
        cube[3][7] = cube[3][2];
        cube[3][2] = temp;

        temp = cube[3][1];
        cube[3][1] = cube[3][3];
        cube[3][3] = cube[3][6];
        cube[3][6] = cube[3][4];
        cube[3][4] = temp;

        //mods the pieces around yellow face
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
}

void blueCCW(int** cube){
	//rotates blue face
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
	
	//mods the pieces around blue face
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

void blueCW(int** cube){
        //modifies blue face pieces
        temp = cube[4][0];
        cube[4][0] = cube[4][5];
        cube[4][5] = cube[4][7];
        cube[4][7] = cube[4][2];
        cube[4][2] = temp;

        temp = cube[4][1];
        cube[4][1] = cube[4][3];
        cube[4][3] = cube[4][6];
        cube[4][6] = cube[4][4];
        cube[4][4] = temp;

        //mods the pieces around blue face
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
}

void orangeCCW(int** cube){
	//rotates orange face
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
}

void orangeCW(int** cube){
        //modifies orange face pieces
        temp = cube[5][0];
        cube[5][0] = cube[5][5];
        cube[5][5] = cube[5][7];
        cube[5][7] = cube[5][2];
        cube[5][2] = temp;

        temp = cube[5][1];
        cube[5][1] = cube[5][3];
        cube[5][3] = cube[5][6];
        cube[5][6] = cube[5][4];
        cube[5][4] = temp;

        //mods the pieces around orange face
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
}

//end of document