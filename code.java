public class DigitSum {
    public static int sumDigits(int n) {
        // Обработка отрицательных чисел
        if (n < 0) {
            return sumDigits(-n);
        }
        // Базовый случай рекурсии
        if (n < 10) {
            return n;
        }
        // Рекурсивный случай
        return n % 10 + sumDigits(n / 10);
    }
    
    public static void main(String[] args) {
        // Пример использования
        System.out.println(sumDigits(1234));  
        System.out.println(sumDigits(-456));  
    }
}

// Вывод программы:
// 10
// 15
