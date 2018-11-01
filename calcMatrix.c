#include <clacMatrix.h>

void printMatrix(int A[][COLS])
	{

		int i;
		int j;
		
		for(i=0;i<ROWS;i++){
			for(j=0;j<COLS;j++)
				printf("%d ", A[i][j]);
			printf("\n");
		}
	}

void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
	{
		int i;
		int j;
		
		for(i=0;i<ROWS;i++){
	
		 for(j=0; j<COLS; j++){
			C[i][j]=A[i][j]+B[i][j];
		 }
		}
	return;
	
	}
