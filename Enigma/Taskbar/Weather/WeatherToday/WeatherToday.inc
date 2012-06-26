;---------------------------------------------------------------------
; MEASURES

@include=#@#Measures\YahooWeather.inc
CurrentCode=#WeatherCode#

;---------------------------------------------------------------------
; METERS

[Background]
Meter=IMAGE
MeterStyle=Style#Variant#Background

[Icon]
Meter=IMAGE
MeterStyle=Style#Variant#Icon | StyleWeather#Variant#Icon
MeasureName=MeasureWeatherDay2Icon

[Temp]
Meter=STRING
MeterStyle=Style#Variant#Text
MeasureName=MeasureWeatherDay2Average
Postfix="�"
LeftMouseUpAction=[[MeasureYahooWeather]]

[Desc]
Meter=STRING
MeasureName=MeasureWeatherDay2Desc
MeterStyle=Style#Variant#Label