#include <stdio.h>
#include <math.h>

void main(void) 
{
	//���� ����
	double x;
	double y;
	double r;
	double angle_radian;
	double angle_degree;
	double pi = 3.14159;
	//x��ǥ �ޱ�
	printf("x�� ��ǥ�� �Է��ϼ��� :");
	scanf_s("%lf", &x);

	//y��ǥ �ޱ�
	printf("y�� ��ǥ�� �Է��ϼ��� :");
	scanf_s("%lf", &y);

	//r �� ���
	r = sqrt(x * x + y * y);

	//���� ���
	angle_radian = atan2(y, x);
	angle_degree = angle_radian * 180.0 / pi;

	//��� �� ���
	printf("�Է���ǥ(x,y) : [%6.2lf, %6.2lf]\n", x, y);
	printf("����ǥ r = %6.2lf\n", r);
	printf("����ǥ ���� = %6.2lf��\n", angle_degree);

}