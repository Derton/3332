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
int n = 0;
double end()
{
	return 0;
}
double sum(double a, double b) {
	/*
	@param double a,double b
	@return a+b
	@example ������� ���������� ����� ����� � � b
	@throws
	*/
	return a + b;
}
double minus(double a, double b) {
	/*
	@param double a,double b
	@return a-b
	@example ������� ���������� �������� ����� � � b
	@throws
	*/
	return a - b;
}
double multip(double a, double b) {
	/*
	@param double a,double b
	@return a*b
	@example ������� ���������� ������������ ������ � �� b,��� � �����, � b-��� �� ������� ��� ���� ������� ��� �����
	@throws
	*/
	return a * b;
}
double div(double a, double b) {
	/*
	@param double a,double b
	@return -1 a/b
	@example ������� ���������� ������� ����� � �� ����� b,� ������� ����� �-�������, � b-��������
	@throws
	*/
	if (0 == b)return -1;
	else return a / b;
}
double ROD(double a, double b) { // ROD-remainder of division
	/*
	@param double a,double b
	@return a%b
	@example ������� ���������� ������� �� ������� a �� b
	@throws
	*/
	return a % b;
}
double arif_progr(double a, double b)
{
	/*
	@param double a,double b
	@return ������� ���������� ����� � ������������
	@example
	@throws
	*/
	
}