#include <iostream>

struct Account{
	std::string username;
	std::string mail;
	std::string password;

	void SignIn() {
		std::cout << "Enter username: " ;
		std::cin >> username;

		std::cout << "Enter mail: " ;
		std::cin >> mail;

		std::cout << "Enter password: " ;
		std::cin >> password;
	}


	void LogIn(std::string mailcheck, std::string passwordcheck) {
		if (mailcheck == mail && passwordcheck == password) {
			std::cout << "Succesfuly loged in" << std::endl;
		}
		else if (mailcheck != mail && passwordcheck == password) {
			std::cout << "Check mail again" << std::endl;
		}
		else if (mailcheck == mail && passwordcheck != password) {
			std::cout << "Check password again" << std::endl;
		}
		else {
			std::cout << "Ti loh" << std::endl;
		}
	}

};

int main(){
	Account Dega;

	Dega.SignIn();

	Dega.LogIn("Debilism@gmail.com", "Autist11");
}
