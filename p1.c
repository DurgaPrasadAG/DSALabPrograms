#include <stdio.h>
#include <stdlib.h>

void create();
void insert();
void del();
void display();

int i, n, a[10];

void create() {
	printf("Enter How many elements? : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("\nEnter a number : ");
		scanf("%d", &a[i]);
	}
}

void insert() {
	int ele, pos;
	printf("Enter the position : ");
	scanf("%d", &pos);
	printf("\nEnter the element : ");
	scanf("%d", &ele);
	
	for (i = n; i > pos; i--) {
		a[i] = a[i+1];
	}
	
	a[pos] = ele;
	n += 1;
}

void del() {
	int ele, pos;
	printf("Enter the position : ");
	scanf("%d", &pos);
	
	for (i = 0; i < n-1; i++) {
		a[i] = a[i+1];
	}
	
	n -= 1;
	printf("Deleted element : %d \n", a[pos]);
}

void display() {
	printf("Array elements : \n");
	for (i = 0; i < n; i++)	{
		printf("%d \t", a[i]);
	}
}

int main() {
	return 0;
}


