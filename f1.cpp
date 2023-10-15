module;
#include <cmath>

module Dubencikova_1bik20056;

namespace RBPO {
	namespace Lab2 {
		namespace Variant9 {
			namespace Task3 {
				double f1(double, double);
			};
		};
	};
};

double RBPO::Lab2::Variant9::Task3::f1(double x, double y) {
	return (cos(x) - cos(y)) * (cos(x) - cos(y)) - (sin(x) - (-1) * sin(y)) * (sin(x) - (-1) * sin(y));
};
