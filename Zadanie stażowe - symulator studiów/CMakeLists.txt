cmake_minimum_required(VERSION 3.0)

set(SOURCE Projekt.cpp Class_Czlowiek.cpp Class_Dziekan.cpp Class_Nauczyciel.cpp Class_Pracownik.cpp Class_Student.cpp )
project("Projekt")

add_executable(${PROJECT_NAME} ${SOURCE})
