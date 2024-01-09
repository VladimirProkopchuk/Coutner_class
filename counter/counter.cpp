#include <iostream>
#include <string>


using namespace std;

class counter {
private: 
	int number;
public:
	counter(int n) {
		number = n ;
	}
	void ravno() {
		cout << number << endl;
	}
    void plus() {
        number++;
    }
    void minus() {
        number--;
    }
};

int main() {
    system("chcp 1251>nul");
    string answer; int n = 1;
    string yes = "да";
    std::cout << "Вы хотите указать начальное значение счётчика?";
    cin >> answer;
    if (answer == yes) {
        
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> n;
      
    }
    counter create(n);
    char count;
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> count;
        if (count == '+') {
            create.plus();
        }
        else if (count == '-') {
            create.minus();
        }
        else if (count == '=') {
            create.ravno();
        }
    } while (count != 'x'); {

    }
}
