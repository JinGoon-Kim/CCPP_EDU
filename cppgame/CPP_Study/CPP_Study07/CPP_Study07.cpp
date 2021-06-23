﻿#include <iostream>
using namespace std;

// 오늘의 주제 : 유의 사항

// 1) 변수의 유효범위

// 전역 변수
int hp = 10;

// 스택
// { } 중괄호의 범위가 생존 범위
// 같은 이름 두번 사용할 때 문제

// 2) 연산 우선순위

// 3) 타입 변환

// 4) 사칙 연산 관련

int main()
{
	int hp = 77777;
	cout << hp << endl;

	// 짝수 여부
	bool isEven = (hp % 2 == 0);

	// 짝수거나 3으로 나뉘는 값인지
	bool isEvenOrDivBy3 = (hp % 2 == 0 || hp % 3 == 0);

	// 바구니 교체
	short hp2 = (short)hp;	// 윗쪽 비트 데이터가 짤린 상태로 저장
	float hp3 = (float)hp;	// 실수로 변환할 때 정밀도 차이가 있기 때문에 데이터 손실
	unsigned int hp4 = (unsigned int)hp; // 비트 단위로 보면 똑같은데, 분석하는 방법이 달라짐

	// 곱셈
	// - 오버플로우
	// 나눗셈
	// - 0나누기 조심
	// 실수 관련

	int maxHP = 1000;
	// int * int = int

	// int / float , float / int = float
	float ratio = hp / (float)maxHP;	// 0.123 -> 0

}