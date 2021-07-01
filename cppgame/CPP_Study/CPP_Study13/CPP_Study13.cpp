#include <iostream>
using namespace std;

void PrintHelloWorld()
{
    cout << "Hello World" << endl;
}

void PrintNumber(int number)
{
    cout << "넘겨주신 숫자는 " << number << " 입니다" << endl;
}


int MultiplyBy2(int a)
{
    int result = a * 2;
    return result;
}


int MultiplyBy(int a, int b)
{
    return a * b;
}

// F5
// F10
// F11

int main()
{
    int a = 3;
    int b = 5;
    int result = MultiplyBy(b, a);

    PrintNumber(result);
    //PrintHelloWorld();

    return 0;
}