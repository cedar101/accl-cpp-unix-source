// source file for the `median' function
#include <algorithm>    // to get the declaration of `sort'
#include <stdexcept>    // to get the declaration of `domain_error'
#include <vector>       // to get the declaration of `vector'

using std::domain_error;   	using std::sort;   using std::vector;
using std::begin;			using std::end;

#include "median.h"

// compute the median of a `vector<double>'
// note that calling this function copies the entire argument `vector'
double median(vector<double> vec)
{
	// typedef vector<double>::size_type vec_sz;
	// using vec_sz = vector<double>::size_type;

	// vec_sz 
	auto size = vec.size();
	if (size == 0)
		throw domain_error("median of an empty vector");

	sort(begin(vec), end(vec));

	// vec_sz 
	auto mid = size/2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}

