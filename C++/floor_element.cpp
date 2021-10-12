#include <iostream>
using namespace std;

int floor = -1;
int get_floor(int arr[], int length, int key)
{
    int start = 0;
    int end = length - 1;

    while (start <= end)
    {

        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return arr[mid];

        // return mid-1 if arr[mid - 1] is equal to key
        else if (key < arr[mid])
            end = mid - 1;

        else
        {
            floor = arr[mid];
            start = mid + 1;
        }
    }

    return floor;
}


int main(void) 
{ 
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int key = 5;

    int result = get_floor(arr, size, key);

    cout<<" The floor of "<< key <<" is " <<result<<endl;

    return 0; 
} 