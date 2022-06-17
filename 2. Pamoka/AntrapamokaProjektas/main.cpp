#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("data.txt");
    int a;
    fin >> a;
    char sp;
    int sk;
    int G = 0;
    int Z = 0;
    int R = 0;
    for (int i=0; i<a; i++) {
        fin >> sp >> sk;
        if (sp=='G') {
            G = G + sk;
        }
        else if (sp=='Z') {
            Z = Z + sk;
        }
        else if (sp=='R') {
            R = R + sk;
    }
    }
    cout << G << " " << Z << " " << R << endl;
    int kiekis;
    int maziausias;
    if (G<=Z&&G<=R) {
        maziausias = G;
    }
    if (Z<=G&&Z<=R) {
        maziausias = Z;
    }
    if (R<=G&&R<=Z) {
        maziausias = R;
    }
    kiekis = maziausias/2;

    cout << kiekis << endl;
    ofstream fout("rez.txt");
    fout << G - kiekis*2 << " " << Z - kiekis*2 << " " << R - kiekis*2 << " " << endl;
    fout.close();
    cout << G - kiekis*2 << " " << Z - kiekis*2 << " " << R - kiekis*2 << " " << endl;
    return 0;

}
