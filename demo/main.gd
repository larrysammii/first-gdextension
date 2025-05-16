extends Node2D

func _ready() -> void:
	var summator = Summator.new()
	summator.add(999)
	summator.add(10738)
	print(summator.get_total())
	
func _process(delta: float) -> void:
	pass
