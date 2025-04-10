#include <stdio.h>
#include <math.h>

void main()
{
	double fs;

	printf("��ü�� �ʱ�ӵ��� �Է��ϼ���(m/s) :");
	scanf_s("%lf", &fs);

	double theta_rad;

	printf("��ü�� ���� ������ �Է��ϼ���(��)  :");
	scanf_s("%lf", &theta_rad);

	double g = 9.8; //  m/s^2
	double a = -g;
	double theta_deg;
	double pi = 3.14159;

	//1. x, y ������ �ʱ� �ӵ��� ���ϱ�

	double v0x;
	double v0y;

	theta_deg = theta_rad * pi / 180;

	v0x = fs * cos(theta_deg);
	// printf("%lf\n", vx);
	v0y = fs * sin(theta_deg);
	// printf("%lf\n", v0y);

	//2. �ְ����� ���̸� ���Ͽ���

	double H; 
	double t;

	 // ��ü�� �ְ����� ������ ���� �ӵ� = vy = 0;

	t = v0y / g;

	// printf("%lf\n", t);
	
	//y = y0  + 0.5 * g * t * t ���� y = H, y0 = 0

	H = (g * t * t) / 2;  // y = y0 + v0yt + 1/2gt^2

	printf("%lf", H); 

	// 3. �ְ����� �����ϴ� �ð��� ���ϱ�

	t = v0y / g;

	//4. �������� �̵��� �ְ� �Ÿ��� ���Ͽ���

	double x;

	x = v0x * t * 2; // ���� t�� ���� �ְ������� �� �� ������ ���� * �ʱ�ӵ� * 2

	// printf("%lf\n", x);

	// 5. ���鿡 ���� ���� vx, vy�� ���ϰ� v�� ���� �������� ���Ͽ���

	double vx;
	double vy;

	vx = v0x;

	vy = v0y + a * 2 * t; // ���⼭�� t�� �ְ������� �����ϴµ� �ɸ��� �ð��̹Ƿ�  2t?

	// printf("%lf\n", vy);

	double v��_rad;
	double v��_deg;
	double v;

	v��_rad = atan2(vy , vx);
	v��_deg = v��_rad * 180 / pi;

	
	v = sqrt(vx*vx + vy*vy);

	// printf("%lf, %lf", v��_deg, v);

	printf("���鿡 ���� �� x ���� �ӵ�: %.2f m/s\n", vx);
	printf("���鿡 ���� �� y ���� �ӵ�: %.2f m/s\n", vy);
	printf("���鿡 ���� �� �ӵ� ũ��: %.2f m/s\n", v);
	printf("�ӵ� ���� ���� : (%.2fm/s, %.2f��)\n", v, v��_deg);

}