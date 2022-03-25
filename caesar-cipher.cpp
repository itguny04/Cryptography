#include <iostream>

int main(void) {
	int key;
	std::string msg;
	
	std::cout << "MSG: ";
	std::getline(std::cin, msg);
	
	std::cout << "KEY: ";
	std::cin >> key;
	
	// 암호화 
	for(int i=0;i<msg.length();i++) {
		if(msg[i] == ' ') {
			continue;
		} else {
			msg[i]=msg[i]+(key%26);
		}
	}	
	std::cout << msg << std::endl;
	
	// 복호화 
	for(int i=0;i<msg.length();i++) {
		if(msg[i] == ' ') {
			continue;
		} else {
			msg[i]=msg[i]-(key%26);
		}
	}
	std::cout << msg << std::endl;
	
	return 0;
}
