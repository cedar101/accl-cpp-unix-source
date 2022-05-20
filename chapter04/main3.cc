#include <algorithm>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "grade.h"
#include "Student_info.h"

using std::cin;                     using std::setprecision;
using std::cout;                    using std::sort;
using std::domain_error;            // using std::streamsize;
using std::endl;                    using std::string;
using std::max;                     using std::vector;
using std::begin;					using std::end;

int main()
{
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;       // the length of the longest name

	// read and store all the students' data.
	// Invariant:	`students' contains all the student records read so far
	//			`maxlen' contains the length of the longest name in `students'
	while (read(cin, record)) {
		// find length of longest name
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
	}

	// alphabetize the student records
	sort(begin(students), end(students), compare);

	// write the names and grades
	for (auto student : students) {
		// write the name, padded on the right to `maxlen' `+' `1' characters
		cout << student.name
		     << string(maxlen + 1 - student.name.size(), ' ');

		// compute and write the grade
		try {
			double final_grade = grade(student);
			// streamsize 
			auto prec = cout.precision();
			cout << setprecision(3) << final_grade
			     << setprecision(prec);
		} catch (const std::domain_error& e) {
			cout << e.what();
		}
		cout << endl;
	}
	return 0;
}

