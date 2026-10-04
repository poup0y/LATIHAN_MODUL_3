#include <iostream>
#include "pelajaran.h"

using namespace std;

pelajaran create_pelajaran(string namaMapel, string kodeMapel) {
    pelajaran pel;

    pel.namaMapel = namaMapel;
    pel.kodeMapel = kodeMapel;

    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}