#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "숫자를 입력하세요" << endl;
    cin >> input;

    // 별찍기1)
    // 유저들이 어떤 정수를 입력하면
    // N*N개의 별을 찍었으면 좋겠어요!

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 별찍기2)
    // 그냥 N*N개의 별을 찍으니깐 너무 심심하다.
    // 1개부터 시작해서 순차적으로 하나씩 증가하게 수정해주세요!

    cout << "숫자를 입력하세요" << endl;
    cin >> input;

    for (int i = 1; i <= input; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 별찍기3)
    // 모양이 많이 개선되긴 했는데.
    // N개부터 시작해서 줄마다 1개씩 줄어드는 형태로!

    cout << "숫자를 입력하세요" << endl;
    cin >> input;

    for (int i = input; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 구구단)
    // 2 * 1 = 2
    // 2단부터 ~ 9단까지 구구단을 출력해주세요

    cout << "구구단 입니다" << endl;

    for (int i = 2; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << i << "*" << j << "=" << i*j << endl;
        }
    }
}