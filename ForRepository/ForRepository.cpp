#include <iostream>
using std::cout;

int ackermann(int m, int n) 
{
    if (m == 0) //Если m равно 0, возвращаем n + 1
        return n + 1;
    if (m > 0 && n == 0) //Если m больше 0 и n равно 0, вызываем ackermann(m - 1, 1)
        return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1)); //Во всех остальных случаях вызываем ackermann(m - 1, ackermann(m, n - 1))
}

int main()
{
	int m = 2;
  int n = 3;
	cout << ackermann(m, n);
}