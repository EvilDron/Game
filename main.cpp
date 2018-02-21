/* 
 * File:   main.cpp
 * Author: Пользователь
 *
 * Created on 26 Январь 2018 г., 16:59
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int n;
unsigned long long fact(int n){
    unsigned long long result = 1;
    for(int i = 2; i <= n; i++)
        result *= i;
    return result;
}
int main(int argc, char** argv) {
    cin >> n;
    cout<<fact(n);
    return 0;
}

