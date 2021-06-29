#include <iostream>
using namespace std;

// 상수인건 알겠는데, 너무 따로 따로 노는 느낌?
// 하나의 셋트인데?
const int SCISSORS = 1;
const int ROCK = 2;
const int PAPER = 3;

// 숫자를 지정 안하면 첫 값은 0부터 시작
// 그 다음 값들은 이전 값 + 1
enum ENUM_SRP
{
	ENUM_SCISSORS,
	ENUM_ROCK,
	ENUM_PAPER
};
// #이 붙은거 -> 전처리 지시문
// #include <iostream> 이라는 파일을 찾아서 해당 내용을 그냥 복붙!
// 1) 전처리 2) 컴파일 3) 링크
#define DEFINE_SCISSORS 1
#define DEFFINE_TEST cout << "Hello World" << endl;

int main()
{
	DEFFINE_TEST;

	srand(time(0));				// 시드 설정
	
	int wins = 0;
	int total = 0;

	while (true)
	{
		cout << "가위 바위 보를 합니다. 가위(1), 바위(2), 보(3) 중에 하나를 적어주세요" << endl;
		cout << "> ";

		if (total == 0)
		{
			cout << "현재 승률 : 없음" << endl;
		}
		else
		{
			int winPercentage = (wins * 100) / total;	// 승률?
			cout << "현재 승률 : " << winPercentage << endl;
		}

		// 컴퓨터

		int computerValue = 1 + (rand() % 3);

		// 사용자
		int input;
		cin >> input;

		if (input == SCISSORS)
		{
			cout << "당신은 가위를 냈습니다." << endl;
			if (computerValue == SCISSORS)
			{
				cout << "컴퓨터는 가위를 냈습니다." << endl;
				cout << "비겼습니다." << endl;
			}
			else if (computerValue == ROCK)
			{
				cout << "컴퓨터는 바위를 냈습니다." << endl;
				cout << "졌습니다." << endl;
				total++;
			}
			else if (computerValue == PAPER)
			{
				cout << "컴퓨터는 보를 냈습니다." << endl;
				cout << "이겼습니다." << endl;
				total++;
				wins++;
			}
		}
		else if (input == ROCK)
		{
			cout << "당신은 바위를 냈습니다." << endl;
			switch (computerValue)
			{
			case SCISSORS:
				cout << "컴퓨터는 가위를 냈습니다." << endl;
				cout << "이겼습니다." << endl;
				total++;
				wins++;
				break;
			case ROCK:
				cout << "컴퓨터는 바위를 냈습니다." << endl;
				cout << "비겼습니다." << endl;
				break;
			case PAPER:
				cout << "컴퓨터는 보를 냈습니다." << endl;
				cout << "졌습니다." << endl;
				total++;
				break;
			}

		}
		else if (input == PAPER)
		{
			cout << "당신은 보를 냈습니다." << endl;
			switch (computerValue)
			{
			case SCISSORS:
				cout << "컴퓨터는 가위를 냈습니다." << endl;
				cout << "졌습니다." << endl;
				total++;
				break;
			case ROCK:
				cout << "컴퓨터는 바위를 냈습니다." << endl;
				cout << "이겼습니다." << endl;
				total++;
				wins++;
				break;
			case PAPER:
				cout << "컴퓨터는 보를 냈습니다." << endl;
				cout << "비겼습니다." << endl;
				break;
			}
		}
		else
		{
			break;
		}
		cout << endl;
	}
}