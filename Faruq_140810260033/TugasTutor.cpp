#include<iostream>

int main(){
    int totalBelanja; 
    
    std::cout << "=== Kalkulator Kasir Toko Buku ===" << std::endl;
    std::cout << "Masukkan total belanja (RP): ";
    std::cin >> totalBelanja;

    float diskonSepuluh = totalBelanja * 0.10; 
    float totalBayar1 = totalBelanja - diskonSepuluh;
    float diskonDua = totalBelanja * 0.20;
    float totalBayar2 = totalBelanja - diskonDua;
    
    std::cout << "--- Ringkasan Pembayaran ---" << std::endl;

    if (totalBelanja < 100000){
        std::cout << "Diskon 0%" << std::endl << "Total Bayar : Rp " << totalBelanja;
    }else if (totalBelanja >= 100000 && totalBelanja <= 299999){
        std::cout << "Diskon 10% : Rp " << diskonSepuluh << std::endl << "Total Bayar : Rp " << totalBayar1;
    }else if (totalBelanja >= 300000){
        std::cout << "Diskon 20% : Rp " << diskonDua << std::endl << "Total Bayar : Rp " << totalBayar2;
    }

    return 0;
}