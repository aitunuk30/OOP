//#include <iostream>
//#include <sstream>
//using namespace std;
//
//// �������� ������� power
//double power(double n, int p = 2);
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//
//    while (true) {
//        double base;
//        int exponent;
//
//        // ���� �����
//        cout << "������� ��������� (��� ������ ������� 0): ";
//        cin >> base;
//
//        if (base == 0) {
//            cout << "��������� ���������." << endl;
//            break;  // ����� �� �����
//        }
//
//        // ���� ������ ��� ���������� �������
//        string exponentInput;
//        cout << "������� ���������� ������� (�� ��������� 2): ";
//        cin.ignore(); // ���������� ���������� ������ ����� ������ � ������
//        getline(cin, exponentInput);
//
//        // ��������, ��� ������ �� �����
//        if (!exponentInput.empty()) {
//            // �������������� ������ � �����
//            stringstream ss(exponentInput);
//            ss >> exponent;
//
//            // �������� �� ������������ �����
//            if (ss.fail()) {
//                cerr << "������: ������������ ���� ���������� �������." << endl;
//                return 1;
//            }
//        }
//        else {
//            // ���� ������ �����, ������������ �������� �� ���������
//            exponent = 2;
//        }
//
//        // ����� ������� power � ���������� ����������
//        double result = power(base, exponent);
//
//        // ����� ����������
//        cout << "��������� ���������� � �������: " << result << endl << endl;
//    }
//
//    return 0;
//}
//
//// ����������� ������� power
//double power(double n, int p) {
//    double result = 1.0;  // �������������� ��������� ��������
//
//    // ���� ��� ��������� ����� n ���� �� ���� p ���
//    for (int i = 0; i < p; ++i) {
//        result *= n;
//    }
//
//    return result;
//}



#include <iostream>
using namespace std;

// ������������� ������� power() ��� ������ ����� ������
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

// ������� ������� ���������� � ������� ��� ����� �����
double power_int(double n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}

int main() {
      // ����� ������� power() �� ����� ���������� ������ ����������
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
//// ��������� ��� �������� ���������� � ���������
//struct Employee {
//    string lastName;
//    int age;
//    string specialty;
//    double averageSalary;
//};
//
//// �������� ������ � ������� ��������
//string toLowerCase(string str) {
//    transform(str.begin(), str.end(), str.begin(), ::tolower);
//    return str;
//}
//
//// ������� ��� ����� ���������� �� ������� � �������� �������� � �������
//void processFactories(vector<vector<Employee>>& factories, int& totalLocksmiths, int& totalTurners) {
//    // ���������� �������
//    int numFactories;
//
//    cout << "������� ���������� �������: ";
//    cin >> numFactories;
//
//    // ������������� ���������� � ����� ����������� �������� � �������
//    totalLocksmiths = 0;
//    totalTurners = 0;
//
//    // ���� ���������� �� ������� ������
//    for (int i = 0; i < numFactories; ++i) {
//        int numEmployees;
//
//        cout << "������� ���������� ���������� �� ������ " << i + 1 << ": ";
//        cin >> numEmployees;
//
//        // ������ ��� �������� ���������� � ���������� �� ������� ������
//        vector<Employee> employees;
//
//        // ���� ���������� � ������ ���������
//        for (int j = 0; j < numEmployees; ++j) {
//            Employee employee;
//
//            cout << "������� ������� ��������� " << j + 1 << ": ";
//            cin >> employee.lastName;
//
//            cout << "������� ������� ��������� " << j + 1 << ": ";
//            cin >> employee.age;
//
//            cout << "������� ������������� ��������� " << j + 1 << ": ";
//            cin >> employee.specialty;
//
//            cout << "������� ������� ����� ��������� " << j + 1 << ": ";
//            cin >> employee.averageSalary;
//
//            // �������� ������������� � ������� �������� ����� ����������
//            string lowerSpecialty = toLowerCase(employee.specialty);
//
//            // ������� �������� � �������
//            if (lowerSpecialty == "�������") {
//                totalLocksmiths++;
//            }
//            else if (lowerSpecialty == "������") {
//                totalTurners++;
//            }
//
//            // ���������� ��������� � ������
//            employees.push_back(employee);
//        }
//
//        // ���������� ������� � ����������� � ���������� �� ������� ������
//        factories.push_back(employees);
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    // ������ �������� ��� �������� ���������� � ���������� �� ������ ������
//    vector<vector<Employee>> factories;
//
//    // ����� ���������� �������� � �������
//    int totalLocksmiths, totalTurners;
//
//    // ����� ������� ��� ����� ���������� �� ������� � �������� �������� � �������
//    processFactories(factories, totalLocksmiths, totalTurners);
//
//    // ����� �����������
//    cout << "����� ���������� ��������: " << totalLocksmiths << endl;
//    cout << "����� ���������� �������: " << totalTurners << endl;
//
//    return 0;
//}



