extends Node2D

func _ready() -> void:
	var summator = Summator.new()
	summator.add(999)
	summator.add(10738)
	print(summator.get_total())
	
func _process(delta: float) -> void:
	pass


func _on_button_pressed() -> void:
	$TrafficLight.show_next_light()


func _on_traffic_light_light_change(new_light: int) -> void:
	print(new_light)
