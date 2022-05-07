pushd builddir
	./main1 <../../data/single_grade
	./main2 <../../data/single_grade
	./main2 <../../data/grades
	./main3 <../../data/grades
popd