#ifndef PhysicsSprite2D_H
#define PhysicsSprite2D_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

// Base class for all sprites that use the 2D space physics engine and are affected by gravity
class PhysicsSprite2D : public Sprite2D {
	GDCLASS(PhysicsSprite2D, Sprite2D)

protected:
	static void _bind_methods();

public:
	PhysicsSprite2D();
	~PhysicsSprite2D();

	void _process(double delta) override;
};

}

#endif