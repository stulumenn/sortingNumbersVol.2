#include <stdio.h>

void sorter (int array[], int size);	

int main(){

	int size=10;
	int ary[]={0,34,32,423,48,28,9,85,92,3};
	sorter(ary, size);

	for(int i=0; i<size; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");
}

void sorter (int array[], int size){

	int temp=0;
	for(int i=0; i < size; i++)
	{
		for(int j=i+1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[j];
				array[j]= array[i];
				array[i] = temp;
			}
		}
	}
}
