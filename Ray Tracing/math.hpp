#ifndef MATH_HPP
#define MATH_HPP

#include <memory>
#include <cmath>
#include <limits>
#include <cstdlib>

// Usings
using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions
inline double degrees_to_radians(double degrees) {
	return degrees * pi / 180.0;
}

// // Common Headers
// #include "ray.hpp"
// #include "vec3.hpp"

// Random number generator
inline double random_double() {
	// random real in [0,1)
	return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
	// random real in [min,max)
	return min + (max - min) * random_double();
}

inline double clamp(double x, double min, double max) {
	if (x < min) return min;
	if (x > max) return max;
	return x;
}

#endif // !MATH_H
