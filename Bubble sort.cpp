// WAP to find the largest number amoung 'n' numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, num[100], max;
	printf("\nEnter the size of array :\n");
	scanf("%d", &n);
	printf("Enter array elements:\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	
	max=num[0];
	for(i = 1; i < n; i++)
	{
		if(num[i] > max){
			max = num[i];
		}
	}
	printf("\n Largest number in array is : %d", max);
	getch();
}
