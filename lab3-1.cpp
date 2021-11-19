#include <iostream>
using namespace std;
int main() {
    int i, n;
    double sr, sum;
    cout << "Введите кол-во элементов массива= ";
    cin >> n;
    double *mas;
    mas = new double[n];
    for (int i = 0; i < n; ++i) {
        mas[i] = (rand() % 1000) / 10;
        sum += mas[i];
    }
    delete[] mas;
    sr = sum / n;
    cout << "Среднее арифметическое элементов массива= " << sr;
    return 0;
}