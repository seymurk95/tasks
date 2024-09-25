#include <iostream>
#include <cmath>


struct Point
{
    int x, y;
};


double dist(const Point& p)
{
    return sqrt(p.x * p.x + p.y * p.y);
}


bool comp(const Point& p1, const Point& p2)
{
    double dist1 = dist(p1);
    double dist2 = dist(p2);
    
    return dist1 < dist2;
}


int main()
{
    Point p1, p2;
    std::cin >> p1.x >> p1.y;
    std::cin >> p2.x >> p2.y;

    if (comp(p1, p2))
    {
        std::cout << p1.x << " " << p1.y << "\n";
        std::cout << p2.x << " " << p2.y << "\n";
    }
    else
    {
        std::cout << p2.x << " " << p2.y << "\n";
        std::cout << p1.x << " " << p1.y << "\n";
    }

    return 0;
}
