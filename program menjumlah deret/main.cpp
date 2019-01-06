#include <iostream>

using namespace std;

int main()
{
    cout << "  Program Jumlah Deret  " << endl;
    cout << "=================" << endl;
    int a=1,b,hasil,deret;
    cout << "Masukan jumlah deret: "; cin >> deret;
    cout << endl << endl;
    cout << "Deretnya: " << a << " , ";
    hasil = a;
    for (int c=1; c<deret; c++)
    {
        b=a+4; a=b;
        cout << a << " , ";
        hasil=hasil+a;
    }
    cout << endl << endl << "Jumlah deretnya: " << hasil;
    cin.get();
    return 0;
}
