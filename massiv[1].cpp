#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	vector< int > ve = { 2, 4, 6, 8, 10 };
	copy(ve.begin(), ve.end(), std::ostream_iterator< int >(std::cout, " "));
	cout << std::endl;

	int cache = 0;
	for (std::vector< int >::iterator it = ve.begin(); it != ve.end(); it++)
		std::swap(*it, cache);

	copy(ve.begin(), ve.end(), std::ostream_iterator< int >(std::cout, " "));
	cout << std::endl;
	system("pause");
	return 0;
}
