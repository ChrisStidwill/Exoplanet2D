#ifndef GravitySprite2D_H
#define GravitySprite2D_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

// Interface for classes that provide gravity via the physics engine
class GravitySprite2D : public Sprite2D {
	GDCLASS(GravitySprite2D, Sprite2D)

protected:
	static void _bind_methods();

public:
	GravitySprite2D();
	~GravitySprite2D();

	void _process(double delta) override;
};

}

#endif