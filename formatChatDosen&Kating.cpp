#include <bits/stdc++.h>
#include <typeinfo>
#include <cstdlib>
#include <string>
#include <variant>
using namespace std;

// Pilihan Salam Function

int pilihanSalamAlternatifFunction(){
        int pilihanSalam;

        //Pilihan Salam
        cout << "----------------------------------------" << endl;
        cout << "1.Assalamualaikum Wr. Wb." << endl;
        cout << "2.Selamat Pagi" << endl;
        cout << "3.Selamat Siang" << endl;
        cout << "4.Selamat Sore" << endl;
        cout << "5.Selamat Malam" << endl;
        cout << "Pilih salah satu (Input Angka):" << endl;
        cin >> pilihanSalam;

        if (pilihanSalam == 1 || pilihanSalam == 2 || pilihanSalam == 3 || pilihanSalam == 4 || pilihanSalam == 5){
            pilihanSalam = pilihanSalam - 1;
        } else {
            cout << "----------------------------------------" << endl;
            cout << "Input tidak sesuai, RUN ULANG!" << endl;
        }
        return pilihanSalam;
}

int pilihanSalamFunction(){
        int pilihanSalam;

        //Pilihan Salam
        cout << "----------------------------------------" << endl;
        cout << "1.Assalamualaikum Wr. Wb." << endl;
        cout << "2.Selamat Pagi" << endl;
        cout << "3.Selamat Siang" << endl;
        cout << "4.Selamat Sore" << endl;
        cout << "5.Selamat Malam" << endl;
        cout << "Pilih salah satu (Input Angka):" << endl;
        cin >> pilihanSalam;

        if (pilihanSalam == 1 || pilihanSalam == 2 || pilihanSalam == 3 || pilihanSalam == 4 || pilihanSalam == 5){
            pilihanSalam = pilihanSalam - 1;
        } else {
            cout << "----------------------------------------" << endl;
            cout << "Input tidak sesuai, Kesempatan Terakhir" << endl;
            pilihanSalamAlternatifFunction();
        }
        return pilihanSalam;
}

// Pilihan Panggilan Function

int pilihanPanggilanAlternatifFunction(){
        int pilihanPanggilan;

        //Pilihan Salam
        cout << "----------------------------------------" << endl;
        cout << "1.Pak" << endl;
        cout << "2.Bu" << endl;
        cout << "Pilih salah satu (Input Angka):" << endl;
        cin >> pilihanPanggilan;

        if (pilihanPanggilan == 1 || pilihanPanggilan == 2){
            pilihanPanggilan = pilihanPanggilan - 1;
        } else {
            cout << "----------------------------------------" << endl;
            cout << "Input tidak sesuai, RUN ULANG!" << endl;
        }
		return pilihanPanggilan;
}

int pilihanPanggilanFunction(){
        int pilihanPanggilan;

        //Pilihan Salam
        cout << "----------------------------------------" << endl;
        cout << "1.Pak" << endl;
        cout << "2.Bu" << endl;
        cout << "Pilih salah satu (Input Angka):" << endl;
        cin >> pilihanPanggilan;

        if (pilihanPanggilan == 1 || pilihanPanggilan == 2){
            pilihanPanggilan = pilihanPanggilan - 1;
        } else {
            cout << "----------------------------------------" << endl;
            cout << "Input tidak sesuai, kesempatan terakhir" << endl;
            pilihanPanggilanAlternatifFunction();
        }
		return pilihanPanggilan;
}

// Pilihan Prodi Function

variant<int, string> pilihanProdiAlternatifFunction(){
        int pilihanProdi1;

        //Pilihan Prodi
        cout << "----------------------------------------" << endl;
        cout << "1.Teknologi Informasi" << endl;
        cout << "2.Teknik Elektro" << endl;
        cout << "3.Teknik Biomedis" << endl;
        cout << "4.Program Studi Lainnya" << endl;
        cout << "Pilih salah satu (Input Angka):" << endl;
        cin >> pilihanProdi1;

        if (pilihanProdi1 == 1 || pilihanProdi1 == 2 || pilihanProdi1 == 3){
            int pilihanProdi;
            pilihanProdi = pilihanProdi1 - 1;
            return pilihanProdi;
        } else if (pilihanProdi1 == 4) {
            string pilihanProdi;
            cout << "----------------------------------------" << endl;
            cout << "Prodi :" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin,pilihanProdi);
            return pilihanProdi;
        } else {
            cout << "----------------------------------------" << endl;
            cout << "Input tidak sesuai, RUN ULANG!" << endl;
            return 0;
        }

}

