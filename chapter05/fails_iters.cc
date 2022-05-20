#include <vector>
#include "Student_info.h"
#include "grade.h"

using std::vector;
using std::begin;
using std::end;

// version 3: iterators but no indexing; still potentially slow
vector<Student_info> extract_fails(vector<Student_info>& students)
{
	vector<Student_info> fail;

	// vector<Student_info>::iterator iter = begin(students);
	decltype(fail)::iterator iter = begin(students);

	while (iter != end(students)) {
		if (fgrade(*iter)) {
			fail.push_back(*iter);
			iter = students.erase(iter);
		} else
			++iter;
	}
	return fail;
}

