#include <algorithm>
#include <iterator>
#include <iostream>
#include <random>
#include <vector>
#include <cmath>
using namespace std;
int main()

{
	setlocale(LC_ALL, "RUS");
	default_random_engine gen;
	uniform_int_distribution<> distr(-10,10);
	int vectorSize =15;
	vector <int> vector (vectorSize);
	cout<<"Массив: "<<endl;
	generate (vector.begin(), vector.end(),	
[&distr, &gen]()-> int {return distr(gen);});
	copy(vector.begin(), vector.end(),
ostream_iterator <int>(cout, ""));
	cout<<endl<<"Обратный массив: "<<endl;
	for(auto currNum: vector)
	if(currNum <0)
	replace (vector.begin(), vector.end(),
currNum, abs(currNum));
	reverse_copy(vector.begin(), vector.end(),
ostream_iterator <int> (cout, ""));
	return 0;
}