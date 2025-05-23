#pragma once

#include "godot_cpp/classes/wrapped.hpp"
#include <godot_cpp/classes/character_body2d.hpp>

using namespace godot;

class MyPlayer : public CharacterBody2D {
	GDCLASS(MyPlayer, CharacterBody2D);

	float speed = 250.0;

protected:
	static void _bind_methods();

public:
	virtual void _physics_process(double p_delta) override;

	void set_speed(float p_speed);
	float get_speed() const;

	MyPlayer();
};
