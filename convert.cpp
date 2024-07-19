#include <iostream>
#include <string>
#include <limits>
#include <conio.h>
using namespace std;

struct Pengguna {
    string nama;
    string nim;
    string nik;
};

void inputPengguna(Pengguna &pengguna) {
    cout << "Masukkan Nama: ";
    cin >> pengguna.nama;
    cout << "Masukkan NIM: ";
    cin >> pengguna.nim;
    cout << "Masukkan NIK: ";
    cin >> pengguna.nik;
}

void tampilkanPengguna(const Pengguna &pengguna) {
    cout << "\nDataPengguna:" << "\n";
    cout << "Nama: " << pengguna.nama << endl;
    cout << "NIM: " << pengguna.nim << endl;
    cout << "NIK: " << pengguna.nik << endl;
}

void tukar(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void dMenu() {
    system("cls");
    cout << "Converter Mata Uang ASEAN" << "\n";
    cout << "1. Indonesia" << "\n";
    cout << "2. Malaysia" << "\n";
    cout << "3. Singapura" << "\n";
    cout << "4. Thailand" << "\n";
    cout << "5. Brunei Darussalam" << "\n";
    cout << "6. Filipina" << "\n";
    cout << "7. Myanmar" << "\n";
    cout << "8. Kamboja" << "\n";
    cout << "9. Vietnam" << "\n";
    cout << "10. Laos" << "\n";
    cout << "11. Timor Leste" << "\n";
    cout << "12. Exit" << "\n";
    cout << "Masukan angka : ";
}

void mPertama(string pesan, const Pengguna &pengguna) {
    system("cls");
    cout << "Data Pengguna:\n";
    cout << "Nama: " << pengguna.nama << "\n";
    cout << "NIM: " << pengguna.nim << "\n";
    cout << "NIK: " << pengguna.nik << "\n\n";

    cout << "Anda memilih Mata Uang " << pesan <<"\n";
    double nominal;
    cout << "Anda memasukkan nominal: " << nominal << " " << pesan;
    cin.ignore(); //untuk mengabaikan karakter newline yang tertinggal
    cin.get(); //menunggu pengguna menekan enter
}

int main() {
    Pengguna pengguna;

    inputPengguna(pengguna);
    tampilkanPengguna(pengguna);

    int pl;
    do {
        dMenu();
        cin >> pl;
        switch (pl) {
            case 1:
                mPertama("Rupiah", pengguna);
                break;
            case 2:
                mPertama("Ringgit", pengguna);
                break;
            case 3:
                mPertama("Dollar Singapura", pengguna);
                break;
            case 4:
                mPertama("Baht", pengguna);
                break;
            case 5:
                mPertama("Dollar Brunei", pengguna);
                break;
            case 6:
                mPertama("Peso", pengguna);
                break;
            case 7:
                mPertama("Kyat", pengguna);
                break;
            case 8:
                mPertama("Riel", pengguna);
                break;
            case 9:
                mPertama("Dong", pengguna);
                break;
            case 10:
                mPertama("Kip", pengguna);
                break;
            case 11:
                mPertama("Dollar AS", pengguna);
                break;
            case 12:
                break;
            default:
                system("cls");
                cout << "Mata Uang Tidak Valid";
                getch();
                break;
        }
    } while (pl != 12);
    return 0;
}
