/*
#if 用法的一般格式为：
#if 整型常量表达式1
    程序段1
#elif 整型常量表达式2
    程序段2
#elif 整型常量表达式3
    程序段3
#else
    程序段4
#endif

#ifdef 用法的一般格式为：
#ifdef  宏名
    程序段1
#else
    程序段2
#endif

下面是本章涉及到的部分预处理指令：
指令	说明
#	空指令，无任何效果
#include	包含一个源代码文件
#define	定义宏
#undef	取消已定义的宏
#if	如果给定条件为真，则编译下面代码
#ifdef	如果宏已经定义，则编译下面代码
#ifndef	如果宏没有定义，则编译下面代码
#elif	如果前面的#if给定条件不为真，当前条件为真，则编译下面代码
#endif	结束一个#if……#else条件编译块

*/

#include <stdio.h>
#include <windows.h>
int main() {
#if _WIN32
    system("color 0c");
    printf("http://c.biancheng.net\n");
#elif __linux__
    printf("\033[22;31mhttp://c.biancheng.net\n\033[22;30m");
#else
    system("start cmd");
    printf("http://c.biancheng.net\n");
#endif

#ifdef _DEBUG
    printf("正在使用 Debug 模式编译程序...\n");
#else
    printf("正在使用 Release 模式编译程序...\n");
#endif

    return 0;
}