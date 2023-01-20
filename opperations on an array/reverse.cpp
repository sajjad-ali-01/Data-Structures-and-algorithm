#include <iostream> 
using namespace std;

void display(int arr[],int size)
{
	for(int i =0; i< size; i++){
		cout << arr[i] << "  ";
	}
}
void reverse(int arr[],int ar[],int size){
	int j = size -1;
	for(int i = 0; i < size ; i++){
		ar[j] = arr[i];
		j--;
	}
}

int main(){
	int size = 0;
	cout << "Enter the size of array: " << endl;
	cin >> size;
	int ar[size];
	int arr[size];
	
	cout << "Enter numbers in array: " << endl;
	for(int i = 0; i < size;i++ )
	{
		cin >> arr[i];
	}
	
	cout << "array before reverse: " << endl;
	display(arr,size);
	
	reverse(arr, ar ,size);
	
	cout << "\narray after reverse: " << endl;
	display(ar,size);
	return 0;
	
}
