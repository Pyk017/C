// To check, if a number 'p' is Prime, find a number 'n' such that 'n' is the smallest natural number which satisfies n^2 >= p.
// Now, check if 'p' is divisible by any of the prime number less than or equal to 'n'. If 'p' is not divisible by any such prime number,
// 'p' is a prime number, otherwise 'p' is not a prime number.

#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n == 1)
        return false;
    int temp = 2;
    while((temp * temp) < n){
        if(n % temp == 0){
            return false;
        }
        temp += 1;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    string res = (prime(n) == true) ? "Prime": "Not Prime!";
    cout << res << endl;
    return 0;
}