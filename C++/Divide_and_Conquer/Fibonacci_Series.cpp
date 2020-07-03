#include<iostream>
#include<cmath>
#include<algorithm>
#include<sstream>

using namespace std;

void multiply(int F[2][2], int M[2][2]){
    int x = F[0][0]*M[0][0] + F[0][1] *M[1][0];
    int y = F[0][0]*M[0][1] + F[0][1] *M[1][1];
    int z = F[1][0]*M[0][0] + F[1][1] *M[1][0];
    int w = F[1][0]*M[0][1] + F[1][1] *M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(int F[2][2], int n){
    int i;
    int M[2][2] = {{1, 1}, {1, 0}};
    for(int i=2; i<=n; i++){
        multiply(F, M);
        cout << F[0][0] << F[0][1] << F[1][0] << F[1][1] << endl;
    }
}

int fibo(int n){
    if(n == 0)
        return 0;
    int F[2][2] = {{1, 1}, {1, 0}};
    power(F, n - 1);
    return F[0][0];
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n) << endl; 
    return 0;
}