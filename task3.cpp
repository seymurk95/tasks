#include <iostream>
#include <cmath>
#include <utility>

struct Point
{
    int x,y;
};


double dist(const Point& p)
{
    return sqrt(p.x * p.x + p.y * p.y);
}


std::pair<Point,Point> comp(const Point& p1, const Point& p2)
{
    double dist1=dist(p1);
    double dist2=dist(p2);
    if(dist1 > dist2)
    {
        return {p2,p1};
    }
    else
    {
        return {p1,p2};
    }
    
}


int main()
{
    Point p1;
    Point p2;
    std::cin>>p1.x>>p1.y;
    std::cin>>p2.x>>p2.y;
    auto[closer,farther]=comp(p1,p2);
    std::cout<<closer.x<<" "<<closer.y<<"\n";
    std::cout<<farther.x<<" "<<farther.y<<"\n";
	return 0;
}