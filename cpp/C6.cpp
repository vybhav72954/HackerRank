#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int p, int q, int r,int s){
    int temp = 0;

    int arr[4] = {p, q, r, s};
    for (int i = 0; i <= 3; i++){
        if (arr[i] > temp){
            temp = arr[i];
        }
        
    }
    return temp;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
