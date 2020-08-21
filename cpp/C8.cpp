#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int range;
    cin>>range;
    int arr[range];
    for (int i =0; i < range; i++){
        cin>>arr[i];
        
    }
    for (int i = range-1; i >= 0; i--){
        cout<<arr[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
