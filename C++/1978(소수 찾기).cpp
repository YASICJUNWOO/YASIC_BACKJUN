﻿#include <bits/stdc++.h>
using namespace std;

int main() {


	int test;
	cin >> test; //테스트 케이스 입력받기

	int num;
	int cnt = 0; //소수의 개수 저장

	for (int i = 0;i<test;i++) {

		cin >> num; //대상 숫자 입력받기
		if (num == 1) cnt++; //1이라면 소수가 아니기 떄문에 카운트
		else {
			for (int t = 2;t<=sqrt(num);t++) { //2부터 최대수의 제곱근까지 나눠본다
				if (num % t == 0) {
					cnt++;
					break;  //나눠지면 cnt증가시키고 탈출
				}
			}
		}
		

	}
	cout << test-cnt;  //숫자의 개수에서 소수아닌수 빼주기
}