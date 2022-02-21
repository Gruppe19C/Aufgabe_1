#include <iostream>
#include <cmath>
using namespace std;
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{
}

void ComplexNumber::setKartesian(double real, double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
    calculateRadiusAndAngle();
}

void ComplexNumber::setPolar(double radius, double angle)
{
    this->radius = radius;
    this->angle = angle;
    calculateRealAndImaginary();
}

void ComplexNumber::setReal(double real)
{
    this->real = real;
    calculateRadiusAndAngle();
}

void ComplexNumber::setImaginary(double imaginary)
{
    this->imaginary = imaginary;
    calculateRadiusAndAngle();
}

void ComplexNumber::setRadius(double radius)
{
    this->radius = radius;
    calculateRealAndImaginary();
}

void ComplexNumber::setAngle(double angle)
{
    this->angle = angle;
    calculateRealAndImaginary();
}

void ComplexNumber::calculateRadiusAndAngle()
{
    this->radius = sqrt(real * real + imaginary * imaginary);
    this->angle = imaginary >= 0 ? acos(real / radius) : -acos(real / radius);
}

void ComplexNumber::calculateRealAndImaginary()
{
    this->real = radius * cos(angle);
    this->imaginary = radius * sin(angle);
}