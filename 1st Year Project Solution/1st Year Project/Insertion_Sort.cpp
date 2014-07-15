#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int a[1000000];

void swap(int *a, int *b){
	int *t = a;
	*a = *b;
	*b = *t;
}

void printArray(int n){
	int i=0;
	while (i < n)
		printf("%d ", a[i++]);
	printf("\n");

}


void main(){
	srand(time(NULL));

	int x,read = 1;
	int key = 1;
	const int n = 100000;
	clock_t t;
	FILE *fp;
	fp = fopen("Array.txt", "r+");
	for (int i = 0; i < n; i++){
		fscanf(fp,"%d", &a[i]);
	}

	t = clock();
	//Insertion Sort
	for (int i = 1; i < n; i++){
		for (int j = i; j ; j--){
			if (a[j] < a[j - 1]){
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}		
			else
				break;
		}
	}
	t = clock() - t;
	printf("\nIt took %f sec to sort %d numbers by Insertion sort\n", (float)t/CLOCKS_PER_SEC,n);  
	_getch();
}


// Normal Swaping took 8.9 seconds on average