
#include <ostream>
#include <initializer_list>
#include <cassert>
#include <string>
#include <cstring>
#include <iterator>
#include <iostream>
#include <vector>
#include <initializer_list>
#include "vector.hh"

Vector& Vector::operator=(const Vector& v) {
    size_ = v.size();
    for (size_t i = 0; i < size_; i++)
    {
        coords_[i] = v[i];
    }
    return *this;
}

Vector::Vector(const Vector& v) {
    size_ = v.size();
    coords_ = std::make_unique<value[]>(size_);
    for (size_t i = 0; i < size_; i++)
    {
        coords_[i] = v[i];
    }
}

Vector::Vector(size_t N) {
    size_ = N;
    coords_ = std::make_unique<value[]>(N);
    for (size_t i = 0; i < N; i++)
    {
        coords_[i] = 0;
    }
}

Vector::Vector(std::initializer_list<value> l)
{
    size_ = l.size();
    coords_ = std::make_unique<value[]>(size_);
    size_t index = 0;
    std::initializer_list<value>::iterator it;
    for (it = l.begin(); it != l.end(); ++it)
    {
        coords_[index++] = *it;
    }
}

size_t Vector::size() const {
    return size_;
}

Vector& Vector::operator+=(const Vector &rhs)
{
    assert(size_ == rhs.size());
    for (size_t i = 0; i < rhs.size(); i++) {
        coords_[i] += rhs[i];
    }
    return *this;
}

Vector& Vector::operator-=(const Vector &rhs)
{
    assert(size_ == rhs.size());
    for (size_t i = 0; i < rhs.size(); i++) {
        coords_[i] -= rhs[i];
    }
    return *this;
}

Vector& Vector::operator+=(value lambda)
{
    for (size_t i = 0; i < size_; i++) {
        coords_[i] += lambda;
    }
    return *this;
}

Vector& Vector::operator*=(value lambda)
{
    for (size_t i = 0; i < size_; i++) {
        coords_[i] *= lambda;
    }
    return *this;
}

Vector Vector::operator+(const Vector &rhs) const
{
    assert(size_ == rhs.size());
    auto u = Vector(size_);
    for (size_t i = 0; i < size_; i++) {
        u[i] = rhs[i] + (*this)[i];
    }
    return u;
}

Vector Vector::operator+(value v) const
{
    auto u = Vector(size_);
    for (size_t i = 0; i < size_; i++) {
        u[i] = (*this)[i] + v;
    }
    return u;
}

/*
Vector Vector::operator-(const Vector &rhs) const
{
    assert(size_ == rhs.size());
    auto u = Vector(size_);
    for (size_t i = 0; i < size_; i++) {
        u[i] = (*this)[i] - rhs[i];
    }
    return u;
}*/

value Vector::operator*(const Vector &rhs) const
{
    assert(size_ == rhs.size());
    value n = 0;
    for (size_t i = 0; i < size_; i++) {
        n += rhs[i] * (*this)[i];
    }
    return n;
}

Vector Vector::operator*(value v) const
{
    auto u = Vector(size_);
    for (size_t i = 0; i < size_; i++) {
        u[i] = (*this)[i] * v;
    }
    return u;
}

value Vector::operator[](size_t index) const
{
    assert(index < size_);
    return coords_[index];
}

value &Vector::operator[](size_t index)
{
    assert(index < size_);
    return coords_[index];
}

std::ostream& operator<<(std::ostream &os, const Vector &rhs)
{
    os << "{";
    
    for (size_t i = 0; i < rhs.size(); i++)
    {
        os << rhs[i] << (i < rhs.size() - 1 ? "," : "");
    }
    os << "}";
    return os;
}

Vector operator*(const value& s, const Vector& v) {
    auto u = Vector(v.size());
    for (size_t i = 0; i < v.size(); i++) {
        u[i] = v[i] * s;
    }
    return u;
}

Vector operator+(const value& s, const Vector& v) {
    auto u = Vector(v.size());
    for (size_t i = 0; i < v.size(); i++) {
        u[i] = v[i] + s;
    }
    return u;
}