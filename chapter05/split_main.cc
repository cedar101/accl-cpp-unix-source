#include <cctype>
#include <iostream>
#include <string>
#include <vector>

#include "split.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string s;

	// read and split each line of input
	while (getline(cin, s)) {
		vector<string> v = split(s);

		// write each word in `v'
		// for (vector<string>::size i = 0; i != v.size(); ++i)
		// for (string_size i = 0; i != v.size(); ++i)
		// 	cout << v[i] << endl;

		for (auto i: v)
			cout << i << endl;
	}
	return 0;
}

