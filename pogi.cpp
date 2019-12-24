#include <iostream>
using namespace std;
int n, product = 1;
void factorial(int x);

int main(){

    cin >> n;
    factorial(n);
    return 0;
}

void factorial(int x){
    for(int i = 1; i <=n; i++){
        product = product * i;
    }
    cout << product;
}

