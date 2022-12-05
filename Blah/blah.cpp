//
// Created by egors on 10/17/2022.
//
#include "blah.h"
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;


number<boost::multiprecision::backends::cpp_int_backend<128, 128, signed_magnitude, unchecked, void>> Blah::boo(long long int first, long long int second) {

    int128_t prod = (int128_t) first * second;

    return prod;
}