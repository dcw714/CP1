#include <iostream>
#include <string>
#include <Windows.h>

/*
	1. ��վ 404 ���� 
	2. ��վ�۸Ĺ��� 
	3. ��վ������¼ 
	4. DNS ���� 
	5. ��������������
*/

// using namespace std;

int main(void)
{
	std::string userName;
	std::string pwd;
	while (1)
	{
		system("cls");
		std::cout << "�������˺ţ�" << std::endl;
		std::cin >> userName;
		std::cout << "����������" << std::endl;
		std::cin >> pwd;
		// std::cout << "��������Ϊ��" << pwd << std::endl;
		if (userName == "54hk" && pwd == "123456")
		{
			break;
		}
		else
		{
			std::cout << "�û���������������������롣" << std::endl;
			system("pause");

		}
	}
	system("cls");
	// ��ӡ�˵�
	std::cout << "���ܣ�" << std::endl;
	std::cout << "1. ��վ 404 ����" << std::endl;
	std::cout << "2. ��վ�۸Ĺ���" << std::endl;
	std::cout << "3. ��վ������¼" << std::endl;
	std::cout << "4. DNS ����" << std::endl;
	std::cout << "5. ��������������" << std::endl;
	return 0;
}