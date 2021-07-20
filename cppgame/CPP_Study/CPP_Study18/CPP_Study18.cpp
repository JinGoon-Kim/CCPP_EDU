﻿#include <iostream>
using namespace std;

// 오늘의 주제 : 포인터

void SetHP(int* hp)
{
    *hp = 100;
}

// [매개변수][RET][지역변수 (hp 1)][매개변수 (hp 1)][RET][지역변수]
int main()
{
    int hp = 1;
    SetHP(&hp);

    // 지금까지 사용한 방식
    // number 라는 이름의 4바이트 정수 타입의 바구니를 만든다
    // number 라는 변수 스택 메모리에 할당
    // number = 1 이라 함은,  number 바구니에 1이라는 숫자를 넣으라는 의미.
    // 따라서 스택 메모리에 있는 특정 주소 (number 바구니)에 우리가 원하는 값을 넣은 셈
    // number 는 비유하자면 메모리에 이름을 붙인 것 (찰쩍같이 알아들어서)
    // 나쁘지 않고 편리한데, 단점은 TextRPG 원본 수정
    int number = 1;

    // TYPE* 변수이름;
    // 일단 2가지 요소
    // - TYPE
    // - *

    // 바구니는 바구니인데...
    // [주소를 저장하는 바구니다!]
    // 변수 선언할 때 * 등장했다 -> 포인터 = 주소
    // ex) 포인터라는 바구니는 4바이트 (32비트) or 8바이트(64비트) 고정 크기

    int* ptr = &number;

    // 근데 남의 주소를 갖고 뭘 하라는거지?
    // 추가 문법 : [주소를 저장하는 바구니] 가 가리키는 주소로 가서 무엇인가를 해라!
    // *변수이름 = 값;

    // 포탈을 타고 순간이동을 한다고 생각해보자.
    // *이 여러번 등장하니 헷갈리는데, 사용 시점에 따라서 구분해서 기억하자
    // - 변수 선언(주소를 저장하는 바구니다!)
    // - 사용할 때 (포탈 타고 순간이동)

    int value1 = *ptr;
    *ptr = 2;

    // TYPE은 왜 붙여줄까?
    // * = 포인터의 의미 = 주소를 저장하는 바구니 = 4 or 8 바이트 고정 크기

    // 주소에 가면 뭐가 있는데?
    // ex) 결혼식 청첩장에 있는 주소 = 예식장 주소
    // ex) 명함에 있는 주소 = 회사 주소
    // * = 포인터 (주소 담는 바구니)
    
    // 0b101010101111

    // 타입의 불일치
    __int64* ptr2 = (__int64*)&number;

    *ptr2 = 0xAABBCCDDEEFF;

    return 0;
}