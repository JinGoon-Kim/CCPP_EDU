#include <iostream>
using namespace std;

// 한번 정해지면 절대 바뀌지 않을 값들
// constant의 약자 const를 붙임 (변수를 상수화 한다고 함)
// const를 붙였으면 초기값을 반드시 지정해야함.

unsigned char flag;

// 그러면 const도 바뀌지 않는 읽기 전용
// .rodata?
// 사실 C++ 표준에서 꼭 그렇게 하라는 말이 없음
// 그냥 컴파일러 (VS) 마음이라는 것
const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCIBLE = 3;

// 전역 변수

// [데이터 영역]
// .data (초기값 있는 경우)
int a = 2;
// .bss (초기값 없는 경우)
int b;
// .rodata (읽기 전용 데이터)
const char* msg = "Hello world";

int main()
{
	// [스택 영역]
	int c;

	a = a ^ b;
	a = a ^ b;

	flag = (1 << INVINCIBLE);

	flag = (1 << POLYMORPH);

	bool invincible = ((flag & (1 << 3)) != 0);

	bool mask = (1 << 3) | (1 << 1);
	bool stunOrInvincible = ((flag & mask) != 0);
}