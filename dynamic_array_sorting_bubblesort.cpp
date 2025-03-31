// Dynamic Array Sorting in Ascending, Descending, or Both using Bubble Sort
#include <iostream>
#include <algorithm>
using namespace std;

int siz;
int n;
char choice;

void print_array ();
void descend ();
void ascend ();

int *nums = new int [5];

int main() {
    cout << "Enter size: ";
    cin >> siz;
    
    int *nums1 = new int [siz];   // create new array of the new size

    // copy all the elements
    copy(nums, nums + siz, nums1);

    // deallocate the previous array and assign the pointer
    // pointing to the previous array to the new one
    delete[] nums;
    nums = nums1;
    
    cout << "Enter digits: ";
    
    for (int i = 0; i < siz; i++) {
        cin >> nums[i];
    }
    
    cout << "Do you want the ascending order, descending order, or both (A/D/B)?: ";
    cin >> choice;
    
    if (choice == 'd' || choice == 'D') {
        
        descend();
        
    } else if (choice == 'a' || choice == 'A') {
        
        ascend();
        
    } else if (choice == 'b' || choice == 'B'){
        cout << "Descending: ";
        descend ();
        cout << "\n";
        cout << "Ascending: ";
        ascend ();
        cout << "\n";
    } else {
        cout << "Invalid input. \n";
    }

    delete[] nums;
    // delete[] nums1;

    return 0;
}

void print_array () {
         for (int i = 0; i < siz; i++) {
        cout << nums[i] << " ";
    }
}

void descend () {
        //Decending Order
    for (int x = 0; x < siz; x++) {
    for (int i = 0; i < siz-1; i++) {
        if (nums[i] < nums[i+1]) {
          swap(nums[i],nums[i+1]);
        }
    }
    }
    
        print_array ();
}

void ascend () {
        // //Ascending Order
    for (int x = 0; x < siz; x++) {
    for (int i = 0; i < siz-1; i++) {
        if (nums[i] > nums[i+1]) {
          swap(nums[i],nums[i+1]);
        }
    }
    }
    
        print_array ();
}
