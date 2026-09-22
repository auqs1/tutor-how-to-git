#include <iostream>

int main(){
    int angka;
    int duit;
    int harga;
    int sisaUang;;
    int kembalian;
    int pecahan5ribu;
    
    std::cout << "=== VENDING MACHINE AUTOMATIC ===" << std::endl <<
    "Pilihan Minuman:" << std::endl << "1. Air Mineral (Rp 4000)" << 
    std:: endl << "2. Teh Botol (6000)" << std::endl << "3. Kopi Susu (Rp 10000)"
    << std::endl;
    
    std::cout << "Pilih Kode Minuman (1-3): ";
    std::cin >> angka; 
    std::cout << std::endl << "Masukkan Uang Anda (Rp): ";
    std::cin >> duit;

    switch (angka){
        case 1:
            harga = 4000;
    break;
        case 2:
             harga = 6000;
    break;
        case 3: 
            harga = 10000;
    default:
    std::cout << "Kode Tidak Valid.";
    break;
    }

    if(duit < harga){
        sisaUang = harga - duit;
        std::cout << "Uang anda kurang" << std::endl;
        std::cout << "Sisa uang : Rp" << sisaUang;
    }else{
        kembalian = duit - harga;
        std::cout << "Kembalian anda : Rp" << kembalian;
        
        pecahan5ribu = duit / 5000;
        pecahan1ribu = 
        
       
    }
    
   return 0;
}