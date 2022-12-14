#ifndef HITTABLE_HPP
#define HITTABLE_HPP

#include "ray.hpp"

struct hit_record {
	point3 p;
	vec3 normal;
	double t;
	bool front_face;

	inline void set_face_normal(const ray& r, const vec3& outward_normal) {
		// if dot is negative, the ray is outside the sphere
		front_face = dot(r.direction(), outward_normal) < 0;
		normal = front_face ? outward_normal : -outward_normal;
	}
};

class hittable {
public:
	virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const = 0;
};
#endif // !HITTABLE_H
