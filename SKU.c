#include <stdio.h>
int main(void)
{
	double standard, score, pass;

	printf("합격 기준 성적과 학생의 성적을 작성하시오: ");
	scanf("%lf%lf", &standard, &score);

	if (score >= standard)
	{
		printf("합격");
	}
	else
	{
		printf("불합격");
	}

	return 0;
}