project('chapter04', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++14'])

'''
all:		main1 main2 main3

Student_info.o:	Student_info.cc Student_info.h

grade.o:	grade.cc grade.h median.h Student_info.h

main3.o:	main3.cc grade.h median.h Student_info.h

median.o:	median.cc median.h

main3:		main3.o grade.o median.o Student_info.o
'''

lib = library('StudentGrade', 'Student_info.cc', 'grade.cc', 'median.cc')

executable('main1',
           'main1.cc',
           install : true)

executable('main2',
           'main2.cc',
           install : true)

executable('main3',
           'main3.cc',
           link_with: lib,
           install : true)