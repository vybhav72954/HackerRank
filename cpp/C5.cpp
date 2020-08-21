#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    string num[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    for (int j=num1; j<=9 && j<=num2; j++){
        cout<<num[j-1]<<endl;
    }
    if(num2 >= 10){
        for (int i=10; i<= num2; i++){
            if (i%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }

    return 0;
}
