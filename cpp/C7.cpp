#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
void update(int *a,int *b) {
    int a1 = *a;
    int b1 = *b;
    a1 =  a1 + b1;
    b1 = abs(*a - *b);
    *a = a1;
    *b = b1;
  


    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    cout<<a<<endl<<b<<endl;
    //printf("%d\n%d", a, b);

    return 0;
}
