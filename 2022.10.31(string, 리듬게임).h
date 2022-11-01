#include <iostream>	// 입출력 스트림
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	// std::string
#pragma region 문자열

	/*
	string name = "JoungSeongJin";
	string * name1 = new string(name);

	cout << "name 변수의 값 : " << name << endl;
	cout << "name1 변수의 값 : " << *name1 << endl;

	// append : string 객체의 가장 끝에 있는 메모리에 데이터 추가
	name.append("1");

	delete name1;

	// 더 이상 아무 위치 참조 X
	if (name1 == nullptr)
	{
		name1 = new string("안녕하세요");
	}

	cout << "name 변수의 값 : " << name << endl;
	cout << "name1 변수의 값 : " << *name1 << endl;
	*/

#pragma endregion

	// 리듬 게임
	/*
	// 영어 1 byte
	// 한글 2 byte
	// 특수기호 3 byte
	vector<string> data = {"←", "→", "↑", "↓", "↓"};

	// vector 원소 비었으면 true 반환
	// vector 원소 있으면 false 반환

	// resize : vector 메모리 크기 변경
	//data.resize(10);

	//data.push_back("a");

	// size()
	// 현재 원소의 개수 반환
	cout << data.size() << endl;

	// capacity()
	// 할당된 메모리 공간 크기 반환
	// 공간 할당 기준 점점 커지면서 할당
	// 기존 메모리의 1.5배 증가
	// push_back 마다 동적 할당하게 되면 비효율적
	// 미리 정해둔만큼 한 번에 동적 할당
	//cout << data.capacity() << endl;

	int key = 0;
	int life = 5;

	while (!data.empty())
	{
		// [0]  [1]  [2]  [3]
			// "←", "→", "↑", "↓"

		cout << "현재 목숨 : " << life << endl;

		for (string element : data)
		{
			cout << element << " ";
		}

		if (_kbhit())
		{
			key = _getch();

			switch (key)
			{
				case 72:	// up
					if (data.back() == "↑")
					{
						data.pop_back();
					}
					else
					{
						life--;
					}
					break;

				case 75:	// left
					if (data.back() == "←")
					{
						data.pop_back();
					}
					else
					{
						life--;
					}
					break;

				case 77:	// right
					if (data.back() == "→")
					{
						data.pop_back();
					}
					else
					{
						life--;
					}
					break;

				case 80:	// down
					if (data.back() == "↓")
					{
						data.pop_back();
					}
					else
					{
						life--;
					}
					break;
			}
		}

		system("cls");
	}
	*/
	return 0;
}