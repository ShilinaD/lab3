﻿# CMakeList.txt: проект CMake для lab3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (lab3 "lab3.cpp" "lab3.h"     "sport_team.h" "players.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET lab3 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
