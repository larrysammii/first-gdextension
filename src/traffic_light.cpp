#include "godot_cpp/classes/global_constants.hpp"
#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/core/object.hpp"
#include <traffic_light.h>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture_rect.hpp>

void TrafficLight::_bind_methods() {
	godot::ClassDB::bind_method(godot::D_METHOD("set_go_texture", "texture"), &TrafficLight::set_go_texture);
	godot::ClassDB::bind_method(godot::D_METHOD("get_go_texture"), &TrafficLight::get_go_texture);

	godot::ClassDB::bind_method(godot::D_METHOD("set_stop_texture", "texture"), &TrafficLight::set_stop_texture);
	godot::ClassDB::bind_method(godot::D_METHOD("get_stop_texture"), &TrafficLight::get_stop_texture);

	godot::ClassDB::bind_method(godot::D_METHOD("set_caution_texture", "texture"), &TrafficLight::set_caution_texture);
	godot::ClassDB::bind_method(godot::D_METHOD("get_caution_texture"), &TrafficLight::get_caution_texture);

	godot::ClassDB::bind_method(godot::D_METHOD("set_light_type", "type"), &TrafficLight::set_light_type);
	godot::ClassDB::bind_method(godot::D_METHOD("get_light_type"), &TrafficLight::get_light_type);

	ADD_PROPERTY(godot::PropertyInfo(godot::Variant::OBJECT, "go_texture", godot::PROPERTY_HINT_RESOURCE_TYPE, "Texture2D"), "set_go_texture", "get_go_texture");
	ADD_PROPERTY(godot::PropertyInfo(godot::Variant::OBJECT, "stop_texture", godot::PROPERTY_HINT_RESOURCE_TYPE, "Texture2D"), "set_stop_texture", "get_stop_texture");
	ADD_PROPERTY(godot::PropertyInfo(godot::Variant::OBJECT, "caution_texture", godot::PROPERTY_HINT_RESOURCE_TYPE, "Texture2D"), "set_caution_texture", "get_caution_texture");

	ADD_PROPERTY(godot::PropertyInfo(godot::Variant::INT, "light_type", godot::PROPERTY_HINT_ENUM, "Go.Stop.Caution"), "set_light_type", "get_light_type");

	BIND_ENUM_CONSTANT(TrafficLightType::TRAFFIC_LIGHT_GO);
	BIND_ENUM_CONSTANT(TrafficLightType::TRAFFIC_LIGHT_STOP);
	BIND_ENUM_CONSTANT(TrafficLightType::TRAFFIC_LIGHT_CAUTION);
}

TrafficLight::TrafficLight() {
	texture_rect = memnew(godot::TextureRect);
	add_child(texture_rect);
	texture_rect->set_anchors_preset(PRESET_FULL_RECT);
}

void TrafficLight::set_go_texture(const godot::Ref<godot::Texture2D> &p_texture) {
	go_texture = p_texture;
}

godot::Ref<godot::Texture2D> TrafficLight::get_go_texture() const {
	return go_texture;
}

void TrafficLight::set_stop_texture(const godot::Ref<godot::Texture2D> &p_texture) {
	stop_texture = p_texture;
};
godot::Ref<godot::Texture2D> TrafficLight::get_stop_texture() const {
	return stop_texture;
};

void TrafficLight::set_caution_texture(const godot::Ref<godot::Texture2D> &p_texture) {
	caution_texture = p_texture;
};
godot::Ref<godot::Texture2D> TrafficLight::get_caution_texture() const {
	return caution_texture;
};

void TrafficLight::set_light_type(TrafficLightType p_type) {
	light_type = p_type;
};

TrafficLightType TrafficLight::get_light_type() const {
	return light_type;
};

// void TrafficLight::_notification(int p_what){
// 	switch(p_what){
// 	NOTIFICATION_READY:
//
// 	}
// }
