module;
#include <cmath>
module Dubencikova_1bik20056:A;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task4 {
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task4::a(long long i) {
	return (i % 2 ? -1 : 1) * (i + 1) / double(pow(2, i - 1));
};