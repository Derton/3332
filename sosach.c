/*
��������� ������� �0
����������� �� ����� �� � �������������:
��������, ���������, ���������, �������, ������� ���� ����� ������ �� ������� �������,
���������� ����� ����������� �� �����,�������������� ������������������.
@author Maxim
@link https://github.com/Derton/3332
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
*/
#include <stdio.h>
#include <math.h>
double end()
{
	return 0;
}
{
	/*
	@param double a,double b
	@return a+b
	@example ������� ���������� ����� ����� � � b
	@throws
	*/
	double sum(double a, double b) {
		return a + b;
	}
}
{
	/*
	@param double a,double b
	@return a-b
	@example ������� ���������� �������� ����� � � b
	@throws
	*/
	double minus(double a, double b) {
		return a - b;
	}
}
{
	/*
	@param double a,double b
	@return a*b
	@example ������� ���������� ������������ ������ � �� b,��� � �����, � b-��� �� ������� ��� ���� ������� ��� �����
	@throws
	*/
	double multip(double a, double b) {
		return a * b;
	}
}
{
	/*
	@param double a,double b
	@return -1 a/b
	@example ������� ���������� ������� ����� � �� ����� b,� ������� ����� �-�������, � b-��������
	@throws
	*/
	double div(double a, double b, int *error)
		if (0 == b) {
			error = 1;
			return 0;
		}
	return a / b;
}
{
	/*
	@param double a,double b
	@return a%b
	@example ������� ���������� ������� �� ������� a �� b
	@throws
	*/
	double ROD(double a, double b, int error) {
		if (0 == b) {
			error = 1;
			return 0;
		}
		return a % b;
	}
}
{
	/*
	@param double a,double b
	@return ������� ���������� ����� � ������������
	@example
	@throws
	*/
	double arif_progr(double a, double b)
		int sum, yer
	{
		for (double i = a; i < n; a + b) {
			sum = sum + a;
			yer = yer * a;
			return sum, yer;
		}
	}

}
{
	/*
	@param double a
	@return	sqrt(a)
	@example ������� ���������� �������� ����������� ����� �� �
	@throws
	*/
	double sqr(double a) {
		return sqrt(a);
	}
}
int main() {
	int err;
	double a, b;
	char sim;
	while(sum != "S"){
		scanf("%f %c %f", &a,&sum,&b);
		switch(sum){
		case '+':
			printf("%f + %f = %f", a, b, a + b)
				break;
		case '-':
			printf("%f - %f = %f", a, b, a - b)
				break;
		case '*':
			printf("%f * %f = %f", a, b, a * b)
				break;
		case "/": div(a, b);
			break;
				break;
		}
	}
}