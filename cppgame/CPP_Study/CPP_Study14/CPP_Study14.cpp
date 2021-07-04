﻿#include <iostream>
using namespace std;

//오늘의 주제 : 지역 변수와 값 전달

// 전역 변수
// 참고) 초기화 여부, const 등 .rodata . data .bss
int globalValue = 0;

void Test()
{
    cout << "전역 변수의 값은 : " << globalValue << endl;
    globalValue++;
}

int increaseHP(int hp)
{
    int finalHP = hp + 1;
    return finalHP;
}


// [매개변수][RET][지역변수] | [매개변수][RET][지역변수]
int main()
{
    int hp = 1;

    cout << "increaseHP 호출 전 : " << hp << endl;
    hp = increaseHP(hp);
    cout << "increaseHP 호출 후 : " << hp << endl;
    return 0;
}
