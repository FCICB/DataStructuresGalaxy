cmake_minimum_required(VERSION 3.19)
project(DS_Implementation)

set(CMAKE_CXX_STANDARD 17)

add_executable(DS_Implementation main.cpp Linked-List/single-LL/singleLL.cpp Linked-List/single-LL/singleLL.h Linked-List/doubly-LL/doubleLL.cpp Linked-List/doubly-LL/doubleLL.h Stack/Array-based-implementaion/arrayStack.cpp Stack/Array-based-implementaion/arrayStack.h Stack/LL-based-implementaion/llStack.cpp Stack/LL-based-implementaion/llStack.h Queue/array-based-queue/arrayQueue.cpp Queue/array-based-queue/arrayQueue.h Queue/LL-based-queue/llQueue.cpp Queue/LL-based-queue/llQueue.h)