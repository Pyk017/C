#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

class power{
    public:
        long long int powers(int x, int y){
            if(y == 0)
                return 1;
            int temp = powers(x, y/2);
            if(y % 2 == 0)
                return temp * temp;
            else
                return x * temp * temp;
        }
};

int main(){
    int a, b;
    power P;
    cin >> a >> b;
    cout << P.powers(a, b) << endl;
    return 0;
}