[Variables]
PanelHeight=395
ArrowY=168
LabelsQueue=

;---------------------------------------------------------------------
; METERS

;-----------------------
; INDICATOR ARROW

[Arrow]
Meter=IMAGE
MeterStyle=StyleMenuArrow
Y=#ArrowY#

;-----------------------
; WORLD

[PanelName]
Meter=STRING
MeterStyle=StyleName | StyleNameFirst
Text=W  O  R  L  D

[PanelNotes]
Meter=STRING
MeterStyle=StyleNotes | StyleNameFirst
Text=Set the geographical locations displayed by Weather and World.
H=24

;-----------------------

[WeatherCodeName]
Meter=STRING
MeterStyle=StyleName
Text="Weather Location"

[WeatherCodeText]
Meter=STRING
MeterStyle=StyleText
Text="#WeatherCodeName#"
LeftMouseUpAction=[!WriteKeyValue Variables WriteVariable WeatherCode "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!WriteKeyValue Variables FileToWrite "#*@*#WeatherComJSONVariables.inc" "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!WriteKeyValue Variables InputSearch "#WeatherCodeName#" "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!ActivateConfig "#CURRENTCONFIG#\WeatherCodeFinder" "WeatherCodeFinder.ini"]
;RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('WeatherCodeName')"
TooltipTitle="Local TWC Location Name"
TooltipText=Click to find the TWC Weather for your local area.

[LanguageName]
Meter=STRING
MeterStyle=StyleName
Text="Language | Units"

[LanguageText]
Meter=STRING
MeterStyle=StyleText
W=45
Text=#WeatherCodeLanguage#
LeftMouseUpAction=[!CommandMeasure MeasureInputWeather "ExecuteBatch 1"]
TooltipTitle="TWC Language Code. (Ex: en-CA)"
TooltipText=Click to edit options for your weather language.
DynamicVariables=1

[UnitsText]
Meter=STRING
MeterStyle=StyleText
X=R
W=40
Text= | #WeatherCodeUnit#
LeftMouseUpAction=[!CommandMeasure MeasureInputWeather "ExecuteBatch 2"]
TooltipTitle="TWC Units Code. (Ex: e, m, or h)"
TooltipText=Click to edit options for your weather units.
DynamicVariables=1

;-----------------------

[World1WeatherCodeName]
Meter=STRING
MeterStyle=StyleName
Text="1st World Location"

[World1WeatherCodeText]
Meter=STRING
MeterStyle=StyleText
Text="#World1WeatherCodeName#"
LeftMouseUpAction=[!WriteKeyValue Variables WriteVariable World1WeatherCode "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!WriteKeyValue Variables FileToWrite "#*@*#WeatherComJSONVariablesWorld1.inc" "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!WriteKeyValue Variables InputSearch "#World1WeatherCodeName#" "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!ActivateConfig "#CURRENTCONFIG#\WeatherCodeFinder" "WeatherCodeFinder.ini"]
;RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('World1WeatherCodeName')"
TooltipTitle="1st Remote TWC Weather Location"
TooltipText=Click to find the TWC Weather for another city or area of your choosing.
DynamicVariables=1

[LanguageNameWorld1]
Meter=STRING
MeterStyle=StyleName
Text="1st Language | Units"

[LanguageTextWorld1]
Meter=STRING
MeterStyle=StyleText
W=45
Text=#World1WeatherCodeLanguage#
LeftMouseUpAction=[!CommandMeasure MeasureInputWeather "ExecuteBatch 3"]
TooltipTitle="TWC Language Code. (Ex: en-CA)"
TooltipText=Click to edit options for your weather language.
DynamicVariables=1

[UnitsTextWorld1]
Meter=STRING
MeterStyle=StyleText
X=R
W=40
Text= | #World1WeatherCodeUnit#
LeftMouseUpAction=[!CommandMeasure MeasureInputWeather "ExecuteBatch 4"]
TooltipTitle="TWC Units Code. (Ex: e, m, or h)"
TooltipText=Click to edit options for your weather units.
DynamicVariables=1

;-----------------------

[World2WeatherCodeName]
Meter=STRING
MeterStyle=StyleName
Text="2nd World Location"

[World2WeatherCodeText]
Meter=STRING
MeterStyle=StyleText
Text="#World2WeatherCodeName#"
LeftMouseUpAction=[!WriteKeyValue Variables WriteVariable World2WeatherCode "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!WriteKeyValue Variables FileToWrite "#*@*#WeatherComJSONVariablesWorld2.inc" "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!WriteKeyValue Variables InputSearch "#World2WeatherCodeName#" "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!ActivateConfig "#CURRENTCONFIG#\WeatherCodeFinder" "WeatherCodeFinder.ini"]
;RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('World2WeatherCodeName')"
TooltipTitle="2nd Remote TWC Weather Location"
TooltipText=Click to find the TWC Weather for another city or area of your choosing.

[LanguageNameWorld2]
Meter=STRING
MeterStyle=StyleName
Text="2nd Language | Units"

[LanguageTextWorld2]
Meter=STRING
MeterStyle=StyleText
W=45
Text=#World2WeatherCodeLanguage#
LeftMouseUpAction=[!CommandMeasure MeasureInputWeather "ExecuteBatch 5"]
TooltipTitle="TWC Language Code. (Ex: en-CA)"
TooltipText=Click to edit options for your weather language.
DynamicVariables=1

[UnitsTextWorld2]
Meter=STRING
MeterStyle=StyleText
X=R
W=40
Text= | #World2WeatherCodeUnit#
LeftMouseUpAction=[!CommandMeasure MeasureInputWeather "ExecuteBatch 6"]
TooltipTitle="TWC Units Code. (Ex: e, m, or h)"
TooltipText=Click to edit options for your weather units.
DynamicVariables=1

;-----------------------

[World3WeatherCodeName]
Meter=STRING
MeterStyle=StyleName
Text="3rd World Location"

[World3WeatherCodeText]
Meter=STRING
MeterStyle=StyleText
Text="#World3WeatherCodeName#"
LeftMouseUpAction=[!WriteKeyValue Variables WriteVariable World3WeatherCode "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!WriteKeyValue Variables FileToWrite "#*@*#WeatherComJSONVariablesWorld3.inc" "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!WriteKeyValue Variables InputSearch "#World3WeatherCodeName#" "#ROOTCONFIGPATH#Options\WeatherCodeFinder\WeatherCodeFinder.ini"][!ActivateConfig "#CURRENTCONFIG#\WeatherCodeFinder" "WeatherCodeFinder.ini"]
;RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('World3WeatherCodeName')"
TooltipTitle="3rd Remote TWC Weather Location"
TooltipText=Click to find the TWC Weather for another city or area of your choosing.

[LanguageNameWorld3]
Meter=STRING
MeterStyle=StyleName
Text="3rd Language | Units"

[LanguageTextWorld3]
Meter=STRING
MeterStyle=StyleText
W=45
Text=#World3WeatherCodeLanguage#
LeftMouseUpAction=[!CommandMeasure MeasureInputWeather "ExecuteBatch 7"]
TooltipTitle="TWC Language Code. (Ex: en-CA)"
TooltipText=Click to edit options for your weather language.
DynamicVariables=1

[UnitsTextWorld3]
Meter=STRING
MeterStyle=StyleText
X=R
W=40
Text= | #World3WeatherCodeUnit#
LeftMouseUpAction=[!CommandMeasure MeasureInputWeather "ExecuteBatch 8"]
TooltipTitle="TWC Units Code. (Ex: e, m, or h)"
TooltipText=Click to edit options for your weather units.
DynamicVariables=1

;-----------------------

[RestoreDefault]
Meter=STRING
MeterStyle=StyleText | StyleRestoreDefault
Text=Refresh weather skins after editing.