#pragma warning(disable:4996)
#include <stdio.h>

int showarr(int(*ar)[4]) {
	int i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", ar[i][j]);
		}
		printf("\n");
	}
}

int turnarr(int (*ar)[4]) {
	int i, j;

	int temparr[4][4];

	printf("\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			temparr[j][3-i]= ar[i][j];
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			ar[i][j] = temparr[i][j];
		}
	}
}

int main(void) {

	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int i,j;


	showarr(arr);
	turnarr(arr);
	showarr(arr);
	turnarr(arr);
	showarr(arr);
	turnarr(arr);
	showarr(arr);

		
}
