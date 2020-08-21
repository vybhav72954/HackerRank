#include <iostream>
#include <sstream>
using namespace std;

/*
Uses Stringstream
*/

class Student{
    private:
        int a;
        string f, l;
        int s;
    public:
        void set_age(int age){
            a = age;
        }
        void set_first_name (string fname){
            f = fname;
        }
        void set_last_name (string lname){
            l = lname;
        }
        void set_standard(int std){
            s = std;
        }
        int get_age(){
            return a;
        }
        string get_first_name (){
            return f;
        }
        string get_last_name (){
            return l;
        }
        int get_standard(){
            return s;
        }
        string to_string(){
        stringstream ss;
        char c = ',';
        ss << a << c << f << c << l << c << s;
        return ss.str();
    } 
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
