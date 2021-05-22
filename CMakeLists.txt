cmake_minimum_required(VERSION 3.17)
project(SSDeckedOut)

set(CMAKE_CXX_STANDARD 14)

add_executable(SSDeckedOut main.cpp Deck.h GeneralPlayer.h Game.h)
