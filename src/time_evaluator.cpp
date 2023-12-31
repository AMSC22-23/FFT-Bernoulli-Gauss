#include <iostream>
#include <time_evaluator.hpp>

using namespace std;
using namespace Typedefs;

 auto time_ev (const vcpx& x, const unique_ptr<FourierTransform>& f) -> long unsigned int
 {
    vcpx x_time = x;
    auto start = chrono::high_resolution_clock::now();
    f->operator()(x_time, false);
    auto stop = chrono::high_resolution_clock::now();
    auto duration1 = chrono::duration_cast<chrono::microseconds>(stop - start);
    return duration1.count();
 }
