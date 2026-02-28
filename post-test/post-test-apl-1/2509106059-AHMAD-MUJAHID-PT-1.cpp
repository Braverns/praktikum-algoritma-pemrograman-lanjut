#include <iostream>
#include <string>
using namespace std;
// g++ -o 2509106059-AHMAD-MUJAHID-PT-1 2509106059-AHMAD-MUJAHID-PT-1.cpp

int main() {

    string nama_input, nim_input;
    string user_name = "Ahmad Mujahid";
    string password = "059";

    int percobaan = 0;
    int pilihan;
    
    while (percobaan < 3) {
        cout << " _________________________________ \n";
        cout << "|                                 |\n";
        cout << "|             LOGIN               |\n";
        cout << "|_________________________________|\n";
        cout << "Masukkan Nama Anda                : ";
        getline(cin, nama_input);

        cout << "Masukkan 3 digit terakhir NIM Anda: ";
        getline(cin, nim_input);

        if (nama_input == user_name && nim_input == password) {
            cout << "\nLogin Berhasil!\n\n";
            break;
        } else {
            cout << "Login Salah!\n\n";
            percobaan++;
        }
    }

    if (percobaan == 3) {
        cout << "Anda gagal login 3 kali. Program berhenti.\n";
        return 0;
    }


    do {
        cout << " __________________________________ \n";
        cout << "| MENU UTAMA                       |\n";
        cout << "|----------------------------------|\n";
        cout << "| 1. Konversi Jam ke Menit & Detik |\n";
        cout << "| 2. Konversi Menit ke Jam & Detik |\n";
        cout << "| 3. Konversi Detik ke Jam & Menit |\n";
        cout << "| 4. Keluar                        |\n";
        cout << "|__________________________________|\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        cout << endl;

        if (pilihan == 1) {
            double jam;
            cout << "Masukkan jumlah Jam: ";
            cin >> jam;

            cout << jam << " Jam = "
                 << jam * 60 << " Menit dan "
                 << jam * 3600 << " Detik\n\n";
        }
        else if (pilihan == 2) {
            double menit;
            cout << "Masukkan jumlah Menit: ";
            cin >> menit;

            cout << menit << " Menit = "
                 << menit / 60 << " Jam dan "
                 << menit * 60 << " Detik\n\n";
        }
        else if (pilihan == 3) {
            double detik;
            cout << "Masukkan jumlah Detik: ";
            cin >> detik;

            cout << detik << " Detik = "
                 << detik / 3600 << " Jam dan "
                 << detik / 60 << " Menit\n\n";
        }
        else if (pilihan == 4) {
            cout << "Program selesai.\n";
        }
        else {
            cout << "Pilihan tidak valid.\n\n";
        }

    } while (pilihan != 4);

    return 0;
}