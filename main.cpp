#include <iostream>

using namespace std;
int n;
unsigned long long fact(int n){
    if(n == 1) return 1;
    return fact(n-1)*n;
}
int main(int argc, char** argv) {
    cin >> n;
    cout<<fact(n);
    return 0;
}

