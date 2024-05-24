#include<iostream>
using namespace std;

/**
  No of operations or instructions is proportional to N
  So, O(N)
*/
int linear_search(int arr[], int n, int key) {
    
    for(int i=0;i<n;i++) {
        if(arr[i] == key)
         return i;
    }
    return -1;
}

int main() {
    
    int arr [] = {10, 15, 12, 9, 6, 4, 3, 10, 8};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;

    int index = linear_search(arr, n, key);
    
    if(index != -1)
        cout << key << " is present at index " << index << endl;
    else
        cout << key << " is NOT found!" << endl;
    return 0;

}

