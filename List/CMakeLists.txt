# 指定最低 CMake 版本
cmake_minimum_required(VERSION 3.10)

# 定义项目名称和版本
project(MyProject VERSION 1.0)

# 设置 C++ 标准为 C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/inc)

# 添加源文件并创建可执行文件
add_executable(MyExe src/List.cpp)

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)
