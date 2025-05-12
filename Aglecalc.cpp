#include <iostream>
#include <cmath>

using namespace std;

const double g = 9.81; 

int main() {

    double V, T;
 
    cout << "Введите начальную скорость V (м/с): ";
    cin >> V;
    cout << "Введите время полета T (с): ";
    cin >> T;
 
    if (V <= 0) {
        cerr << "Начальная скорость должна быть положительной." << endl;
        return 1;
    }
    if (T <= 0) {
        cerr << "Время полета должно быть положительным." << endl;
        return 1;
    }

    double alpha = asin((g * T) / (2 * V));
 
    double alpha_degrees = alpha * (180.0 / M_PI);

    if (isnan(alpha)) {
        cerr << "Ошибка: значения не позволяют вычислить угол." << endl;
    } else {
        cout << "Угол: " << alpha_degrees << " градусов" << endl;
    }

    return 0;
}