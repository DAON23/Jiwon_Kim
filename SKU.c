#include <stdio.h>
int main(void)
{
	double standard, score, pass;

	printf("�հ� ���� ������ �л��� ������ �ۼ��Ͻÿ�: ");
	scanf("%lf%lf", &standard, &score);

	if (score >= standard)
	{
		printf("�հ�");
	}
	else
	{
		printf("���հ�");
	}

	return 0;
}