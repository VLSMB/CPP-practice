/*
#if �÷���һ���ʽΪ��
#if ���ͳ������ʽ1
    �����1
#elif ���ͳ������ʽ2
    �����2
#elif ���ͳ������ʽ3
    �����3
#else
    �����4
#endif

#ifdef �÷���һ���ʽΪ��
#ifdef  ����
    �����1
#else
    �����2
#endif

�����Ǳ����漰���Ĳ���Ԥ����ָ�
ָ��	˵��
#	��ָ����κ�Ч��
#include	����һ��Դ�����ļ�
#define	�����
#undef	ȡ���Ѷ���ĺ�
#if	�����������Ϊ�棬������������
#ifdef	������Ѿ����壬������������
#ifndef	�����û�ж��壬������������
#elif	���ǰ���#if����������Ϊ�棬��ǰ����Ϊ�棬������������
#endif	����һ��#if����#else���������

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
    printf("����ʹ�� Debug ģʽ�������...\n");
#else
    printf("����ʹ�� Release ģʽ�������...\n");
#endif

    return 0;
}