variant<int, string> pilihanProdiFunction(){
        int pilihanProdi1, pilihanProdi;

        //Pilihan Prodi
        cout << "----------------------------------------" << endl;
        cout << "1.Teknologi Informasi" << endl;
        cout << "2.Teknik Elektro" << endl;
        cout << "3.Teknik Biomedis" << endl;
        cout << "4.Program Studi Lainnya" << endl;
        cout << "Pilih salah satu (Input Angka):" << endl;
        cin >> pilihanProdi1;

        if (pilihanProdi1 == 1 || pilihanProdi1 == 2 || pilihanProdi1 == 3){
            pilihanProdi = pilihanProdi1 - 1;
            return pilihanProdi;
        } else if (pilihanProdi1 == 4) {
            string pilihanProdi;
            cout << "----------------------------------------" << endl;
            cout << "Prodi :" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin,pilihanProdi);
            return pilihanProdi;
        } else {
            cout << "----------------------------------------" << endl;
            cout << "Input tidak sesuai, Kesempatan Terakhir" << endl;
            pilihanProdiAlternatifFunction();
            return 0;
        }

}

// Pilihan Angkatan Function

int pilihanAngkatanAlternatifFunction(){
        int pilihanAngkatan1, pilihanAngkatan;

        //Pilihan Angkatan
        cout << "----------------------------------------" << endl;
        cout << "1.24" << endl;
        cout << "2.23" << endl;
        cout << "3.22" << endl;
        cout << "4.21" << endl;
        cout << "5.20" << endl;
        cout << "Pilih salah satu (Input Angka):" << endl;
        cin >> pilihanAngkatan1;

        if (pilihanAngkatan1 == 1 || pilihanAngkatan1 == 2 || pilihanAngkatan1 == 3 || pilihanAngkatan1 == 4 || pilihanAngkatan1 == 5){
            pilihanAngkatan = pilihanAngkatan1 - 1;
        } else {
            cout << "----------------------------------------" <<  endl;
            cout << "Input tidak sesuai, RUN ULANG!" << endl;
        }
		return pilihanAngkatan;
}

int pilihanAngkatanFunction(){
        int pilihanAngkatan1, pilihanAngkatan;

        //Pilihan Angkatan
        cout << "----------------------------------------" << endl;
        cout << "1.24" << endl;
        cout << "2.23" << endl;
        cout << "3.22" << endl;
        cout << "4.21" << endl;
        cout << "5.20" << endl;
        cout << "Pilih salah satu (Input Angka):" << endl;
        cin >> pilihanAngkatan1;

        if (pilihanAngkatan1 == 1 || pilihanAngkatan1 == 2 || pilihanAngkatan1 == 3 || pilihanAngkatan1 == 4 || pilihanAngkatan1 == 5){
            pilihanAngkatan = pilihanAngkatan1 - 1;
        } else {
            cout << "----------------------------------------" << endl;
            cout << "Input tidak sesuai, Kesempatan Terakhir" << endl;
            pilihanAngkatanAlternatifFunction();
        }
		return pilihanAngkatan;
}

// Fungsi Utama

