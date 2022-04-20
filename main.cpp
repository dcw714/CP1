#include <iostream>
#include <string>
#include <Windows.h>

/*
	1. 网站 404 攻击 
	2. 网站篡改攻击 
	3. 网站攻击记录 
	4. DNS 攻击 
	5. 服务器重启攻击
*/

// using namespace std;

int main(void)
{
	std::string userName;
	std::string pwd;
	while (1)
	{
		system("cls");
		std::cout << "请输入账号：" << std::endl;
		std::cin >> userName;
		std::cout << "请输入密码" << std::endl;
		std::cin >> pwd;
		// std::cout << "您的密码为：" << pwd << std::endl;
		if (userName == "54hk" && pwd == "123456")
		{
			break;
		}
		else
		{
			std::cout << "用户名或密码错误，请重新输入。" << std::endl;
			system("pause");

		}
	}
	system("cls");
	// 打印菜单
	std::cout << "功能：" << std::endl;
	std::cout << "1. 网站 404 攻击" << std::endl;
	std::cout << "2. 网站篡改攻击" << std::endl;
	std::cout << "3. 网站攻击记录" << std::endl;
	std::cout << "4. DNS 攻击" << std::endl;
	std::cout << "5. 服务器重启攻击" << std::endl;
	return 0;
}