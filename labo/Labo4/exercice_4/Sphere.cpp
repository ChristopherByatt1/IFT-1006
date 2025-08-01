// Sphere.cpp

#include "Sphere.h"
#include <cmath>        // pour M_PI et pow
#include <sstream>      // pour std::ostringstream
#include <iomanip>      // pour std::setprecision et std::fixed
#include <iostream>

namespace math
{

    Sphere::Sphere(double p_rayon)
        : m_rayon(p_rayon)
    {
    }

    double Sphere::reqRayon() const
    {
        return m_rayon;
    }

    double Sphere::volumeSphere() const
    {
        return (4.0 / 3.0) * M_PI * std::pow(m_rayon, 3);
    }

    std::string Sphere::reqVolumeFormate() const
    {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(2) << volumeSphere();
        return oss.str();
    }

} // namespace math
int main()
{
    math::Sphere s(3.0);
    std::cout << "Rayon : " << s.reqRayon() << std::endl;
    std::cout << "Volume : " << s.volumeSphere() << std::endl;
    std::cout << "Volume formaté : " << s.reqVolumeFormate() << std::endl;
    return 0;
}