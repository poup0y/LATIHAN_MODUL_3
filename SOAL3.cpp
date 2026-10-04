#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    cout << "Isi array 2D:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int cariIsiArray(int arr[3][3], int baris, int kolom) {
    if (baris < 0 || baris >= 3 || kolom < 0 || kolom >= 3) {
        return -1;
    }

    return arr[baris][kolom];
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int *p1;
    int *p2;

    tampilArray(arr);

    int baris, kolom;

    cout << "\nMasukkan posisi yang ingin dicari." << endl;
    cout << "Baris (0-2): ";
    cin >> baris;

    cout << "Kolom (0-2): ";
    cin >> kolom;

    int hasil = cariIsiArray(arr, baris, kolom);

    if (hasil == -1) {
        cout << "Posisi tidak valid." << endl;
    } else {
        cout << "Isi array[" << baris << "][" << kolom << "] = "
             << hasil << endl;
    }

    p1 = &arr[0][0];
    p2 = &arr[2][2];

    cout << "\nSebelum ditukar:" << endl;
    cout << "Nilai yang ditunjuk p1 = " << *p1 << endl;
    cout << "Nilai yang ditunjuk p2 = " << *p2 << endl;

    tukarPointer(p1, p2);

    cout << "\nSetelah ditukar:" << endl;
    cout << "Nilai yang ditunjuk p1 = " << *p1 << endl;
    cout << "Nilai yang ditunjuk p2 = " << *p2 << endl;

    cout << "\nArray setelah pertukaran:" << endl;
    tampilArray(arr);

    return 0;
}