#include <iostream> 
using namespace std;

void display(int arr[],int size)
{
	for(int i =0; i< size; i++){
		cout << arr[i] << "  ";
	}
}
int deletion(int arr[],int size,int index,int key){
	for(int i=index; i < size ; i++){
		arr[i] = arr[i+1];
	}
	size--;
	return size;
}

int main(){
	int size = 0;
	cout << "Enter the size of array: " << endl;
	cin >> size;
	
	int arr[size];
	int key = 20;
	int index = 3;
	
	cout << "Enter numbers in array: " << endl;
	for(int i = 0; i < size;i++ )
	{
		cin >> arr[i];
	}
	
	cout << "array before deletion: " << endl;
	display(arr,size);
	
	size = deletion(arr, size,index, key);
	
	cout << "\narray after deletion: " << endl;
	display(arr,size);
	return 0;
	
}
