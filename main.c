#include <stdio.h>
#include <math.h>

void main(void)
{
	// 벡터 변수 선언

	double x1, x2, y1, y2 ;

	// 벡터 값 받기

	printf("첫번째 벡터의 x값을 입력하세요 :");
	scanf_s("%lf", &x1);
	printf("첫번째 벡터의 y값을 입력하세요 :");
	scanf_s("%lf", &y1);
	printf("두번째 벡터의 x값을 입력하세요 :");
	scanf_s("%lf", &x2);
	printf("두번째 벡터의 y값을 입력하세요 :");
	scanf_s("%lf", &y2);

	//벡터의 합 계산

	double sum_x, sum_y;

	sum_x = x1 + x2;
	sum_y = y1 + y2;

	//벡터의 내적 계산 

	double theta_rad;
	double theta_deg;
	double pi = 3.14159;

	double dot_product;
	theta_rad = atan2(sum_y, sum_x);
	theta_deg = theta_rad * 180 / pi;
	dot_product = sum_x * sum_y * cos(theta_deg);
	
	//벡터의 외적 계산

	double cross_product;

	cross_product = sum_x * sum_y * sin(theta_deg);

	//결과 출력

	printf("\n벡터 1:%lf", x1, "i +%lf", y1, "j\n");

		printf("벡터 2:%lf", x2, "i +%lf", y2, "j\n");

		printf("\n벡터의 합:%lf", sum_x, "i +%lf", sum_y, "i\n");

		printf("벡터의 내적:%lf\n", dot_product);

		printf("벡터의 외적:%lf\n", cross_product);

}
