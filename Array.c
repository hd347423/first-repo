#include <stdio.h>

void printEvenElement (int a[], int n) {
	int i;
	printf ("The even element in array: ");
	for (i=0;i<n;i++) {
		if (a[i]%2==0) {
			printf ("%d\t",a[i]);
		}
	}
}
int maxElementArray (int a[],int n) {
	int i;
	int max=a[0];
	for (i=1;i<n;i++) {
		if (a[i]>max) max=a[i];
	}
	return max;
}
int sumOddArray (int a[], int n) {
	int i,sum=0;
	for (i=0;i<n;i++) {
		if (a[i]%2!=0) sum+=a[i];
	}
	return sum;
}
void resetNegativeToZero(int a[],int n) {
	int i;
	for (i=0;i<n;i++) {
		if (a[i]<0) a[i]=0;
		printf ("%d",a[i]);
	}
	
}
int main () {
	int n,i;
	printf ("Enter the number of element: ");
	scanf ("%d",&n);
	int a[100];
	
	for (i=0;i<n;i++) {
		printf ("a[%d]=",i);
		scanf ("%d",a+i);
	}
	
	printEvenElement(a,n);
	int maxElement=maxElementArray(a,n);
	printf ("\nMax Element of array: %d\n",maxElement);
	
	int sumOdd=sumOddArray(a,n);
	printf ("Sum of odd number: %d\n",sumOdd);
	
	printf ("The array after change:\n ");
	resetNegativeToZero(a,n);
	return 0;
	
	
}