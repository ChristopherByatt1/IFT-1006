// Sphere.h
#ifndef SPHERE_H
#define SPHERE_H

#include <string>

namespace math
{
    class Sphere
    {
    public:
        Sphere(double p_rayon = 0);

        double reqRayon() const;
        double volumeSphere() const;
        std::string reqVolumeFormate() const;

    private:
        double m_rayon;
    };
} // namespace math

#endif // SPHERE_H
