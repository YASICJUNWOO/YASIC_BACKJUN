#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int cnt = 0;
	string dan;
	getline(cin, dan);

	//예외
	if (dan[0] == ' ' || dan[dan.length()-1] == ' ') {

		//공백만 있을 떄
		if (dan.length() == 1) {
			cnt = -1;
		}

		//처음이 공백일 떄
		else if (dan[0] == ' ' && dan.length()!= 1) {

			// 끝도 공백일 떄
			if (dan[dan.length()-1] == ' ') {
				for (int i = 1;i < dan.length() - 1;i++) {
					if (dan[i] == ' ') { cnt++; }
				}
			}

			//처음만 공백일 때
			else {
				for (int i = 1;i < dan.length();i++) {
					if (dan[i] == ' ') { cnt++; }
				}
			}

		}

		//끝만 공백일 떄
		else {
			for (int i = 0;i < dan.length() - 2;i++) {
				if (dan[i] == ' ') { cnt++; }
			}
		}
	}
	//일반 경우
	else {
		for (int i = 0;i < dan.length();i++) {
			if (dan[i] == ' ') { cnt++; }
		}
		
	}

	std::cout << cnt + 1;
}