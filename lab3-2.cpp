#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    int l;
    int i;
    int j;
    int k;
    cout << "n = ";
    cin >> n;
    cout << "\n";
    cout << "m = ";
    cin >> m;
    cout << "\n";
    cout << "l = ";
    cin >> l;
    cout << "\n";
    int **mas1;
    int **mas2;
    int **mas3;
    mas1 = new int *[n];
    for (i = 0; i < n; ++i)
        mas1[i] = new int[m];
    mas2 = new int *[m];
    for (i = 0; i < m; ++i)
        mas2[i] = new int[l];
    mas3 = new int *[n];
    for (i = 0; i < n; ++i)
        mas3[i] = new int[l];
    cout << "A = " << endl;
    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j)
            mas1[i][j] = rand() % 100;
    for (i = 0; i < n; cout << endl, ++i)
        for (j = 0; j < m; ++j)
            cout << mas1[i][j] << "\t";
    cout << "\n";
    cout << "B = " << endl;
    for (i = 0; i < m; ++i)
        for (j = 0; j < l; ++j)
            mas2[i][j] = rand() % 100;
    for (i = 0; i < m; cout << endl, ++i)
        for (j = 0; j < l; ++j)
            cout << mas2[i][j] << "\t";
    for (i = 0; i < n; ++i)
        for (j = 0; j < l; ++j)
            for (mas3[i][j] = 0, k = 0; k < m; ++k)
                mas3[i][j] += mas1[i][k] * mas2[k][j];
    cout << "\n";
    cout << "C = " << endl;
    for (i = 0; i < n; cout << endl, ++i)
        for (j = 0; j < l; ++j)
            cout << mas3[i][j] << "\t";
    for (i = 0; i < n; ++i)
        delete[] mas1[i];
    delete[] mas1;
    for (i = 0; i < m; ++i)
        delete[] mas2[i];
    delete[] mas2;
    for (i = 0; i < n; ++i)
        delete[] mas3[i];
    delete[] mas3;
    return 0;
}