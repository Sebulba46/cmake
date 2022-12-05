//
// Created by egors on 10/17/2022.
//


#include <boost/multiprecision/number.hpp>
#include <boost/multiprecision/cpp_int.hpp>

#ifndef UNTITLED_BLAH_H
#define UNTITLED_BLAH_H

#endif //UNTITLED_BLAH_H
#pragma once

class Blah {
public:
    static boost::multiprecision::number<boost::multiprecision::cpp_int_backend<128, 128, boost::multiprecision::signed_magnitude, boost::multiprecision::unchecked, void>>
    boo(long long int first, long long int second);
};
