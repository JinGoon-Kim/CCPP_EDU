#include <iostream>
using namespace std;

// 오늘의 주제 : 로또 번호 생성기

void Swap(int& a, int& b);
void Sort(int numbers[], int count);
void ChoseLotto(int numbers[]);

int main()
{
    // 1) Swap 함수 만들기
    int a = 1;
    int b = 2;
    Swap(a, b);
    // a = 2, b = 1

    cout << a << " " << b << endl;

    // 2) 정렬 함수 만들기 (작은 숫자가 먼저 오도록 정렬)
    int numbers[6] = { 1, 42, 3, 15, 5, 6 };
    Sort(numbers, sizeof(numbers) / sizeof(int));   // sizeof(numbers) / sizeof(int)
    // { 1, 3, 5, 6, 15, 42} => { 1, 3, 5, 6, 15, 42 }

    return 0;
}

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Sort(int numbers[], int count)
{
    for (int i = 0; i < count; i++)
    {
        // i번째 값이 제일 좋은 후보라고 가정
        int best = i;

        // 다른 후보와 비교를 통해 제일 좋은 후보를 찾아나선다
        for (int j = i + 1; j < count; j++)
        {
            if (numbers[j] < numbers[best])
                best = j;
        }

        // 제일 좋은 후보와 교체하는 과정
        if (i != best)
            Swap(numbers[i], numbers[best]);
    }
}

// 3) 로또 번호 생성
// TODO : 랜덤으로 1~45 사이의 숫자 6개를 골라주세요! (단, 중복이 없어야함)
void ChooseLotto(int numbers[])
{
    srand((unsigned)time(0)); // 랜덤 시드 설정

    int count = 0;
    while (count != 6)
    {
        int randValue = 1 + (rand() % 45); // 1 ~ 45

        // 이미 찾은 값인지?
        bool found = false;
        for (int i = 0; i < count; i++)
        {
            if (numbers[i] == randValue)
            {
                // 이미 찾은 값
                if (numbers[i] == randValue)
                {
                    found = true;
                    break;
                }
            }
            // 못찾았으면 추가!
            if (found == false)
            {
                numbers[count] = randValue;
                count++;
            }
        }
    }

    Sort(numbers, 6);
}