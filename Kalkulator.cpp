#include <iostream>
using namespace std;

int main(int arg, char * argv[])
{
 int a,b,c,d,e,f,pilih;
 char jawab;
input :
	cout<<"\t===== Program Kalkulator Sederhana ====="<<endl;
	cout<<"\t            M.DWIKI RAMADANI"<<endl<<endl;
 cout << "Masukkan Nilai Pertama : ";
 cin >> a ;
 cout << "Masukkan Nilai Kedua : ";
 cin >> b ;

 cout << "Pilihlah operasi yang akan dipilih : " << endl;
 cout << "1. Penjumlahan" << endl;
 cout << "2. Pengurangan" << endl;
 cout << "3. Perkalian  " << endl;
 cout << "4. Pembagian" << endl;

 cout << "Masukkan Pilihan = ";
 cin >> pilih ;
 if ( pilih == 1 )
 {
      c=a+b;
      cout << "Nilai Penjumlahan = " << c << endl;
      }
 if ( pilih == 2)
 {
      d=a-b;
      cout << "Nilai Pengurangna = " << d << endl;
      }
 if ( pilih == 3)
 {
      e=a*b;
      cout << "Nilai Perkalian = " << e << endl;
      }
 if ( pilih == 4 )
 {
      f=a/b;
      cout << "Nilai pembagian = " << f << endl;
      }

 return 0;
}
