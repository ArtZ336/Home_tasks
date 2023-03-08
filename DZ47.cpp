class Area
{
public:
    virtual int area() = 0;
};

class Rectangle : public Area
{
private:
    int a;
    int b;

public:
    Rectangle(int a, int b) : a(a), b(b) {};

    int area() override
    {
        return this->a * this->b;
    }
};

class Circle : public Area
{
private:
    int r;

public:
    Circle(int r) : r(r) {};

    int area() override
    {
        return this->r * this->r * 3.14;
    }
};

class Triangle : public Area
{
private:
    int h;
    int hypotenuse;

public:
    Triangle(int h, int hypotenuse) : h(h), hypotenuse(hypotenuse) {}

    int area() override
    {
        return (h * hypotenuse) / 2;
    }
};

class Trapezoid : public Area
{
private:
    int m;
    int h;

public:
    Trapezoid(int m, int h) : m(m), h(h) {}

    int area() override
    {
        return this->m * this->h;
    }
};
