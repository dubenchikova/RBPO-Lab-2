module Dubencikova_1bik20056:F2;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task4 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task4::f2(double x) {
	return x > 3.6 ? 45 * x * x + 5 : 5 * x / (10 * x * x + 1);
};