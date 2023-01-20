#include <iostream> 
using namespace std;

void display(int arr[],int size)
{
	for(int i =0; i< size; i++){
		cout << arr[i] << "  ";
	}
}
int insertion(int arr[],int size,int index,int key){
	for(int i=size; i > index ; i--){
		arr[i] = arr[i-1];
	}
	arr[index] = key;
	size++;
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
	
	cout << "array before insertion: " << endl;
	display(arr,size);
	
	size = insertion(arr, size,index, key);
		
	cout << "\narray after insertion: " << endl;
	display(arr,size);
	return 0;
	
}
