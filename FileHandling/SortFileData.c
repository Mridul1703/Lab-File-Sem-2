#include <stdio.h>
#define Num 100

void main() {
	int count = 0;
	FILE *fp = fopen("d1.txt","r");
	int array[Num];
	
	while(1) {
		if(feof(fp)) {
			break;
		}
		fscanf(fp, "%d", &array[count]);
		count++;
	}
	
	fclose(fp);
	
	int i;
	for(i=0; i<count; i++) {
		printf("%d ",array[i]);
	}
}
