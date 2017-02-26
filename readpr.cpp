#include<iostream>
#include<fstream>
#include<string>

int main() {
	std::string s;
	std::ifstream fin ("myfile.cpp");
	while (getline(fin, s)){
 		for (int i = 0; i < s.size(); ++i){
  			 if (!((s[i] == ' ') && (s[i+1] == ' '))){
			 	std::cout << s[i];
		       	 }
 		}
		std::cout << std::endl;
	}
	return 0;
}	
