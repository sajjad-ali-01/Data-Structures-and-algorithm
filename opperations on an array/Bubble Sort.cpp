#include <iostream> 
using namespace std;

void display(int arr[],int size)
{
	for(int i =0; i< size; i++){
		cout << arr[i] << "  ";
	}
}

void bubbleSort(int arr[],int size){
	for(int i=0; i < size-1 ; i++){
		
		for(int j = 0; j < size-1-i;j++){
	
			if(arr[j] > arr[j+1])
			{
			
				swap(arr[j],arr[j+1]);
			}
		}
		}
	}
	
	


int main(){
	int size = 6;
	cout << "Enter the size of array: " << endl;
	cin >> size;
	
	int arr[size];
	
	cout << "Enter numbers of any order: " << endl;
	for(int i = 0; i < size;i++ )
	{
		cin >> arr[i];
	}
	
	cout << "array before sort: " << endl;
	display(arr,size);
	
	bubbleSort(arr, size);
	
	cout << "\narray after sort: " << endl;
	display(arr,size);
	return 0;
	
}
