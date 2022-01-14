#include <algorithm>
#include <iterator>
#include <iostream>
#include <random>
#include <vector>
#include <cmath>
 
int main ()
{
    std::default_random_engine gen;
    std::uniform_int_distribution <> distr(-10, 10);
 
    int vectorSize = 15;
    std::vector <int> vector (vectorSize);
    std::cout << "Vector: " << std::endl;
    std::generate(vector.begin(), vector.end(), [&distr, &gen] () -> int {
        return distr(gen);
    });
    std::copy(vector.begin(), vector.end(), std::ostream_iterator <int> (std::cout, " "));
 
    std::cout << std::endl << "Vector: " << std::endl;
    for (auto currNum: vector)
        if (currNum < 0)
            std::replace(vector.begin(), vector.end(), currNum, abs(currNum));
    std::reverse_copy(vector.begin(), vector.end(), std::ostream_iterator <int> (std::cout, " "));
 
    return 0;
}