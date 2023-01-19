#pragma once


template<class T1, class T2>
class Calculator
{
public:
	Calculator(T1 x, T2 y) : _x(x), _y(y) {}

	T2 sum(T1 x, T2 y) {

		return x + y;

	}

	T2 subtract(T1 x, T2 y) {                       //throw
		if (x < y) {
			throw " x less then y";
		}
		return x - y;

	}

	T2 multiply(T1 x, T2 y) {
		return x * y;
	}

	T2 divide(T1 x, T2 y) {
		if (y == 0) {
			throw " y = 0. Cant divide by zero";
		}
		return x / y;
	}


private:
	T1 _x;
	T2 _y;


};