#include <stdio.h>
#include <math.h>

void main(void)
{
	// ���� ���� ����

	double x1, x2, y1, y2 ;

	// ���� �� �ޱ�

	printf("ù��° ������ x���� �Է��ϼ��� :");
	scanf_s("%lf", &x1);
	printf("ù��° ������ y���� �Է��ϼ��� :");
	scanf_s("%lf", &y1);
	printf("�ι�° ������ x���� �Է��ϼ��� :");
	scanf_s("%lf", &x2);
	printf("�ι�° ������ y���� �Է��ϼ��� :");
	scanf_s("%lf", &y2);

	//������ �� ���

	double sum_x, sum_y;

	sum_x = x1 + x2;
	sum_y = y1 + y2;

	//������ ���� ��� 

	double theta_rad;
	double theta_deg;
	double pi = 3.14159;

	double dot_product;
	theta_rad = atan2(sum_y, sum_x);
	theta_deg = theta_rad * 180 / pi;
	dot_product = sum_x * sum_y * cos(theta_deg);
	
	//������ ���� ���

	double cross_product;

	cross_product = sum_x * sum_y * sin(theta_deg);

	//��� ���

	printf("\n���� 1:%lf", x1, "i +%lf", y1, "j\n");

		printf("���� 2:%lf", x2, "i +%lf", y2, "j\n");

		printf("\n������ ��:%lf", sum_x, "i +%lf", sum_y, "i\n");

		printf("������ ����:%lf\n", dot_product);

		printf("������ ����:%lf\n", cross_product);

}
