#include <Point.hpp>
#include <Shape.hpp>

class Circle : public Shape {
public:
    explicit Circle(double radius)
        : Shape(circle), radius_(radius) {
        /* Checking that the given radius is valid */
    }

    double radius() const { return radius_; }
    Point center() const { return center_; }

private:
    double radius_;
    Point center_{};
};