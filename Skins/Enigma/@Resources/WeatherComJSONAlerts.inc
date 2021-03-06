; =================================================================================================
; WeatherComJSONAlerts.inc by JSMorley
; "Weather.com - Parsing the JSON" (https://forum.rainmeter.net/viewtopic.php?f=118&t=34628)
;
; Requires that WeatherComJSONVariables.inc and WeatherComJSONMeasures.inc
; be @Included in the skin before this file.
;
; Updated August 2, 2020
; ==================================================================================================

[@AlertsParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
LogSubstringErrors=0
StringIndex=1
RegExp=(?siU)"v3alertsHeadlines":(?(?=.*{.*,"alerts":).*{.*,"alerts":.*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*)

[@Alert1Description]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
DynamicVariables=1

[@Alert1SeverityCode]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=2
Substitute=#CommonSubstitute#

[@Alert1Severity]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=3
Substitute=#CommonSubstitute#

[@Alert1Text]
Measure=WebParser
Url=[@AlertsParent]
DecodeCharacterReference=1
StringIndex=4
Substitute=#CommonSubstitute#

[@Alert2Description]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=5
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
DynamicVariables=1

[@Alert2SeverityCode]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=6
Substitute=#CommonSubstitute#

[@Alert2Severity]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=7
Substitute=#CommonSubstitute#

[@Alert2Text]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=8
DecodeCharacterReference=1
Substitute=#CommonSubstitute#

[@Alert3Description]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=9
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
DynamicVariables=1

[@Alert3SeverityCode]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=10
Substitute=#CommonSubstitute#

[@Alert3Severity]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=11
Substitute=#CommonSubstitute#

[@Alert3Text]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=12
DecodeCharacterReference=1
Substitute=#CommonSubstitute#

[@Alert4Description]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=13
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
DynamicVariables=1

[@Alert4SeverityCode]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=14
Substitute=#CommonSubstitute#

[@Alert4Severity]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=15
Substitute=#CommonSubstitute#

[@Alert4Text]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=16
DecodeCharacterReference=1
Substitute=#CommonSubstitute#

[@Alert5Description]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=17
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
DynamicVariables=1

[@Alert5SeverityCode]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=18
Substitute=#CommonSubstitute#

[@Alert5Severity]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=19
Substitute=#CommonSubstitute#

[@Alert5Text]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=20
DecodeCharacterReference=1
Substitute=#CommonSubstitute#

[@Alert6Description]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=21
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
DynamicVariables=1

[@Alert6SeverityCode]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=22
Substitute=#CommonSubstitute#

[@Alert6Severity]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=23
Substitute=#CommonSubstitute#

[@Alert6Text]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=24
DecodeCharacterReference=1
Substitute=#CommonSubstitute#

[@Alert7Description]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=25
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
DynamicVariables=1

[@Alert7SeverityCode]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=26
Substitute=#CommonSubstitute#

[@Alert7Severity]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=27
Substitute=#CommonSubstitute#

[@Alert7Text]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=28
DecodeCharacterReference=1
Substitute=#CommonSubstitute#

[@Alert8Description]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=29
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
DynamicVariables=1

[@Alert8SeverityCode]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=30
Substitute=#CommonSubstitute#

[@Alert8Severity]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=31
Substitute=#CommonSubstitute#

[@Alert8Text]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=32
DecodeCharacterReference=1
Substitute=#CommonSubstitute#
