#include<iostream>

using namespace std;

void insertionSort(int arr[], int size)
{
	int minIndex;
	int temp;
	for(int i=0; i<size-1; i++)
	{
		minIndex = i;
		for(int j=i+1; j<size; j++)
		{
			if(arr[minIndex]>arr[j])
				minIndex = j;
		}
		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

int main()
{
	int arr[] = {1, 3, 5, 4, 2};
	int size = sizeof(arr) / sizeof(int);
	
    cout<<"\nUnsorted array is : ";
	for(int i=0; i<size; i++)
		cout<<arr[i];

	insertionSort(arr, size);

	cout<<"\nSorted array is : ";
	for(int i=0; i<size; i++)
		cout<<arr[i] ;

	return 0;
}