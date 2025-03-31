//Dynamic Array Manipulation

#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int n;
int largest = 0;
int smallest = 0;

int main() {
    // Write C++ code here
    cout << "Please enter the number of elements: ";
    cin >> n;
    
    int *nums = new int[n]; //// Dynamically allocate an array named nums with size n 
    
    cout << "Please enter the numbers: ";
    for (int x = 0; x < n; x++) {
    cin >> nums[x];
    }
    
      largest = nums[0]; //assign the first value in the array...
      smallest = nums[0];//to largest and smallest in order to begin...
                         //comparisons in the respective for loops.
    
    for (int x = 0; x < n; x++){ //compares the values one by one...
        if (nums[x]>largest){   //if a value is greater than the previous then
            largest = nums[x];  //it becomes the newest largest value.
        }
    }
    
    for (int x = 0; x < n; x++){ //same thing as above for this one,...
        if (nums[x]<smallest){   //only this checks for the smallest.
            smallest = nums[x];
        }
    }
  
     cout << largest << " is the largest number.\n";
     cout << smallest << " is the smallest number.\n";
     
     
     // Deallocate Heap memory
    delete[] nums;

    return 0;
}
