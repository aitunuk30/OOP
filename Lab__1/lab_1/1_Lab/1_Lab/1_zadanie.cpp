//#include <iostream>
//#include <sstream>
//using namespace std;
//
//// Прототип функции power
//double power(double n, int p = 2);
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//
//    while (true) {
//        double base;
//        int exponent;
//
//        // Ввод числа
//        cout << "Введите основание (для выхода введите 0): ";
//        cin >> base;
//
//        if (base == 0) {
//            cout << "Программа завершена." << endl;
//            break;  // Выход из цикла
//        }
//
//        // Ввод строки для показателя степени
//        string exponentInput;
//        cout << "Введите показатель степени (по умолчанию 2): ";
//        cin.ignore(); // Игнорируем оставшийся символ новой строки в буфере
//        getline(cin, exponentInput);
//
//        // Проверка, что строка не пуста
//        if (!exponentInput.empty()) {
//            // Преобразование строки в число
//            stringstream ss(exponentInput);
//            ss >> exponent;
//
//            // Проверка на корректность ввода
//            if (ss.fail()) {
//                cerr << "Ошибка: Некорректный ввод показателя степени." << endl;
//                return 1;
//            }
//        }
//        else {
//            // Если строка пуста, использовать значение по умолчанию
//            exponent = 2;
//        }
//
//        // Вызов функции power с введенными значениями
//        double result = power(base, exponent);
//
//        // Вывод результата
//        cout << "Результат возведения в степень: " << result << endl << endl;
//    }
//
//    return 0;
//}
//
//// Определение функции power
//double power(double n, int p) {
//    double result = 1.0;  // Инициализируем результат единицей
//
//    // Цикл для умножения числа n само на себя p раз
//    for (int i = 0; i < p; ++i) {
//        result *= n;
//    }
//
//    return result;
//}



#include <iostream>
using namespace std;

// Перегруженные функции power() для разных типов данных
double power(double n, int p = 2) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}

double power(char n, int p = 2) {
    return power(static_cast<double>(n), p);
}

double power(short int n, int p = 2) {
    return power(static_cast<double>(n), p);
}

double power(long int n, int p = 2) {
    return power(static_cast<double>(n), p);
}

double power(float n, int p = 2) {
    return power(static_cast<double>(n), p);
}

// Простая функция возведения в степень для целых чисел
double power_int(double n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}

int main() {
      // Вызов функции power() со всеми возможными типами аргументов
    cout << "double: " << power(2.5) << endl;
    cout << "char: " << power('A') << endl;
    cout << "short int: " << power(static_cast<short int>(5)) << endl;
    cout << "long int: " << power(static_cast<long int>(10)) << endl;
    cout << "float: " << power(3.14f) << endl;

    return 0;
}

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// Структура для хранения информации о работнике
//struct Employee {
//    string lastName;
//    int age;
//    string specialty;
//    double averageSalary;
//};
//
//// Привести строку к нижнему регистру
//string toLowerCase(string str) {
//    transform(str.begin(), str.end(), str.begin(), ::tolower);
//    return str;
//}
//
//// Функция для ввода информации по заводам и подсчета слесарей и токарей
//void processFactories(vector<vector<Employee>>& factories, int& totalLocksmiths, int& totalTurners) {
//    // Количество заводов
//    int numFactories;
//
//    cout << "Введите количество заводов: ";
//    cin >> numFactories;
//
//    // Инициализация переменных с общим количеством слесарей и токарей
//    totalLocksmiths = 0;
//    totalTurners = 0;
//
//    // Ввод информации по каждому заводу
//    for (int i = 0; i < numFactories; ++i) {
//        int numEmployees;
//
//        cout << "Введите количество работников на заводе " << i + 1 << ": ";
//        cin >> numEmployees;
//
//        // Вектор для хранения информации о работниках на текущем заводе
//        vector<Employee> employees;
//
//        // Ввод информации о каждом работнике
//        for (int j = 0; j < numEmployees; ++j) {
//            Employee employee;
//
//            cout << "Введите фамилию работника " << j + 1 << ": ";
//            cin >> employee.lastName;
//
//            cout << "Введите возраст работника " << j + 1 << ": ";
//            cin >> employee.age;
//
//            cout << "Введите специальность работника " << j + 1 << ": ";
//            cin >> employee.specialty;
//
//            cout << "Введите средний оклад работника " << j + 1 << ": ";
//            cin >> employee.averageSalary;
//
//            // Привести специальность к нижнему регистру перед сравнением
//            string lowerSpecialty = toLowerCase(employee.specialty);
//
//            // Подсчет слесарей и токарей
//            if (lowerSpecialty == "слесарь") {
//                totalLocksmiths++;
//            }
//            else if (lowerSpecialty == "токарь") {
//                totalTurners++;
//            }
//
//            // Добавление работника в вектор
//            employees.push_back(employee);
//        }
//
//        // Добавление вектора с информацией о работниках на текущем заводе
//        factories.push_back(employees);
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    // Вектор векторов для хранения информации о работниках на каждом заводе
//    vector<vector<Employee>> factories;
//
//    // Общее количество слесарей и токарей
//    int totalLocksmiths, totalTurners;
//
//    // Вызов функции для ввода информации по заводам и подсчета слесарей и токарей
//    processFactories(factories, totalLocksmiths, totalTurners);
//
//    // Вывод результатов
//    cout << "Общее количество слесарей: " << totalLocksmiths << endl;
//    cout << "Общее количество токарей: " << totalTurners << endl;
//
//    return 0;
//}



