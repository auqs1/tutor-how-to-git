#include<iostream>

using std::cout, std::cin, std::endl;

void yessir(int &a, int &b, int c){
    a++;
    b -= c;
    c -= a;

    c = 7;

    cout << a << b << c << endl;
}

int main (){
    int x = 6
}