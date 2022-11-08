#include <iostream>	// 입출력 스트림
#include <map>
#include <set>

using namespace std;

int main()
{
	// STL vector, list // 선형 컨테이너
	// STL stackm, queue // 컨테이너 어댑터
	// STL map, set // 연관 컨테이너

	// MAP
	/*
	// 리스트나 배열처럼 순차적으로 요소 값을 구하지 않고
	// Key 값을 통해서 value 값을 얻음
	map<string, int> mapData;
	mapData.insert({ "검", 1000 });
	mapData.insert({ "총", 4000 });
	mapData.insert({ "옷", 2500 });

	// (value)값은 중복될 수 있지만, key 값은 고유한 값으로 중복 X

	for (auto iter = mapData.begin();
		iter != mapData.end(); iter++)
	{
		// KEY : iter->first로 접근
		// VALUE : iter->second로 접근
		cout << "kEY : " << iter->first << "VALUE : " << iter->second << endl;

	}

	// MAP 키 값을 기준으로 정렬, 오름차순으로 정렬
	// 첫번째 주소를 가리키는 itherator가 mapData.end()까지 순화하면서
	// "신발" 이라는 key 값이 있다면 조건문 실행

	if (mapData.find("신발") != mapData.end())
	{
		cout << "현재 KEY 값이 존재" << endl;
	}
	else
	{
		cout << "현재 KEY 값이 존재하지 않음" << endl;
	}

	// 중복된 키 값을 삽입하는 과정
	// MAP은 중복된 KEY 값을 허용 X
	mapData.insert("검", 3000);
	// VALUE가 중복 시 mapData에 Insert 허용
	mapData.insert({ "투구", 1000 });
	// mapData에 있는 데이터를 삭제하려면 erase로 키 값을 입력
	mapData.erase("검");
	for (auto iter = mapData.begin(); iter != mapData.end(); iter++)
	{
		// KEY : iter->first로 접근해야 합니다.
		// VALUE : ither->second로 접근해주셔야 합니다.
		cout << "KEY : " << iter->first << " VALUE : " << iter->second << endl;
	}
	*/

	// SET
	// 키 값으로만 원소들의 집합으로 이루어진 컨테이너
	// SET 자료구조도 키값에 중복을 허용 X
	set<int> setData;

	setData.insert(10);
	setData.insert(20);
	setData.insert(30);
	setData.insert(40);
	setData.insert(50);
	setData.insert(60);

	for (auto iter = setData.begin(); iter != setData.end(); iter++)
	{
		cout << *iter << endl;
	}

	// 값이 중복되었지만, 안되었는지 판단
	// 중복된 값을 넣지 않으면 값이 SET 자료구조에 저장
	pair<set<int>::iterator, bool> check = setData.insert(15);

	if (check.second)
	{
		cout << "삽입 완료" << endl;
	}
	else
	{
		cout << "삽입 실패 (중복된 값이 존재)" << endl;
	}

	return 0;
}