#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int in_num = 0;
	cin >> in_num;
	string temp[in_num];
	map<string, int> user;
	for (int j = 0; j < in_num; j++) {
		cin >> temp[j];
	}

	for (int q = 0; q < in_num; q++) {
		if (user.count(temp[q]) == 0) {
			user[temp[q]] = 0;
			cout << "OK" << endl;
		}
		else if (user.count(temp[q]) == 1) {
			user[temp[q]]++;
			cout << temp[q] << user[temp[q]] << endl;
		}
	}

	return 0;
}