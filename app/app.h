#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{

    double operator"" _inch(unsigned long long num);
    double operator"" _eur(unsigned long long eu);

    class product {
        double p;
    public:
        product(double val) : p(val) {};
        double price();
    };


    class vehicle {
        int y;
    public:
        vehicle(int val) : y(val) {};
        int year();
    };

    class tire {
        double d;
    public:
        tire(double val) : d(val) {};
        double diameter();
    };

    class car : public product, public vehicle {
        tire t;
    public:
        car(int y, double p, double d) : vehicle(y), product(p), t(d) {};

        double tire_diameter();
    };


}