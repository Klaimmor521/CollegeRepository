#include <iostream>
using std::cout;

int fibonacci(int number) 
{
    if (number == 1) return 0; //Первое число Фибоначчи — 0
    if (number == 2 || number == 3) return 1; //Второе и третье числа — 1
    return fibonacci(number - 1) + fibonacci(number - 2); //Возвращаем сумму двух предыдущих чисел Фибоначчи
}

int main()
{
    int number = 15;
    cout << fibonacci(number);
}