#include <iostream>
using namespace std;

//제곱을 리턴시켜주는 함수
int doubling(int num) {
	return num * num;
}

int main() {
	int a, b, c; //세변을 저장할 변수
	cin >> a >> b >> c;

	while (a) { 
		//a를 가장 큰수라고 가정하고
		//나머지를 일반 변수에 저장
		int big = a; 
		int not_big1 = b, not_big2 = c;

		//제일 큰값이 바뀔수록 나머지 변수들도 업데이트 시켜준다
		if (b > big) {
			big = b;
			not_big1 = c;
			not_big2 = a;
		}
		if (c > big) {
			big = c;
			not_big1 = b;
			not_big2 = a;
		}

		//피타고라스 정리를 이용하여 직각삼각형 판별
		if (doubling(big) == doubling(not_big1) + doubling(not_big2))
			cout << "right\n";
		else
			cout << "wrong\n";

		cin >> a >> b >> c;
	}
}