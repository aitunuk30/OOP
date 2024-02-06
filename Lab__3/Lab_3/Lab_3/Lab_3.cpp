//#include <iostream>
//#include <iomanip> 
//#include <time.h>
//#include <string>
//#include <stdio.h>
//
//using namespace std;
//
//class Timer
//{
//private:
//    int minutes;
//    int seconds;
//
//public:
//    void run()
//    {
//        clock_t t1, t2;
//        t1 = t2 = clock() / CLK_TCK;
//        while (minutes || seconds) {
//            if (t1 / CLK_TCK + 1 <= (t2 = clock()) / CLK_TCK) {
//                cout << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << endl;
//                if (seconds == 0) {
//                    minutes--;
//                    seconds = 59;
//                }
//                else {
//                    seconds--;
//                }
//                t1 = t2;
//            }
//        }
//        cout << "Мелодия \a" << endl; // звонок
//    }
//
//    Timer() // конструктор по умолчанию 
//    {
//        minutes = 0;
//        seconds = 3;
//    }
//
//    Timer(int second) { // конструктор для целочисленных данных 
//        minutes = 0;
//        seconds = second;
//    }
//
//    Timer(const char* second) {  // конструктор для символьных данных 
//        minutes = 0;
//        seconds = stoi(second);
//    }
//
//    Timer(int minute, int second) {        // конструктор для двух аргументов, в мин и сек. 
//        minutes = minute;
//        seconds = second;
//    }
//};
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//
//    Timer TimerDefault;
//    TimerDefault.run();
//    cout << "по умолчанию" << endl;
//
//    Timer TimerChar("4");
//    TimerChar.run();
//    cout << "символьный" << endl;
//
//    Timer TimerSecond(5);
//    TimerSecond.run();
//    cout << "секунды" << endl;
//
//    Timer TimerMin(1, 10);
//    TimerMin.run();
//    cout << "минуты и секунды" << endl << endl;
//
//    cout << "Кол-во секунд с момента запуска программы -" << clock() / CLK_TCK << endl;
//    system("pause");
//    return 0;
//}


//#include <iostream>
//#include <iomanip>
//#include <cstdlib>
//#include <Windows.h>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Nomenclature {
//private:
//    string nameProduct;
//    int whosalePrice;
//    int retailPrice;
//    int countOfProduct;
//
//public:
//    Nomenclature() {}
//
//    Nomenclature(const string& nameProduct, int whosalePrice, int retailPrice, int countOfProduct)
//        : nameProduct(nameProduct), whosalePrice(whosalePrice), retailPrice(retailPrice), countOfProduct(countOfProduct) {}
//
//    ~Nomenclature() {} // деструктор
//
//    int getCountProfit() const {
//        int outlay = countOfProduct * whosalePrice;
//        int profit = ((whosalePrice + retailPrice) * countOfProduct) - outlay;
//        return profit;
//    }
//
//    void setNameProduct(const string& name) {
//        this->nameProduct = name;
//    }
//
//    string getNameProduct() const {
//        return nameProduct;
//    }
//
//    void setWhosalePrice(int whosalePrice) {
//        this->whosalePrice = whosalePrice;
//    }
//
//    int getWhosalePrice() const {
//        return whosalePrice;
//    }
//
//    void setRetailPrice(int retailPrice) {
//        this->retailPrice = retailPrice;
//    }
//
//    int getRetailPrice() const {
//        return retailPrice;
//    }
//
//    void setCountOfProduct(int countOfProduct) {
//        this->countOfProduct = countOfProduct;
//    }
//
//    int getCountOfProduct() const {
//        return countOfProduct;
//    }
//};
//
//void readProduct(Nomenclature& product) {
//    string name;
//    int whosalePrice, retailPrice, countOfProduct;
//
//    cout << "Введите название товара - ";
//    cin >> name;
//    product.setNameProduct(name);
//
//    cout << "Введите оптовую цену - ";
//    cin >> whosalePrice;
//    product.setWhosalePrice(whosalePrice);
//
//    cout << "Введите розничную наценку - ";
//    cin >> retailPrice;
//    product.setRetailPrice(retailPrice);
//
//    cout << "Введите кол-во товара - ";
//    cin >> countOfProduct;
//    product.setCountOfProduct(countOfProduct);
//}
//
//void printProduct(const Nomenclature& product) {
//    cout << std::setw(22) << std::left << product.getNameProduct()
//        << setw(15) << product.getWhosalePrice()
//        << setw(15) << product.getRetailPrice()
//        << setw(15) << product.getCountOfProduct()
//        << setw(15) << product.getCountProfit() << endl;
//}
//
//Nomenclature* findByProductName(vector<Nomenclature>& arr, const string& productName) {
//    for (int i = 0; i < arr.size(); i++) {
//        if (arr[i].getNameProduct() == productName) {
//            return &arr[i];
//        }
//    }
//    return NULL;
//}
//
//void addProduct(vector<Nomenclature>& arr) {
//    Nomenclature product;
//    readProduct(product);
//    arr.push_back(product);
//}
//
//void delProduct(vector<Nomenclature>& arr, const string& productName) {
//    for (auto it = arr.begin(); it != arr.end(); ++it) {
//        if (it->getNameProduct() == productName) {
//            arr.erase(it);
//            break;
//        }
//    }
//}
//
//void menu() {
//    cout << "Выберите вариант:\n" << endl;
//    cout << "1. Вывести все товары\n"
//        << "2. Добавить новый товар\n"
//        << "3. Удалить товар\n"
//        << "8. Выход\n" << endl;
//    cout << ">>> ";
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    vector<Nomenclature> products;
//
//    int variant = 0;
//
//    menu();
//    cin >> variant;
//    do {
//        if (variant == 1) {
//            cout << std::setw(22) << std::left << "Название товара"
//                << std::setw(15) << "Оптовая цена"
//                << std::setw(15) << "Наценка"
//                << std::setw(15) << "Кол-во товара"
//                << std::setw(15) << "Прибыль" << endl;
//
//            for (int i = 0; i < products.size(); i++) {
//                printProduct(products[i]);
//            }
//            cout << endl << endl;
//            menu();
//            cin >> variant;
//        }
//        else if (variant == 2) {
//            cout << "Добавляем товар..." << endl;
//            addProduct(products);
//            cout << "________________________" << endl;
//            cout << "Товар добавлен." << endl;
//            cout << endl << endl;
//            menu();
//            cin >> variant;
//        }
//        else if (variant == 3) {
//            cout << "Удаляем товар..." << endl;
//            string productName;
//            cout << "Введите название товара для удаления - ";
//            cin >> productName;
//            delProduct(products, productName);
//            cout << "________________________" << endl;
//            cout << "Товар удален." << endl;
//            cout << endl << endl;
//            menu();
//            cin >> variant;
//        }
//        else if (variant == 8) {
//            cout << "Выход из программы..." << endl;
//            exit(EXIT_SUCCESS);
//        }
//        else {
//            cout << "Неверный вариант. Пожалуйста, выберите снова." << endl;
//            menu();
//            cin >> variant;
//        }
//    } while (variant != 8);
//
//    return 0;
//}

