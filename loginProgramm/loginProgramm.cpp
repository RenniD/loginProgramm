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


    void showInfo(){
        if(isLogIn){
            std::cout << "Email: " << mail;
        }
        //
    }
};

int main(){
	Account Dega;

	Dega.SignIn();

	Dega.LogIn("Debilism@gmail.com", "Autist11");
}
