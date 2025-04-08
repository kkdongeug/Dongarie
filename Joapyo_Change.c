#include <stdio.h>
#include <math.h>

void main(void) 
{
	//변수 선언
	double x;
	double y;
	double r;
	double angle_radian;
	double angle_degree;
	double pi = 3.14159;
	//x좌표 받기
	printf("x축 좌표를 입력하세요 :");
	scanf_s("%lf", &x);

	//y좌표 받기
	printf("y축 좌표를 입력하세요 :");
	scanf_s("%lf", &y);

	//r 값 계산
	r = sqrt(x * x + y * y);

	//각도 계산
	angle_radian = atan2(y, x);
	angle_degree = angle_radian * 180.0 / pi;

	//결과 값 출력
	printf("입력좌표(x,y) : [%6.2lf, %6.2lf]\n", x, y);
	printf("극좌표 r = %6.2lf\n", r);
	printf("극좌표 각도 = %6.2lf도\n", angle_degree);

}