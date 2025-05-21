extends TrafficLight

func _get_next_light(current_light: TrafficLightType) -> TrafficLightType:
	if current_light == TrafficLightType.TRAFFIC_LIGHT_CAUTION:
		return TrafficLightType.TRAFFIC_LIGHT_STOP
	if current_light == TrafficLightType.TRAFFIC_LIGHT_GO:
		return TrafficLightType.TRAFFIC_LIGHT_CAUTION
	if current_light == TrafficLightType.TRAFFIC_LIGHT_STOP:
		return TrafficLightType.TRAFFIC_LIGHT_GO
	return TrafficLightType.TRAFFIC_LIGHT_STOP
