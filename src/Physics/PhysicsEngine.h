#ifndef PHYSICSENGINE_H
#define PHYSICSENGINE_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class PhysicsEngine : public Sprite2D {
	GDCLASS(PhysicsEngine, Sprite2D)

private:

protected:
	static void _bind_methods();

public:
	PhysicsEngine();
	~PhysicsEngine();

	void _process(double delta) override;
};

}

#endif