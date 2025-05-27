#include <iostream>


// доступів два типи:           private         public
struct Account{

    private:

	std::string username;
	std::string mail;
	std::string password;
    bool isLogIn = false;
    int balance = 0;

    public:
	void SignIn() {
		std::cout << "Enter username: " ;
		std::cin >> username;

		std::cout << "Enter mail: " ;
		std::cin >> mail;

		std::cout << "Enter password: " ;
		std::cin >> password;
	}

	bool IsValidEmail(std::string mailcheck) {
		int at = 0;
		int dot = 0;
		int atPos = 0;
		int dotPos = 0;


		for (int index = 0; index < mailcheck.size();) {
			if (isalpha(mailcheck[0]) || isalpha(mailcheck[index])) {
				index++;
			}
			else if (isdigit(mailcheck[index])) {
				index++;
			}
			else if (mailcheck[index] = '@' && at < 1) {
				index++;
				at++;
				atPos = mailcheck[index];
			}
			else if (mailcheck[index] = '.' && dot < 1 && index > atPos && isalpha(mailcheck[index -= 1]) && isalpha(mailcheck[index += 1])) {
				index++;
				dot++;
				dotPos = mailcheck[index];
			}
			else {
				return false;
			}

			if (index == mailcheck.size()) {
				return true;
			}
		}
	}

	void LogIn(std::string mailcheck, std::string passwordcheck) {
		
		if (mailcheck == mail && passwordcheck == password) {
			std::cout << "Succesfuly loged in" << std::endl;
            isLogIn = true;
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


	void AddBalance(int cash) {
		if (isLogIn) {
			balance += cash;
		}
	}

    void showInfo(){
        if(isLogIn){
			std::cout << "Username: " << username << std::endl;
            std::cout << "Email: " << mail << std::endl;
			std::cout << "Balance: " << balance << std::endl;
        }
    }
};

int main(){
	Account Dega;

	Dega.SignIn();

	Dega.LogIn("Debilism@gmail.com", "Autist11");

	Dega.showInfo();

	Dega.AddBalance(500);
}
