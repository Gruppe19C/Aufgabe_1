#ifndef ComplexNumber_h
#define ComplexNumber_h

class ComplexNumber
{
private:
    float real, imaginary;
    float radius, angle;

public:
    ComplexNumber();

    void setKartesian(double real, double imaginary);

    void setPolar(double radius, double angle);

    void setReal(double real);

    void setImaginary(double imaginary);

    void setRadius(double radius);

    void setAngle(double angle);

    float getReal() { return real; }

    float getImaginary() { return imaginary; }

    float getRadius() { return radius; }

    float getAngle() { return angle; }

    void calculateRadiusAndAngle();

    void calculateRealAndImaginary();
};

#endif