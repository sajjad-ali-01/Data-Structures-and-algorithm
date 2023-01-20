#include <iostream>
using namespace std;
int partition(int arr[],int lb,int ub)
{
	int pivot,start,end;
	
	 pivot = arr[lb];
	 start = lb;
	 end = ub;
	
	while(start < end)
{
	while(arr[start] <= pivot)
	{
		start++;
	}
	
	while(arr[end] > pivot)
	{
		end--;
	}
	
	if(start < end)
	{
		swap(arr[start],arr[end]);
	}
}
	swap(arr[lb],arr[end]);
	return end;	
}

void quickSort(int arr[],int lb,int ub)
{
	if(lb < ub)
	{
		int loc = partition(arr,lb,ub);
		quickSort(arr,lb,loc-1);
		quickSort(arr,loc+1,ub);
	}
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
	
	quickSort(arr,0,size-1);
	
	cout << "Array after Sorting: " << endl;
	for(int i=0; i<size;i++)
	{
		cout << arr[i] << "  ";
	}
	
}
