project('chapter05', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++14'])

incdir = include_directories('../chapter04/')

student_grade_lib = shared_library('StudentGrade', 
                                   '../chapter04/Student_info.cc',
                                   '../chapter04/median.cc',
                                   'grade.cc', 
                                   include_directories : incdir)

ext_main_lib = static_library('ext_main', 'ext_main.cc',
                               include_directories : incdir,
                               link_with: student_grade_lib)

list_main_lib = static_library('list_main', 'list_main.cc',
                                include_directories : incdir,
                                link_with: student_grade_lib)

executable('fails_vec1',
           'fails_vec1.cc',
           include_directories : incdir,
           link_with: ext_main_lib)

executable('fails_vec2',
           'fails_vec2.cc',
           include_directories : incdir,
           link_with: ext_main_lib)

executable('fails_iters',
           'fails_iters.cc',
           include_directories : incdir,
           link_with: ext_main_lib)

executable('fails_list',
           'fails_list.cc',
           include_directories : incdir,
           link_with: list_main_lib)

           
executable('pics_main', 
           'pics_main.cc',
           'pics.cc')

split_lib = shared_library('split', 'split.cc')
executable('split_main',
           'split_main.cc',
           link_with: split_lib)
executable('split_main2',
           'split_main2.cc',
           link_with: split_lib)
           
