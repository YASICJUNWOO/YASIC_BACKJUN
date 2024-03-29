﻿#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

vector<pair<int, int>> consel;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main() {
	int conselNum = 0;

	int test;
	cin >> test;

	for (int i = 0; i < test;i++) {
		int input1, input2;
		cin >> input1 >> input2;

		consel.push_back(make_pair(input1,input2));
	}

	sort(consel.begin(), consel.end(), cmp);

	int endTime = -1;

	for (int i = 0 ;  i <test ; i++) {
		if (endTime <= consel[i].first) {
			endTime = consel[i].second;
			conselNum++;
		}
	}

	cout << conselNum;
}