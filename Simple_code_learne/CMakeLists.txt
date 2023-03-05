# CMakeList.txt: проект CMake для Simple_code_learne; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Simple_code_learne "Simple_code_learne.cpp" "Simple_code_learne.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Simple_code_learne PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
