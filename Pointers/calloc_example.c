#include<stdio.h>
#include<stdlib.h>

int main(void){
	int *ptr;
	int n;
	printf("Enter number of elements n : \n");
	scanf("%d", &n);
	
	ptr = (int *)calloc(n, sizeof(int));
	
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", ptr+i);
	}

	for(int i=0; i<n; i++){
		printf("%d ", *(ptr+i));
	}

	free(ptr);

	return 0;
}
