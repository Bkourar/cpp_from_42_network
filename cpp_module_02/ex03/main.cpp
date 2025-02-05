#include "Point.hpp"


bool bsp( Point const a, Point const b, Point const c, Point const point) {

    
    float OrginalDistance = 0.5f * absolute((a.getX() * (b.getY()- c.getY())) + (b.getX() * (a.getY()- c.getY())) + (c.getX() * (a.getY()- b.getY())));
    float d1 = 0.5f * absolute((point.getX() * (a.getY()- b.getY())) + (a.getX() * (b.getY()- point.getY())) + (b.getX() * (point.getY()- a.getY())));
    float d2 = 0.5f * absolute((point.getX() * (a.getY()- c.getY())) + (a.getX() * (c.getY()- point.getY())) + (c.getX() * (point.getY()- a.getY())));
    float d3 = 0.5f * absolute((point.getX() * (b.getY()- c.getY())) + (b.getX() * (c.getY()- point.getY())) + (c.getX() * (point.getY()- b.getY())));
    
    
    Fixed OrginalDis(OrginalDistance);
    Fixed dis1(d1);
    Fixed dis2(d2);
    Fixed dis3(d3);

    if (dis1 + dis2 + dis3 >= OrginalDis)
        return false;
    return true;
}

int main (void) {
    Point a(0.1, 0.5);
    Point b(0.4, 0.3);
    Point c(0, 0.1);
    Point point(0.1, 0.4);
    bool logic = bsp(a, b, c, point);
    if (logic == true)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
    return 0;
}
