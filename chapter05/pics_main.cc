#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "pics.h"

using std::cout;
using std::copy;
using std::endl;
using std::ostream_iterator;
using std::string;
using std::vector;
using std::cbegin;
using std::cend;

int main()
{
	vector<string> p;
	p.push_back("this is an");
	p.push_back("example");
	p.push_back("to");
	p.push_back("illustrate");
	p.push_back("framing");

	ostream_iterator<string> ofile(cout, "\n");
	copy(cbegin(p), cend(p), ofile);
	cout << endl;

	vector<string> f = frame(p);
	copy(cbegin(f), cend(f), ofile);
	cout << endl;

	vector<string> h = hcat(p, frame(p));
	copy(cbegin(h), cend(h), ofile);
	cout << endl;

	return 0;
}
