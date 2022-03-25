#include <iostream>

int main(void) {
	std::string msg;
	char mono[27] = {'o', 'w', 'q', 's', 'm', 'b', 'n', 'r', 'x', 'd', 'l', 'p', 'i', 'v', 'g', 't', 'y', 'h', 'f', 'k', 'e', 'a', 'c', 'u', 'z', 'j'};
	
	
	std::getline(std::cin, msg);
	
	for(int i=0;i<msg.length();i++) {
		msg[i] = mono[msg[i]-'a'];
	}
	
	std::cout << msg << std::endl;
	
}
