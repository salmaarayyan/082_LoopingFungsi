#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
int hXpander = 300, hPorsche = 8000, hAvanza = 260, hBrio = 200, hLamborghini = 6000;

void input(){
    cout << "nama pembeli : ";
    cin >> nama;
    cout << "jumlah Xpander : ";
    cin >> nXpander;
    cout << "jumlah Porsche : ";
    cin >> nPorsche;
    cout << "jumlah Avanza : ";
    cin >> nAvanza;
    cout << "jumlah Brio : ";
    cin >> nBrio;
    cout << "jumlah Lamborghini : ";
    cin >> nLamborghini;

}

int TotalHarga(){
    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini);
}

void display(){
    cout << "total harga : " << TotalHarga() << endl;
}

int main(){
    char pilihan;
    do{
    input();
    display(); 
    cout << "apakah ingin membeli kembali? ";
    cin >> pilihan; 
    }while(pilihan == 'y' || pilihan == 'Y');
    
}