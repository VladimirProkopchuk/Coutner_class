#include <iostream>
#include <string>

using namespace std;


class counter {
private:
    int number = 1 ;
public:
    int getNumber(int value) {
        return number;
    }
    void setNumber(int value) {
        if (value > 1) number = value;
    }

    void plus() {
        number++;
    }
    void minus() {
        number--;
    }
    void ravno() {
        std::cout << number << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    counter create;
    string yes = "да"; std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика?";
    std::cin >> answer;
    if (answer == yes) {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> n;
        create.setNumber(n);
    }
    else { create.getNumber(1); }

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
