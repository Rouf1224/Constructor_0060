#include <iostream>
using namespace std;

class barang
{
public:
  int kodeBarang;
  string namaBarang;

  barang(int, string);
  void cetak ();

};

barang::barang (int kodeBarang, string namaBarang)
{
    kodeBarang = kodeBarang;
    namaBarang = namaBarang;
}

void barang::cetak ()
{
    cout << endl << "kodeBarang = " << kodeBarang << endl;
    cout << "namaBarang = " << namaBarang << endl;

}

int main()
{
    barang UFF(88128, "Ahmad");

    cout << "barang : "; UFF.cetak();
    return 0;
}