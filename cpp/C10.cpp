#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    cin>>a>>b;
    string c = a + b;
    int a1, b1, c1;
    a1 = a.size();
    b1 = b.size();
    cout<<a1<<" "<<b1<<endl;
    cout<<c<<endl;
    string temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp[0];
    cout<<a<<" ";
    cout<<b<<endl;
    return 0;
}
