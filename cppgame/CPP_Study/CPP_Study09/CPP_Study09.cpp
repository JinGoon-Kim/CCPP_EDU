﻿#include <iostream>
using namespace std;

// 오늘의 주제 : 반복문
// 데이터를 메모리에 할당하고 가공하고 방법에 대해 알아봄
// 가공한 데이터를 이용해서 무엇인가를 하고 싶다면?

int main()
{
    // while ~동안에
    // if~else 굉장히 유용하다
    // 하지만 한 번만 실행하는게 아니라, 특정 조건까지 계속 반복해야 하는 상황
    // ex) 게임을 끌때까지 계속 게임을 실행해라
    // ex) 목적지에 도달할때까지~ 계속 이동하라

    // break; continue;

    int count = 0;
    while (count < 5)
    {
        cout << "Hello World" << endl;
        count++;
    }

    do
    {
        cout << "Hello World2" << endl;
        count++;
    } while (count < 10);


    for (int i = 0; i < 5; i++)
    {
        cout << "Hello World3" << endl;
    }

    // 루프문의 흐름 제어 break continue

    int round = 1;
    int hp = 100;
    int damage = 10;

    // 무한 루프 : 전투 시작
    while (true)
    {
        hp -= damage;
        if (hp < 0)
            hp = 0; // 음주 체력을 0으로 보정

        // 시스템 메시지
        cout << "Round " << round << "몬스터 체력" << hp << endl;

        if (hp == 0)
        {
            cout << "몬스터 처치!" << endl;
            break;
        }
        if (round == 5)
        {
            cout << "제한 라운드 종료" << endl;
            break;
        }
        round++;
    }

    // 1 ~ 10 사이의 홀수만 출력하기

    for (int i = 1; i <= 10; i++)
    {
        bool isEven = ((i % 2) == 0);
        if (isEven) continue;
        cout << i << endl;
    }
}