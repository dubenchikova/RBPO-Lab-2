module;
#include <cmath>

module Dubencikova_1bik20056;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task2 {
				double f1(double, double);
				double f2(double);
				double f3(unsigned long long);
				double f4(double);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task2::f1(double x, double y) {
	return (cos(x) - cos(y)) * (cos(x) - cos(y)) - (sin(x) - (-1) * sin(y)) * (sin(x) - (-1) * sin(y));
};

double RBPO::Lab2::Variant15::Task2::f2(double x) {
	if (x > 3.6)
		return 45 * x * x + 5;
	return 5 * x / (10 * x * x + 1);
};

double RBPO::Lab2::Variant15::Task2::f3(unsigned long long n) {
	double sum = a(0); unsigned long long i = 0;
	while (i < n)
		sum += a(++i);
	return sum;
};

double RBPO::Lab2::Variant15::Task2::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); unsigned long long i = 2;
	while (eps < abs(temp - temp1))
		sum += temp, temp = temp1, temp1 = a(++i);
	return sum;
};


double RBPO::Lab2::Variant15::Task2::a(long long i) {
	return (i % 2 ? -1 : 1) * (i + 1) / double(pow(2, i - 1));
};