#include<iostream>
#include<iomanip>
using namespace std;

class Soft {
	string name_prog;
	string name_razrab;
	string memory;

	int day_lic;
	int month_lic;
	int year_lic;

public:

	Soft() : name_prog("0"), name_razrab("0"), memory("0"), day_lic(0), month_lic(0), year_lic(0)
	{
	}

	~Soft()
	{
	}

	void set(Soft* arr, int& kol) {
		for (int i = 0; i < kol; i++) {
			cout << "\nЗаполните информацию по программе №" << i + 1 << ":" << endl;
			cout << "Название программы: ";
			cin >> arr[i].name_prog;
			cout << "Наименование разработчика: ";
			cin >> arr[i].name_razrab;
			cout << "Объём памяти: ";
			cin >> arr[i].memory;
			cout << "Дата окончания лиценции (вводится через пробелы, по типу DD_MM_YYYY): ";
			cin >> arr[i].day_lic >> arr[i].month_lic >> arr[i].year_lic;
		}
	}

	void print(Soft* arr, int& kol) {
		cout << "\n[Информация по программам]\n" << endl;
		cout << setiosflags(ios::left) << setw(25) << "[Название программы]" << setw(20) << "[Разработчик]" << setw(25) << "[Занимаемая память]" << setw(25) << "[Дата конца лицении]" << endl << endl;
		for (int i = 0; i < kol; i++) {
			cout << setiosflags(ios::left) << setw(26) << arr[i].name_prog << setw(20) << arr[i].name_razrab << setw(25) << arr[i].memory << setw(3) << arr[i].day_lic << setw(3) << arr[i].month_lic << setw(7) << arr[i].year_lic << endl << endl;
		}
	}

	void lic(Soft* arr, int& kol) {
		int today_day, today_month, today_year, licen_day, licen_month, licen_year;
		cout << "\n[Информация по количеству дней оставшейся лицензии]\n" << endl;
		cout << "\nВведите сегодняшнюю дату (через пробелы, по типу: DD MM YYYY): ";
		cin >> today_day >> today_month >> today_year;
		cout << "\n[Подсчёт оставшихся дней лицензии]\n" << endl;
		cout << setiosflags(ios::left) << setw(25) << "Название программы:" << setw(40) << "Лицензия (осталось времени):" << endl;
		for (int i = 0; i < kol; i++) {
			licen_year = arr[i].year_lic - today_year;
			licen_month = arr[i].month_lic - today_month;
			licen_day = arr[i].day_lic - today_day;

			if (licen_day < 0) {
				licen_month--;
				licen_day += 30; // Предполагаем, что в месяце 30 дней
			}
			if (licen_month < 0) {
				licen_year--;
				licen_month += 12; // В году 12 месяцев
			}

			if (licen_year < 0) {
				cout << setiosflags(ios::left) << setw(25) << arr[i].name_prog << "Лицензия закончилась!" << endl;
			}
			else {
				cout << setiosflags(ios::left) << setw(25) << arr[i].name_prog
					<< licen_day << " дней "
					<< licen_month << " месяцев "
					<< licen_year << " лет" << endl;
	

			}
		}
	}
	};


	int main() {
		setlocale(LC_ALL, "rus");
		Soft prog;
		int kol;
		cout << "\nВведите количество программ: ";
	metka:cin >> kol;
		if (!cin) {
			cin.clear();
			cin.ignore();
			cout << "\nПроверьте ввод!\n";
			goto metka;
		}

		Soft* arr = new Soft[kol];
		prog.set(arr, kol);
		prog.print(arr, kol);
		prog.lic(arr, kol);
		delete[] arr;
		system("pause");
		return 0;
	}
