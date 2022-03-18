#include <stdio.h>
#define Num 100
static int count = 0;

void ReadFile(int *array) {
	FILE *fp = fopen("d1.txt","r");
	
	while(1) {
		if(feof(fp)) {
			break;
		}
		fscanf(fp, "%d", &array[count]);
		count++;
	}
	
	fclose(fp);
	printf("\t**FILE read Successfully**\n");	
}

void swap(int *array, int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp; 
}

void InsertionSort(int *array, int count) {
	for (int i=0; i<count-1; i++) {
        for (int j=i+1; j>0; j--) {
            if(array[j] < array[j-1]) {
                swap(array, j, j-1); 
            }
        }
    }
}

void DataDisplay(int *array) {
	for(int i=0; i<count; i++) {
		printf("%d ",*(array+i));
	}
}

void WriteFile(int *array) {
	FILE *fptr;
	fptr = fopen("d2.txt","wb");
	for(int i=0; i<count; i++) {
		putw(*(array+i), fptr);
	}
	fclose(fptr);
}

void main() {
	int array[Num];
	ReadFile(array);
	
	printf("Original Data:\n");
	DataDisplay(array);

    InsertionSort(array, count);
	printf("\n\nSorted Data:\n");
	DataDisplay(array);

	WriteFile(array);
}
