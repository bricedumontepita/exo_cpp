
#include <ostream>
#include <initializer_list>
#include <cassert>

#include "vector.hh"


Vector::Vector(float a, float b)
: a_{a}, b_{b} {

}

Vector& Vector::operator+=(const Vector &rhs)
{
    a_ += rhs[0];
    b_ += rhs[1];
    return *this;
}

Vector& Vector::operator-=(const Vector &rhs)
{
    a_ -= rhs[0];
    b_ -= rhs[1];
    return *this;
}

Vector Vector::operator+(const Vector &rhs)
{
    auto u = Vector((*this)[0] + rhs[0], (*this)[1] + rhs[1]);
    return u;
}

float Vector::operator*(const Vector &rhs)
{
    auto n = (*this)[0] * rhs[0] + (*this)[1] * rhs[1];
    return n;
}

Vector Vector::operator-(const Vector &rhs)
{
    auto u = Vector((*this)[0] - rhs[0], (*this)[1] - rhs[1]);
    return u;
}

float Vector::operator[](size_t index) const
{
    assert(index <= 1);
    if (index == 0)
        return a_;
    else
        return b_;
}

float &Vector::operator[](size_t index)
{
    assert(index <= 1);
    if (index == 0)
        return a_;
    else
        return b_;
}


std::ostream& operator<<(std::ostream& os, const Vector& rhs) {
    os << "{" << rhs[0] << ", " << rhs[1] << "}";
    return os;
}

Vector operator*(const Vector& rhs, float lambda) {
    auto u = Vector(rhs[0] * lambda, rhs[1] * lambda);
    return u;
}

Vector operator+=(const Vector& rhs, float lambda) {
    Vector u = rhs;
    u[0] += lambda;
    return u;
}

Vector operator*=(const Vector& rhs, float lambda) {
    Vector u = rhs;
    u[0] *= lambda;
    u[1] *= lambda;
    return u;
}