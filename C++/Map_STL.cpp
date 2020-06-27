#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    map<string, int> m;
    while(n--){
        int query, marks;
        string name;
        cin >> query >> name;
        if(query == 1){
            cin >> marks;
            m[name] += marks;
            // m.insert(make_pair(name, marks));
        }
        else if(query == 2){
            m.erase(name);
        }
        else{
            // map<string, int>::iterator it = m.find(name);    using an iterator.
            // if(it != m.end()){
            //     cout << m[name] << endl;
            // }
            // else{
            //     cout << "0" << endl;
            // }
            cout << m[name] << endl;
        }
    }
    return 0;
}



