#include <iostream>
using namespace std;
int rabbit(int day = 1);
int calc(int step) {
	if (step == 1) {
		return 1;        // ̨����һ�ף�ֻ��һ���߷�
	}
	if (step == 2) {
		return 2;        // ̨�������ף��������߷���1:һ��һ��; 2:һ������
	}

	// ̨�׶���2�ף��߷� = ��һ����1�׵��߷�+��һ����2�׵��߷�
	// Ҳ����˵�ǣ�   �߷� = ʣ���99�׵��߷�+ʣ���98�׵��߷���
	return calc(step - 1) + calc(step - 2);
}

int main(void)
{
	int result;
	result = rabbit(12);
	cout << "����" << result << "ֻ���ӡ�";
	return 0;
}

int rabbit(int day) 
{
	if (day == 1 || day == 2)
		return 2;
	else
		return rabbit(day-2)+rabbit(day-1);
}