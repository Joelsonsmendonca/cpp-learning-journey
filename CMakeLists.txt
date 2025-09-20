# Versão mínima e nome da "solução"
cmake_minimum_required(VERSION 3.10)
project(CppLearningSolution)

# Adicione cada sub-projeto que você quer que seja compilável.
# O CMake vai procurar por um CMakeLists.txt dentro de cada uma dessas pastas.
add_subdirectory("Matrix rain")
add_subdirectory("Shared Pointer/src")
add_subdirectory("struct")
add_subdirectory("Unique Pointer/src")
# Adicione uma linha "add_subdirectory()" para cada projeto que você tem