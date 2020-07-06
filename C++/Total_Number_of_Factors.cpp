#include<bits/stdc++.h>
using namespace std;

int factors(int n){
    int i=2;
    map<int, int> m;
    while(i <= n){
        int temp = n;
        while(temp % i == 0  && temp >= i){
            m[i] += 1;
            temp /= i;
        }
        n = temp;E
        i += 1;
    }
    map<int, int>::iterator it = m.begin();
    int total = 1;
    cout << "All Prime Factors are :- " << "";
    while(it != m.end()){ 
        total *= (it->second + 1);
        cout << it->first << " ";
        it++;
    }
    cout << "\n";
    return total;
}

int main(){
    int n;
    cin >> n;
    int result = factors(n);
    cout << "Total Number of factors are :- " << result << endl;
    return 0;
}