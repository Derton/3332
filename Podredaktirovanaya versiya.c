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
	double div(double a, double b,int error)
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
	 double ROD(double a, double b, int error) {
		 if (0 == b) {
			 error = 1;
			 return 0;
		 }
		 return a % b;
	 }
}
double arif_progr(double a, double b)
{
	/*
	@param double a,double b
	@return функция возвращает сумму и произведение
	@example
	@throws
	*/

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