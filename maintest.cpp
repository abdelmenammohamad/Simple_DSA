#include "men3amDSA.h"


int main() {


	auto st=StaticStack<int>(10);
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	std::cout << st.pop() << "xxxxx";
	st.show();

}