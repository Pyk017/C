#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    set<int> s;
    while(q--){
        int data, que;
        cin >> que >> data;
        if(que == 1){
            s.insert(data);
        }
        else if(que == 2){
            s.erase(data);
        }
        else{
            set<int>::iterator it = s.find(data);
            if(it != s.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}



