#include <iostream>
using namespace std;

void selectionsort(int arr[],int size)
{
	int i,j,k;
	for( i=0;i<size-1;i++){
		for(j=k=i;j<size;j++)
		{
			if(arr[k]>arr[j])
			{
				k=j;
			}
		}
		swap(arr[i],arr[k]);
	}
	cout << "Array after sorting: " << endl;
}

int main()
{
	int size;
	cout << "enter the size of array" << endl;
	cin >> size;
	
	int arr[size];
	cout << "Enter Numbers of any order in array: " << endl;
	for(int i=0; i<size;i++)
	{
		cin >> arr[i];
	}
	
	selectionsort(arr,size);
	
	for(int i=0; i<size;i++)
	{
		cout << arr[i] << "  ";
	}
}
