#include <iostream>

int main(){
    int angka;
    int duit;
    int harga;
    int sisaUang;;
    int kembalian;
    int pecahan5ribu;
    int pecahan1ribu;
    int sisaKembalian;

    std::cout << "=== VENDING MACHINE AUTOMATIC ===" << std::endl <<
    "Pilihan Minuman:" << std::endl << "1. Air Mineral (Rp 4000)" << 
    std:: endl << "2. Teh Botol (6000)" << std::endl << "3. Kopi Susu (Rp 10000)"
    << std::endl;
    
    std::cout << "Pilih Kode Minuman (1-3): ";
    std::cin >> angka; 


    switch (angka){
        case 1:
            harga = 4000;
            break;
        case 2:
             harga = 6000;
            break;
        case 3: 
            harga = 10000;
            break;
    default:
    std::cout << "Kode Tidak Valid.";
    }

    if (angka < 4){
    std::cout << std::endl << "Masukkan Uang Anda (Rp): ";
    std::cin >> duit;
    


    if(duit < harga){
        sisaUang = harga - duit;
        std::cout << "Uang anda kurang." << std::endl;
        std::cout << "Sisa kekurangan uang : Rp " << sisaUang;
    }else{
        kembalian = duit - harga;
        std::cout << "Kembalian anda : Rp" << kembalian << std::endl;
        
        pecahan5ribu = kembalian / 5000;
        std::cout << pecahan5ribu << " Lembar" << std::endl;

        sisaKembalian = kembalian % 5000;
        
        pecahan1ribu = sisaKembalian / 1000;
        std::cout << pecahan1ribu << " Lembar";
       
    }
}else

   return 0;
}