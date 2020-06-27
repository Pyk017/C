#include <iostream>
#include <sstream>
#include<string>
using namespace std;

class Student{
    private:
        string f_name, l_name;
        int age, stand;
    public:
        void set_age(int a){
            age = a;
        }
        void set_first_name(string name){
            f_name = name;
        }
        void set_last_name(string lname){
            l_name = lname;
        }
        void set_standard(int st){
            stand = st;
        }
        int get_age(){
            return age;
        }
        int get_standard(){
            return stand;
        }
        string get_last_name(){
            return l_name;
        }
        string get_first_name(){
            return f_name;
        }
        string tostring(){
            string ag = to_string(age);
            string st = to_string(stand);
            return ag + ',' + f_name + ',' + l_name + ',' + st;
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
    cout << st.tostring();
    
    return 0;
}