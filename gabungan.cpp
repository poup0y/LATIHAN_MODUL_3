
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ================= SOAL 1 =================
struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilaiAkhir;
};

void soal1() {
    Mahasiswa mhs[10];
    int n;

    cout << "\n=== SOAL 1: DATA MAHASISWA ===\n";
    cout << "Jumlah mahasiswa (1-10): ";
    cin >> n;
    cin.ignore();

    if (n < 1 || n > 10) {
        cout << "Jumlah harus 1 sampai 10!\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;

        cout << "Nama: ";
        getline(cin, mhs[i].nama);

        cout << "NIM: ";
        getline(cin, mhs[i].nim);

        cout << "Nilai UTS: ";
        cin >> mhs[i].uts;

        cout << "Nilai UAS: ";
        cin >> mhs[i].uas;

        cout << "Nilai Tugas: ";
        cin >> mhs[i].tugas;
        cin.ignore();

        mhs[i].nilaiAkhir =
            0.3f * mhs[i].uts +
            0.4f * mhs[i].uas +
            0.3f * mhs[i].tugas;
    }

    cout << fixed << setprecision(2);
    cout << "\n=== HASIL NILAI ===\n";

    for (int i = 0; i < n; i++) {
        cout << "\nNama: " << mhs[i].nama << endl;
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "UTS: " << mhs[i].uts << endl;
        cout << "UAS: " << mhs[i].uas << endl;
        cout << "Tugas: " << mhs[i].tugas << endl;
        cout << "Nilai Akhir: "
             << mhs[i].nilaiAkhir << endl;
    }
}

// ================= SOAL 2 =================
struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string namapel,
                           string kodepel) {
    pelajaran pel;
    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : "
         << pel.namaMapel << endl;
    cout << "nilai : "
         << pel.kodeMapel << endl;
}

void soal2() {
    cout << "\n=== SOAL 2: ADT PELAJARAN ===\n";

    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel =
        create_pelajaran(namapel, kodepel);

    tampil_pelajaran(pel);
}

// ================= SOAL 3 =================
void tampilkanArray(int arr[3][3],
                    const string& nama) {
    cout << "\nIsi " << nama << ":\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarPosisi(int arr1[3][3],
                 int arr2[3][3],
                 int baris, int kolom) {
    int sementara = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = sementara;
}

void soal3() {
    cout << "\n=== SOAL 3: ARRAY 2D DAN POINTER ===\n";

    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int* p1 = &A[0][0];
    int* p2 = &B[0][0];

    cout << "Pointer p1: " << *p1 << endl;
    cout << "Pointer p2: " << *p2 << endl;

    tampilkanArray(A, "Array A");
    tampilkanArray(B, "Array B");

    int baris, kolom;

    cout << "\nIndeks baris (0-2): ";
    cin >> baris;

    cout << "Indeks kolom (0-2): ";
    cin >> kolom;

    if (baris < 0 || baris > 2 ||
        kolom < 0 || kolom > 2) {
        cout << "Indeks tidak valid!\n";
        return;
    }

    tukarPosisi(A, B, baris, kolom);

    cout << "\nSetelah pertukaran:";
    tampilkanArray(A, "Array A");
    tampilkanArray(B, "Array B");
}

// ================= PROGRAM UTAMA =================
int main() {
    int pilihan;

    do {
        cout << "\n===== MENU LATIHAN STRUKTUR DATA =====\n";
        cout << "1. Soal 1 - Data Mahasiswa\n";
        cout << "2. Soal 2 - ADT Pelajaran\n";
        cout << "3. Soal 3 - Array 2D dan Pointer\n";
        cout << "0. Keluar\n";
        cout << "Pilih soal: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                soal1();
                break;
            case 2:
                soal2();
                break;
            case 3:
                soal3();
                break;
            case 0:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak tersedia!\n";
        }

    } while (pilihan != 0);

    return 0;
}
