#include <iostream>
#include <string>
using namespace std;

namespace A
{
	string name = "VLSMB_";
}
namespace B
{
	string name = "CJX_Group";
}

namespace net{
	namespace tcpip {
	int port = 0;
}
}

namespace K {
	namespace L{
		namespace M {
			const char* dog = "dog";
		}
	}
}
int main(void)
{
	using namespace A;
	cout << name << B::name << endl;
	cout << net::tcpip::port<<endl;
	cout << K::L::M::dog << endl;

	return 0;
}