#include <iostream>	// ����� ��Ʈ��

using namespace std;

// ���۷��� ������
/*
// �����͸� �̿��Ͽ� �޸� ���� ��� X

// ������ ����ϴ� ����
// 
void Function(int & x)
{
	x = 100;
}
*/

// �ζ��� �Լ�
// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ���

// ��ũ�� �Լ� vs �ζ��� �Լ�
// ��ũ�� �Լ� : ��ó���⿡�� ó��
// �ζ��� �Լ� : �����Ͻ����� ó��

// ��ü���� ���α׷���
// ���� ���� ��ü�鳢�� ��ȣ�ۿ� ���� ���� ����

inline void Function()
{
	cout << "����" << endl;
}

int main()
{
	// ������
	/*
	// �ڽ��� �����ϴ� ������ ����� �� �ִ� �� �ϳ��� �̸�

	// �ϳ��� �޸� ������ 2���� �̸� ����
	int a = 10;
	int& tvalue = a;
	int& ref = tvalue;

	// �����ڴ� �ʱ�ȭ �ʼ�, NULL X
	// int& va = NULL;

	Function(a);

	cout << a << endl;
	*/

	/*
	cout << "a�� �� : " << a << endl;
	cout << "tvalue�� �� : " << tvalue << endl;

	ref = 30;

	cout << "a�� �� : " << a << endl;
	cout << "tvalue�� �� : " << tvalue << endl;
	*/

	// �ζ��� �Լ�
	/*
	// �Լ� ���� �ִ� ������ ������ �� ���
	
	// �Լ��� ���� �� ȣ��Ǵ� �Լ��� ���
	// �ζ��� �Լ��� ����ϸ� ������ ũ�� Ŀ��
	Function();
	*/

	// ĸ��ȭ
	/*
	// Ŭ������ �Ӽ�(����)�� ���(�Լ�)�� �ϳ��� ����
	// ���� ���� ������ �Ϻθ� ���ο� ���� ����

	class CellPhone
	{
	private:
		int brightness;
		int volume;

		bool power;

	public:
		// �� ���� �Լ� : Setter
		// �� �д� �Լ� : Getter

		
		void SoundVolume(int volumeValue)
		{
			if (volumeValue > 100)
			{
				volumeValue = 100;
			}
			else if (volumeValue < 0)
			{
				volumeValue = 0;
			}

			volume = volumeValue;

			cout << volume << endl;
		}
		

		// Setter()
		void SetVolume(int x)
		{
			volume = x;
		}

		// Getter()
		int GetVolume()
		{
			return volume;
		}
	
	};
	*/
	/*
	CellPhone iPhone;
	iPhone.SetVolume(10);

	cout << iPhone.GetVolume() << endl;
	return 0;
	*/
}