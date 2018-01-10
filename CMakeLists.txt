cmake_minimum_required(VERSION 3.9)
project(CPP_Projects)

set(CMAKE_CXX_STANDARD 11)

add_executable(CPP_Projects Code_Life/1.cpp Code_Life/2.cpp Code_Life/3.cpp Code_Life/4.cpp Code_Life/5.cpp Code_Life/6.cpp Code_Life/Sales_data.h Code_Life/7.cpp Code_Life/8.cpp Code_Life/9.cpp Code_Life/10.cpp Code_Life/11.cpp Code_Life/12.cpp Code_Life/13.cpp Code_Life/14.cpp Code_Life/15.cpp Code_Life/16.cpp Code_Life/17.cpp Code_Life/18.cpp Code_Life/19.cpp Code_Life/20.cpp Demo_File/template_game/game_1.cpp Demo_File/_class_implementation_son.h Demo_File/_logic_implementation.cpp Demo_File/_class_declaration_father.h Demo_File/game.cpp Demo_File/_logic_declaration.h Demo_File/Birth_TownSquare.cpp Demo_File/ManagerConst.cpp Demo_File/BaseScene.cpp Demo_File/Weapon_Shop.cpp Demo_File/LeadingHero.cpp Demo_File/Drug_Shop.cpp Demo_File/BiQiTown.cpp)

# 设置把静态库，静态链接进.exe，而不是放在外面，动态链接.dll。网上说，-static-libstdc++ -static-libgcc。设置过程如下
set(CMAKE_EXE_LINKER_FLAGS "-static-libstdc++ -static-libgcc")