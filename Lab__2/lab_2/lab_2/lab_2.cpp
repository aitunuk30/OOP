﻿//1 задание
//
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <algorithm>
//#include <clocale>
// #include <windows.h>
//using namespace std;
//
//class Aeroflot {
//public:
//    int flightNumber;
//    string departureCity;
//    string destinationCity;
//    string arrivalTime;
//    string departureTime;
//    int registrationSection;
//
//    Aeroflot(int number, const string& departure, const string& destination,
//        const string& arrival, const string& departureTime, int registrationSection)
//        : flightNumber(number), departureCity(departure), destinationCity(destination),
//        arrivalTime(arrival), departureTime(departureTime), registrationSection(registrationSection) {}
//
//    
//    void displayFlightInfo() const {
//        cout << setw(6) << flightNumber << setw(15) << departureCity << setw(15) << destinationCity
//            << setw(15) << arrivalTime << setw(15) << departureTime << setw(15) << registrationSection << endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    vector<Aeroflot> flights;
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    int numberOfFlights;
//
//    cout << "Введите количество рейсов: ";
//    cin >> numberOfFlights;
//
//    for (int i = 0; i < numberOfFlights; ++i) {
//        int number, regSection;
//        string departure, destination, arrival, departureTime;
//
//        cout << "Введите номер рейса: ";
//        cin >> number;
//
//        cout << "Введите пункт отправления: ";
//        cin >> departure;
//
//        cout << "Введите пункт назначения: ";
//        cin >> destination;
//
//        cout << "Введите время прибытия: ";
//        cin >> arrival;
//
//        cout << "Введите время отправления: ";
//        cin >> departureTime;
//
//        cout << "Введите номер секции для регистрации: ";
//        cin >> regSection;
//
//        flights.emplace_back(number, departure, destination, arrival, departureTime, regSection);
//    }
//
//    
//    sort(flights.begin(), flights.end(), [](const Aeroflot& a, const Aeroflot& b) {
//        if (a.departureCity != b.departureCity) {
//            return a.departureCity < b.departureCity;
//        }
//        return a.destinationCity < b.destinationCity;
//        });
//
//
//
//  
//    cout << "\nСписок рейсов:\n";
//    cout << setw(6) << "Номер" << setw(15) << "Отправление" << setw(15) << "Назначение"
//        << setw(15) << "Прибытие" << setw(15) << "Отправление" << setw(15) << "Регистрация\n";
//
//    if (!flights.empty()) {
//        for (const auto& flight : flights) {
//            flight.displayFlightInfo();
//        }
//    }
//    else {
//        cout << "Нет доступных рейсов.\n";
//    }
//
//    return 0;
//}

 ///2 задание/
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <windows.h>
//using namespace std;
//
//class Student {
//public:
//    string lastName;
//    string dateOfBirth;
//    string phoneNumber;
//
//    Student(const string& last, const string& dob, const string& phone)
//        : lastName(last), dateOfBirth(dob), phoneNumber(phone) {}
//
//    void displayInfo() const {
//        cout << "Фамилия: " << lastName << "\n";
//        cout << "Дата рождения: " << dateOfBirth << "\n";
//        cout << "Телефон: " << phoneNumber << "\n";
//    }
//};
//
//class StudentGroup {
//private:
//    vector<Student> students;
//
//public:
//    void addStudent(const string& lastName, const string& dateOfBirth, const string& phoneNumber) {
//        students.emplace_back(lastName, dateOfBirth, phoneNumber);
//    }
//
//    void removeStudent(const string& lastName) {
//        students.erase(remove_if(students.begin(), students.end(),
//            [&](const Student& student) { return student.lastName == lastName; }),
//            students.end());
//    }
//
//    Student* findStudentByLastName(const string& lastName) {
//        auto it = find_if(students.begin(), students.end(),
//            [&](const Student& student) { return student.lastName == lastName; });
//
//        return (it != students.end()) ? &(*it) : nullptr;
//    }
//
//    void sortStudentsByLastName() {
//        sort(students.begin(), students.end(),
//            [](const Student& a, const Student& b) { return a.lastName < b.lastName; });
//    }
//
//    void displayAllStudents() const {
//        if (students.empty()) {
//            cout << "Группа пуста." << endl;
//        }
//        else {
//            cout << "Список студентов:\n";
//            for (const auto& student : students) {
//                student.displayInfo();
//                cout << "\n";
//            }
//        }
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    StudentGroup group;
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    int choice;
//    do {
//        cout << "\nМеню:\n";
//        cout << "1. Добавить студента\n";
//        cout << "2. Удалить студента\n";
//        cout << "3. Найти студента по фамилии\n";
//        cout << "4. Сортировать студентов по фамилии\n";
//        cout << "5. Показать всех студентов\n";
//        cout << "0. Выйти\n";
//        cout << "Выберите действие: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            string lastName, dateOfBirth, phoneNumber;
//            cout << "Введите фамилию: ";
//            cin >> lastName;
//            cout << "Введите дату рождения: ";
//            cin >> dateOfBirth;
//            cout << "Введите номер телефона: ";
//            cin >> phoneNumber;
//            group.addStudent(lastName, dateOfBirth, phoneNumber);
//            break;
//        }
//        case 2: {
//            string lastName;
//            cout << "Введите фамилию студента, которого нужно удалить: ";
//            cin >> lastName;
//            group.removeStudent(lastName);
//            break;
//        }
//        case 3: {
//            string lastName;
//            cout << "Введите фамилию студента, которого нужно найти: ";
//            cin >> lastName;
//            Student* foundStudent = group.findStudentByLastName(lastName);
//            if (foundStudent) {
//                cout << "Студент найден:\n";
//                foundStudent->displayInfo();
//            }
//            else {
//                cout << "Студент не найден.\n";
//            }
//            break;
//        }
//        case 4:
//            group.sortStudentsByLastName();
//            cout << "Студенты отсортированы по фамилии.\n";
//            break;
//        case 5:
//            group.displayAllStudents();
//            break;
//        case 0:
//            cout << "Программа завершена.\n";
//            break;
//        default:
//            cout << "Неверный ввод. Повторите попытку.\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}

