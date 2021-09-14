/* 
* Below you will find an bubble sorting algorithm implementation which is easy to understand and implement. Moreover it do not need any extra storage space.
* Here I have taken size of array by the user and then for that size elements are also taken by the user. Afterwards by comparing the current element with the next element the 
* elements are accordingly swapped and sorted array is finally printed.
*/


// Header Files
#include <iostream>
using namespace std;


void algorithm(int arr[], int sz){
    // Array Sorting - Asensding Order
    
    int i,j,temp;
    for (i = 0; i < sz; ++i)
    {
        for (j = i + 1; j < sz; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"Sorting Order Array: \n";
    for (i = 0; i < sz; ++i)
        cout<<arr[i]<<" ";
}
 
int main()
{
    int ARRAY_SIZE;
    cout<<"Enter array size:";
    cin>>ARRAY_SIZE;
    int arr[ARRAY_SIZE], i;

	cout<<"Simple C++ Example Program for Sorting (Asending Order) In Array\n";

	// Read Input
    for (i = 0; i < ARRAY_SIZE; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>arr[i];
    }

    algorithm(arr, ARRAY_SIZE);
        
    return 0;
}
