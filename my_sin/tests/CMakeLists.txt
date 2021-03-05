# задаем набор исходников
set(SOURCES
    tests.cpp
)

# создаем исполняемый файл
add_executable(sinlib_test ${SOURCES})

# подключаем библиотеки:
# 1. Тестируемая библиотека
# 2. gest
target_link_libraries(sinlib_test PUBLIC sin_lib)
target_link_libraries(sinlib_test PUBLIC gtest_main)

# В solution эта библиотека лежит в tests/sqlib_test
set_property(TARGET sinlib_test PROPERTY FOLDER "tests/sinlib_test")