//3 задание

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include<stack>
using namespace std;

class STACK {
private:
	stack <int>myStack1;
	stack <int>myStack2;
	stack <int>myStack3;
	stack <int>myStack4;
public:
	void input(int a) {
		myStack1.push(a);
		myStack2 = myStack1;
	}

	void raz(int n) {
		if (myStack1.empty()) {
			cout << "Нет данных!" << endl;
		}
		else {
			for (int i = 0; i < n; i++) {
				if (myStack1.top() % 2 == 0) {
					myStack3.push(myStack1.top());
					myStack1.pop();
				}
				else {
					myStack4.push(myStack1.top());
					myStack1.pop();
				}
			}
			cout << "Деление завершено!" << endl;
		}
	}

	void file_Show() {
		ifstream fin;
		fin.open("file2.txt");
		if (!fin.is_open()) {
			cout << "Файл не открылся! " << endl;
		}
		else {
			int a;
			while (fin >> a) {
				myStack1.push(a);
			}
			myStack2 = myStack1;
		}
		fin.close();
		cout << "Данные считаны из файла!!" << endl;
	}

	void Show() {

		myStack2 = myStack1;
		if (!myStack2.empty()) {
			while (!myStack2.empty()) {
				cout << myStack2.top() << endl;
				myStack2.pop();
			}
		}
		else {
			cout << "Стек пуст!" << endl;
		}
	}
	void chetn() {
		myStack2 = myStack3;

		if (!myStack2.empty()) {
			while (!myStack2.empty()) {
				cout << myStack2.top() << endl;
				myStack2.pop();
			}
		}
		else {
			cout << "Нет таких вагонов!" << endl;
		}
	}
	void ne_chetn() {
		myStack2 = myStack4;
		if (!myStack2.empty()) {
			while (!myStack2.empty()) {
				cout << myStack2.top() << endl;
				myStack2.pop();
			}
		}
		else {
			cout << "Нет таких вагонов!" << endl;
		}
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int col = 0, zn = 0;
	int val = 0;
	cout << "Введите количество вагонов: ";
	cin >> col;
	ofstream fout;
	STACK obj;
	fout.open("file2.txt");
	if (!fout.is_open()) {
		cout << "Файл не открылся!" << endl;
	}
	else {
		for (int i = 0; i < col; i++) {
			fout << rand() % 20 << endl;
		}
	}
	fout.close();
	while (val != 6)
	{
		system("CLS");
		cout << "\tМеню" << endl;
		cout << "0) Ввод данных вагонов" << "\n1) Формирование состава из файла" << "\n2) Вывод " << "\n3) Разделить вагоны" << "\n4) Вывод четных вагонов" << "\n5) Вывод нечетных вагонов" << "\n6) Выход" << endl;
		cout << endl << "Выберите из меню: ";
		cin >> val;
		if (val == 0) {
			system("CLS");
			cout << "Введите номера вагонов (int): " << endl;
			for (int i = 0; i < col; i++) {
				cin >> zn;
				obj.input(zn);
			}
			cout << endl << "Данные записаны!" << endl << endl;
			system("pause");
		}
		else if (val == 1) {
			system("CLS");
			obj.file_Show();
			system("pause");
		}
		else if (val == 2) {
			system("CLS");
			cout << "\tВсе вагоны: " << endl << endl;
			obj.Show();
			system("pause");
		}
		else if (val == 3) {
			system("CLS");
			obj.raz(col);
			system("pause");
		}
		else if (val == 4) {
			system("CLS");
			cout << "\tВагоны  с четными номерами: " << endl << endl;
			obj.chetn();
			system("pause");
		}
		else if (val == 5) {
			system("CLS");
			cout << "\tВагоны  с нечетными номерами: " << endl << endl;
			obj.ne_chetn();
			system("pause");
		}
	}
	cout << "До свидания!" << endl;
}
