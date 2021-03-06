;---------------------------------------------------------------------
; MEASURES

[MeasureUTC]
Measure=Time
TimeZone=0

[MeasureUNIX]
Measure=Calc
Formula=MeasureUTC-11644473600

[MeasureTimeZone]
Group=Time
Measure=String
String=[@CurrentObservationTimeStamp]
RegExpSubstitute=1
Substitute="\d\d\d\d-\d\d-\d\dT\d\d:\d\d:\d\d(.*)$":"\1"
DynamicVariables=1
Disabled=1

[MeasureTime]
Group=Time
Measure=Time
TimeStamp=((([MeasureTimeZone]-0)*36)+[MeasureUTC:TimeStamp])
DynamicVariables=1
DaylightSavingTime=0
Disabled=1

[MeasureReal1]
Group=Time
Measure=Time
TimeStamp=((([MeasureTimeZone]-0)*36)+[MeasureUTC:TimeStamp])
DynamicVariables=1
Format="%H:%M:%S"
DaylightSavingTime=0
Disabled=1

[MeasureReal2]
Group=Time
Measure=Time
TimeStamp=((([MeasureTimeZone]-0)*36)+[MeasureUTC:TimeStamp])
DynamicVariables=1
Format="  |  %a %#d %b  |  %Y"
DaylightSavingTime=0
Disabled=1

;---------------------------------------------------------------------
; METERS

[Background]
Meter=IMAGE
MeterStyle=StyleSidebarBackground | StyleWorldBackground

[Texture]
Meter=IMAGE
MeterStyle=StyleWorldTexture

[Border]
Meter=IMAGE
MeterStyle=StyleWorldBorder

[Border2]
Meter=IMAGE
MeterStyle=StyleWorldBorder2

;-----------------------
; CLOCK

[Clock]
Meter=IMAGE
MeterStyle=StyleWorldClock

[Seconds]
Meter=ROUNDLINE
MeterStyle=StyleWorldSeconds
MeasureName=MeasureTime

[Hours]
Meter=ROUNDLINE
MeterStyle=StyleWorldSeconds | StyleWorldHours
MeasureName=MeasureTime

[Minutes]
Meter=ROUNDLINE
MeterStyle=StyleWorldSeconds | StyleWorldMinutes
MeasureName=MeasureTime

;-----------------------
; TEXT

[City]
Meter=STRING
MeterStyle=StyleWorldCity
MeasureName=@LocationName

[LatLon]
Meter=STRING
MeterStyle=StyleWorldLatLon
MeasureName=@LocationLatitude
MeasureName2=@LocationLongitude
Text="%1, %2"

[Digital2]
Meter=STRING
MeterStyle=StyleWorldDigital2
MeasureName=MeasureReal2
StringCase=UPPER

;-------------------------
; TEXT 2 and WEATHER

[Icon]
Meter=IMAGE
MeterStyle=StyleWorldIcon
MeasureName=@CurrentIcon

[Text]
Meter=STRING
MeterStyle=StyleWorldText
MeasureName=@CurrentTemperature
MeasureName2=@CurrentConditions
Text="%1° | %2"
LeftMouseUpAction=["https://weather.com/weather/today/l/#Latitude#,#Longitude#"]

[Digital]
Meter=STRING
MeterStyle=StyleWorldDigital
MeasureName=MeasureReal1
StringCase=UPPER
