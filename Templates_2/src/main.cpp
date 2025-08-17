#include <iostream>


//'sum': no matching overloaded function found
template<typename T>
T sum(T t) {
	return t;
}


template<typename ArgOne, typename... Others>
ArgOne sum(ArgOne argOne, Others... others) {
	return argOne + sum(others...);
}

int main() {

	std::cout << sum(1.4, 2, 3.9, 123, 3.5);

}