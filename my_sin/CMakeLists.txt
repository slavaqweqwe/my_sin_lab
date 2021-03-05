
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
# задаем набор исходников
set(SOURCES
my_sin.h
my_sin.cpp
)

# создаем статическую библиотеку
add_library(sin_lib ${SOURCES})

# добавлем путь к исходникам для возожности подключения библиотеки
target_include_directories(sin_lib PUBLIC ${SRC_ROOT_DIR})

# группируем исходники по типу по категориям
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})

# В solution эта библиотека лежит в test_project
set_property(TARGET sin_lib PROPERTY FOLDER "test_project")

# включаем в сборку проекnа подпроект с тестами
add_subdirectory(tests)