#include<iostream>

using std::cout, std::cin, std::endl;

int luasPersegipanjang (float pjg, float lebar){
    int luas;
    luas = pjg * lebar;
    return luas;
}

int main(){
int luas;
float pjg;
float lebar;

cout << "Masukkan Panjang : ";
cin >> pjg;
cout << "Masukkan Lebar : ";
cin >> lebar;


cout << luasPersegipanjang(pjg, lebar);

}