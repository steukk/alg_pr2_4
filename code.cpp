#include <iostream>
using namespace std;

int sumDigits(int n) {
    // Базовый случай: если число меньше 10, возвращаем само число
    if (n < 10) {
        return n;
    }
    // Рекурсивный случай: последняя цифра + сумма цифр оставшейся части
    return n % 10 + sumDigits(n / 10);
}

int main() {
    cout << sumDigits(1236) << endl;  
    cout << sumDigits(9745) << endl;  
    cout << sumDigits(0) << endl;     
    return 0;
}

// Вывод программы:
// 12
// 25
// 0
