#include <iostream>
using namespace std;

int binary_search(int arr[], int len) 
{ 
    int start = 0;
    int end = len - 1;
  
          while (start <= end) 
          {
              int mid = (start + end) / 2;
  
              if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == len - 1 || arr[mid] >= arr[mid + 1])) 
              {
                  return mid;  
              } else if (mid > 0 && arr[mid - 1] > arr[mid]) 
              {
                  end = mid - 1;
              } else {
                  start = mid + 1;
              }
        } 
    return -1;
}

int main(void) 
{ 
    int arr[] = {1, 2, 3, 4, 8, 6, 7}; 
    int len = sizeof(arr) / sizeof(arr[0]); 
    int result = binary_search(arr, len);

    cout<<" The index of peak element is found at " <<result<<endl;

    return 0; 
} 