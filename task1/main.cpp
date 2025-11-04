#include <iostream>
#include <fstream>
using namespace std;

// Функція для обчислення суми квадратів додатних чисел
int sumOfPositiveSquares(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {             // перевірка, чи число додатне
            sum += arr[i] * arr[i];   // додаємо квадрат числа
        }
    }
    return sum;
}

int main() {
    ifstream fin("number.txt"); // відкриваємо файл для читання
    if (!fin) {
        cout << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    int numbers[10];
    for (int i = 0; i < 10; i++) {
        fin >> numbers[i]; // зчитуємо числа з файлу
    }
    fin.close();

    // Виклик функції
    int result = sumOfPositiveSquares(numbers, 10);

    cout << "Сума квадратів додатних чисел: " << result << endl;
    return 0;
}
