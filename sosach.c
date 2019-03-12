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
double end()
{
	return 0;
}
{
	/*
	@param double a,double b
	@return a+b
	@example функция возвращает сумму чисел а и b
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
	@example функция возвращает разность чисел а и b
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
	@example функция возвращает произведение чисела а на b,где а число, а b-это во сколько раз надо сложить это число
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
	@example функция возвращает деление числа а на число b,в котором число а-делимое, а b-делитель
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
	@example функция возвращает остаток от деления a на b
	@throws
	*/
	double rod(double a, double b, int error) {
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
	@return функция возвращает сумму и произведение
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
	@example функция возвращает значение квадратного корня из а
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
		case "%": rod(a, b);
			break;
		case "E":end();
			break;
		default:
			return 0;
			break;
		}
	}
}