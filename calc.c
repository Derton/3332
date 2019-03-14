/*
Проектное задание №0
Калькулятор на языке Си с возможностями:
Сложение, вычитание, умножение, деление, Деления двух чисел нацело со взятием остатка,
Извлечения корня квадратного из числа,Арифметическая последовательность.
@author Maxim
@link https://github.com/Derton/3332
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double end()
{
	return 0;
}
{
	/*
	@param double a,double b
	@return a+b
	@example функция возвращает сумму чисел а и b
	*/
	double sum(double a, double b) {
		return a + b;
	}
}
{
	/*
	@param double a,double b
	@return a-b
	@example функция возвращает разность чисел а и b
	*/
	double minus(double a, double b) {
		return a - b;
	}
}
{
	/*
	@param double a,double b
	@return a*b
	@example функция возвращает произведение чисела а на b,где а число, а b-это во сколько раз надо сложить это число
	*/
	double multip(double a, double b) {
		return a * b;
	}
}
{
	/*
	@param double a,double b
	@return -1 a/b
	@example функция возвращает деление числа а на число b,в котором число а-делимое, а b-делитель
	@throws
	*/
	double div(double a, double b, int *error)
		if (0 == b) {
			*error = 1;
			return 0;
		}
	return a / b;
}
{
	/*
	@param double a,double b
	@return a%b
	@example функция возвращает остаток от деления a на b
	@throws
	*/
	double rod(double a, double b, int *error) {
		if (0 == b) {
			*error = -1;
			return 0;
		}
		return a % b;
	}
}
{
	/*
	@param double a,double b
	@return функция возвращает сумму и произведение
	@example
	@throws
	*/
	double arif_progr(double a, double b)
	{
<<<<<<< HEAD:sosach.c
		int sum, yer
=======
>>>>>>> 4093a32b6548efbb626f4429aea10dbf7ec9c942:calc.c
		for (int i = a; i < n; a + b) {
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
	@example функция возвращает значение квадратного корня из а
	@throws
	*/
	double sqr(double a, int *error) {
		if (a > 0) {
			*error = 0;
			return sqrt(a);
		}
		*error = 3;
		return 0;
	}
}
int main() {
	int err;
	double a, b;
<<<<<<< HEAD:sosach.c
	char sum;
	err = -1;
	while(sum != "S"){
		scanf("%f %c %f", &a,&sum,&b);
		switch(return 0){
=======
	char sim;
	err = -1;
	while(sum != "S"){
		scanf("%f %c %f", &a,&sum,&b);
		switch(sum){
>>>>>>> 4093a32b6548efbb626f4429aea10dbf7ec9c942:calc.c
			case '+':
				printf("%f + %f = %f", a, b, a + b)
				break;
			case '-':
				printf("%f - %f = %f", a, b, a - b)
				break;
			case '*':
				printf("%f * %f = %f", a, b, a * b)
				break;
			case '/':
				double div(double a, double b, int *error)
					if (0 == b) {
<<<<<<< HEAD:sosach.c
						*error = -1;
=======
						*error = 1;
>>>>>>> 4093a32b6548efbb626f4429aea10dbf7ec9c942:calc.c
						return 0;
					}
				printf("%f / %f = %f", a, b, a / b);
				break;
			case '%':
				double rod(double a, double b, int *error) {
					if (0 == b) {
<<<<<<< HEAD:sosach.c
						**error = -1;
=======
						**error = 1;
>>>>>>> 4093a32b6548efbb626f4429aea10dbf7ec9c942:calc.c
						return 0;
					}
				printf("%f % %f = %f", a, b, a % b);
					break;
	}
				return 0;
}