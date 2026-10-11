
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "=== DATA MAHASISWA ===\n";
    cout << "Jumlah mahasiswa (maksimal 10): ";
    cin >> n;
    cin.ignore();

    if (n < 1 || n > 10) {
        cout << "Jumlah mahasiswa harus 1 sampai 10!\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;

        cout << "Nama  : ";
        getline(cin, mhs[i].nama);

        cout << "NIM   : ";
        getline(cin, mhs[i].nim);

        cout << "Nilai UTS   : ";
        cin >> mhs[i].uts;

        cout << "Nilai UAS   : ";
        cin >> mhs[i].uas;

        cout << "Nilai Tugas : ";
        cin >> mhs[i].tugas;
        cin.ignore();

        mhs[i].nilaiAkhir =
            0.3f * mhs[i].uts +
            0.4f * mhs[i].uas +
            0.3f * mhs[i].tugas;
    }

    cout << "\n=== HASIL NILAI MAHASISWA ===\n";

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++) {
        cout << "\nNama        : " << mhs[i].nama;
        cout << "\nNIM         : " << mhs[i].nim;
        cout << "\nUTS         : " << mhs[i].uts;
        cout << "\nUAS         : " << mhs[i].uas;
        cout << "\nTugas       : " << mhs[i].tugas;
        cout << "\nNilai Akhir : " << mhs[i].nilaiAkhir;
        cout << "\n";
    }

    return 0;
}
