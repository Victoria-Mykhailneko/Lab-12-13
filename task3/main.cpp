#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Структура для зберігання даних про студента
struct Student {
    string name;
    int age;
    double grade;
};

int main() {
    int n;
    cout << "Введіть кількість студентів: ";
    cin >> n;

    Student students[100]; // масив структур

    // Введення даних
    for (int i = 0; i < n; i++) {
        cout << "\nСтудент #" << i + 1 << endl;
        cout << "Ім'я: ";
        cin >> students[i].name;
        cout << "Вік: ";
        cin >> students[i].age;
        cout << "Середній бал: ";
        cin >> students[i].grade;
    }

    // Запис у файл
    ofstream fout("results.txt");
    if (!fout) {
        cout << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    fout << "Список студентів:\n";
    for (int i = 0; i < n; i++) {
        fout << "Студент #" << i + 1 << ": "
            << students[i].name << ", "
            << students[i].age << " років, "
            << "середній бал = " << students[i].grade << endl;
    }

    fout.close();
    cout << "\nДані успішно записано у файл results.txt" << endl;
    return 0;
}
