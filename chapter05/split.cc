#include <cctype>
#include <string>
#include <vector>

#include "split.h"

using std::vector;
using std::string;

using std::isspace;


vector<string> split(const string& s)
{
	vector<string> ret;

	string_size i = 0;

	// 불변식(invariant): we have processed characters `['original value of `i', `i)'
	while (i != s.size()) {
		// 앞에 나오는 빈칸 무시(ignore leading blanks)
		// invariant: characters in range `['original `i', current `i)' are all spaces
		while (i != s.size() && isspace(s[i]))	// [원래i, 현재i)는 모두 공백
			++i;

		// 다음 단어의 끝을 찾음(find end of next word)
		string_size j = i;
		// invariant: none of the characters in range `['original `j', current `j)' is a space
		while (j != s.size() && !isspace(s[j])) // [원래j, 현재j)는 모두 공백 아님
			++j;

		// 비공백 문자를 찾았다면(if we found some nonwhitespace characters)
		if (i != j) {
			// copy from `s' starting at `i' and taking `j' `\-' `i' chars
			ret.push_back(s.substr(i, j-i)); // i부터 j-1까지
			i = j;
		}

	}
	return ret;
}

