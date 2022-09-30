
#pragma once

#include <ostream>
#include <initializer_list>
#include <cassert>

#include "config.h"



class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector() = default;
    Vector(float a, float b);
    // possibly more

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);
    Vector operator+(const Vector& rhs);
    float operator*(const Vector& rhs);
    Vector operator-(const Vector& rhs);
    float operator[](size_t index) const;
    float& operator[](size_t index);
    // More to go
private:
    float a_;
    float b_;
// Private Member functions here (if necessary)

// Member variables are ALWAYS private, and they go here

};

// Nonmember function operators go here

std::ostream& operator<<(std::ostream& os, const Vector& rhs);
Vector operator*(const Vector& rhs, float lambda);
Vector operator+=(const Vector& rhs, float lambda);
Vector operator*=(const Vector& rhs, float lambda);