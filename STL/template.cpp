//#include <iostream>
//
//
//using namespace std;
//
//
//template<typename T>
//class Calculator
//{
//public:
//		T add(T x, T y)
//		{
//			return x + y;
//		}
//		T subtract(T x, T y)
//		{
//			return x - y;
//		}
//
//		T multiply(T x, T y)
//		{
//			return x * y;
//		}
//		T divide(T x, T y)
//		{
//			if (y==0)
//			{
//				cout << "Error: Division by zero!" << endl;
//
//				return 0;
//
//			}
//			return x / y;
//		}
//
//};
//
//
//int main()
//{
//
//	Calculator<int> intCalc;
//	cout << "Integer Cal: " << intCalc.add(5, 3) << endl;
//	cout << "Integer Subtract: " << intCalc.subtract(5, 3) << endl;
//
//
//	Calculator<float> floatCal;
//
//	cout << floatCal.add(4.6, 3.6) << endl;
//	cout << floatCal.subtract(4.6, 3.6) << endl;
//	cout << floatCal.multiply(4.6, 3.6) << endl;
//	cout << floatCal.divide(4.6, 0)<<endl;
//	
//	return 0;
//}