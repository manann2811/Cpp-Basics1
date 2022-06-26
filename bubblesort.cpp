#include<iostream>

using namespace std;

void bubbleSort(int arr[], int size)
{
	int temp;
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void printArray(int arr[], int size)
{
	for(int i=0; i<size; i++)
		cout<<arr[i];
}

int main()
{
	int arr[] = {6, 5, 1, 3, 2, 4, 7};
	int size = sizeof(arr) / sizeof(int);
	
    cout<<"\nUnsorted array is : ";
    printArray(arr, size);

	bubbleSort(arr, size);

	cout<<"\nSorted array is : ";
	printArray(arr, size);

	return 0;
}