int main() {
    string namaPanjang,namaDosen, tujuan; // Variabel String yang akan dimasukkan ke format
    int NIU, angka6NIM; // Variabel komponen NIM
    string pilihanSalam, pilihanPanggilan, pilihanProdi, pilihanAngkatan;
    int angkaPilihanSalam, angkaPilihanPanggilan, angkaPilihanAngkatan;
    variant<int, string> angkaPilihanProdi;
    string salamx[5] = {"Assalamualaikum Wr. Wb. ", "Selamat Pagi ", "Selamat Siang ", "Selamat Sore ", "Selamat Malam "}; //Variabel Jenis Salam
    string panggilanx[2] = {"Bapak ", "Ibu "}; // Variabel Panggilan
    string prodix; //Variabel Prodi Custom
    string prodi[3] = {"Teknologi Informasi ", "Teknik Elektro ", "Teknik Biomedis "}; // Variabel Program Studi
    int aktx[5] = {24, 23, 22, 21, 20}; //Variabel Angkatan

    // Milih antara dosen atau kating
    int pilihanPerkenalan;
    cout << "1.Chat Dosen" << endl;
    cout << "2.Chat Kakak Tingkat" << endl;
    cout << "Pilih salah satu (Input Angka):" << endl;
    cin >> pilihanPerkenalan;


    if (pilihanPerkenalan == 1){  
        angkaPilihanSalam = pilihanSalamFunction();
        angkaPilihanPanggilan = pilihanPanggilanFunction();

        // Menginput nama dosen
        cout << "----------------------------------------" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Siapa Nama Dosennya?" << endl;
        getline(cin, namaDosen);

        // Menginput tujuan menghubungi
        cout << "----------------------------------------" << endl;
        cout << "Tujuan menghubungi: " << endl;
        getline(cin, tujuan);

        // Menginput nama panjang
        cout << "----------------------------------------" << endl;
        cout << "Siapa Nama Panjangmu?" << endl;
        getline(cin, namaPanjang);

        angkaPilihanProdi = pilihanProdiFunction();
        angkaPilihanAngkatan = pilihanAngkatanFunction();

        // Menginput komponen NIM
        cout << "----------------------------------------" << endl;
        cout << "NIU(Nomor Induk Universitas)mu :" << endl;
        cin >> NIU;
        cout << "6 Angka terakhir di NIMmu:" << endl;
        cin >> angka6NIM;
        
        
        //Proses Output
        if (holds_alternative<int>(angkaPilihanProdi)){
            cout << salamx[angkaPilihanSalam] << panggilanx[angkaPilihanPanggilan] << namaDosen << " " << endl;
            cout << "" << endl;
            cout << "Perkenalkan saya " << namaPanjang << " NIM " << aktx[angkaPilihanAngkatan] << "/";
            cout << NIU << "/TK/" << angka6NIM << " mahasiswa program studi " << prodi[get<int>(angkaPilihanProdi)] << "angkatan 20";
            cout << aktx[angkaPilihanAngkatan] << ". Tujuan saya menghubungi " << panggilanx[angkaPilihanPanggilan] << "adalah ";
            cout << tujuan << ". Mohon maaf mengganggu waktunya dan atas waktunya saya ucapkan terima kasih.";
        } else {
            cout << salamx[angkaPilihanSalam] << panggilanx[angkaPilihanPanggilan] << namaDosen << " " << endl;
            cout << "" << endl;
            cout << "Perkenalkan saya " << namaPanjang << " NIM " << aktx[angkaPilihanAngkatan] << "/";
            cout << NIU << "/TK/" << angka6NIM << " mahasiswa program studi " << get<string>(angkaPilihanProdi) << "angkatan 20";
            cout << aktx[angkaPilihanAngkatan] << ". Tujuan saya menghubungi " << panggilanx[angkaPilihanPanggilan] << "adalah ";
            cout << tujuan << ". Mohon maaf mengganggu waktunya dan atas waktunya saya ucapkan terima kasih.";
        }
        

    } else if (pilihanPerkenalan == 2){
        angkaPilihanSalam = pilihanSalamFunction();

        // Menginput tujuan menghubungi
        cout << "----------------------------------------" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Tujuan menghubungi: " << endl;
        getline(cin, tujuan);

        // Menginput nama panjang
        cout << "----------------------------------------" << endl;
        cout << "Siapa Nama Panjangmu?" << endl;
        getline(cin, namaPanjang);

        angkaPilihanProdi = pilihanProdiFunction();
        angkaPilihanAngkatan = pilihanAngkatanFunction();
        
        // Proses Output
        if (holds_alternative<int>(angkaPilihanProdi)){
            cout << salamx[angkaPilihanSalam] << "kak, mohon maaf mengganggu waktunya.";
            cout << "Perkenalkan saya " << namaPanjang << " dari " << prodi[get<int>(angkaPilihanProdi)] << "angkatan ";
            cout << "20" << aktx[angkaPilihanAngkatan] << ". Tujuan saya menghubungi kakak adalah " << tujuan;
            cout << ". Terimakasih sebelumnya dan mohon maaf jika ada kata-kata yang kurang sopan.";
        } else {
            cout << salamx[angkaPilihanSalam] << "kak, mohon maaf mengganggu waktunya.";
            cout << "Perkenalkan saya " << namaPanjang << " dari " << get<string>(angkaPilihanProdi) << "angkatan ";
            cout << "20" << aktx[angkaPilihanAngkatan] << ". Tujuan saya menghubungi kakak adalah " << tujuan;
            cout << ". Terimakasih sebelumnya dan mohon maaf jika ada kata-kata yang kurang sopan.";
        }

    } else {
        cout << "Tidak ada dalam pilihan, RUN ULANG!" << endl;
    }
}

