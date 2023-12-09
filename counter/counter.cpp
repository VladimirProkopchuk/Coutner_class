#include <iostream>
#include <string>

using namespace std;
class counter {
public:
    int number;
    counter() {
        number = 1;
    }
    int get_number() {
        return number;
    }
    counter(int number) {
        set_counter(number);
    }
    void set_counter(int value) {
        if (value > 1) number = value;
        else value == 1;
    }
    int plus(){
        return number++;
    }
    int minus() {
        return number--;
    }
    void ravno() {
        std::cout << number << std::endl;
    }   
};
    

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251>nul");
    counter create;
    int n;
    string answer; string yes = "да";
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> answer;
    if (answer == yes) {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> n;
         std::cout << std::endl;
        create.set_counter(n);
    }
    std::cout << create.get_number() << std::endl;
    std::cout << create.number << std::endl;

    char count;
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> count;
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



