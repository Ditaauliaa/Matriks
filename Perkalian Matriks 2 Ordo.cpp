#include <stdio.h>

int main()
{
	int A[2][2], B[2][2], X[2][2], i, j;
	printf("Perkalian Matriks\n");
	
	printf("\nNilai Matriks A");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nbaris ke %i , kolom ke %i = ", i+1, j+1 );
			scanf("%i", &A[i][j]);
		}
	}
	
	printf("\nNilai Matriks B");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nbaris ke %i , kolom ke %i = ", i+1, j+1 );
			scanf("%i", &B[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			X[i][j]=(A[j][0]*B[0][j]+A[i][1]*B[1][j]);
		}
	}
	
	printf("\nHasil");
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n%6i", X[i][j]);
			printf("\n");
		}
	}
	
	return 0;
}
