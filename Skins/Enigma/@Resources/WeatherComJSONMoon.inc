; ==========================================================================
; Requires that WeatherComJSONVariables.inc and WeatherComJSONMeasures.inc
; be @Included in the skin before this file.
;
; Icons in #@#Images\MoonPhase are:
; New Moon :        N.png
; Waning Crescent : WNC.png
; Last Quarter :    LQ.png
; Waning Gibbous :  WNG.png
; Full Moon :       F.png
; Waxing Gibbous :  WXG.png
; First Quarter :   FQ.png
; Waxing Crescent : WXC.png
;
; WeatherComJSONMoon.inc by JSMorley
; from "Weather.com - Parsing the JSON" (https://forum.rainmeter.net/viewtopic.php?f=118&t=34628)
;
; JSON V3 modifications by OnyxBlack
;
; Updated July 31, 2020
; ==========================================================================

; ========================================
; Day 1
; ========================================

[@MoonDay1Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){0}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){0}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){0}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){0}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){0}(".*")(?:,|\]).*

[@MoonDay1PhaseName]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay1PhaseIcon]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay1PhaseDay]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay1RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay1RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay1RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay1RiseTime TimeStamp "[*@MoonDay1RiseTimeStamp*]"][!SetOption @MoonDay1RiseTime Format "#TimeFormat#"]

[@MoonDay1RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay1RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay1SetTimeStamp]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay1SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay1SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay1SetTime TimeStamp "[*@MoonDay1SetTimeStamp*]"][!SetOption @MoonDay1SetTime Format "#TimeFormat#"]

[@MoonDay1SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay1SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 2
; ========================================

[@MoonDay2Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){1}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){1}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){1}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){1}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){1}(".*")(?:,|\]).*

[@MoonDay2PhaseName]
Measure=WebParser
URL=[@MoonDay2Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay2PhaseIcon]
Measure=WebParser
URL=[@MoonDay2Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay2PhaseDay]
Measure=WebParser
URL=[@MoonDay2Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay2RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay2Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay2RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay2RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay2RiseTime TimeStamp "[*@MoonDay2RiseTimeStamp*]"][!SetOption @MoonDay2RiseTime Format "#TimeFormat#"]

[@MoonDay2RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay2RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay2SetTimeStamp]
Measure=WebParser
URL=[@MoonDay2Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay2SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay2SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay2SetTime TimeStamp "[*@MoonDay2SetTimeStamp*]"][!SetOption @MoonDay2SetTime Format "#TimeFormat#"]

[@MoonDay2SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay2SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 3
; ========================================

[@MoonDay3Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){2}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){2}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){2}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){2}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){2}(".*")(?:,|\]).*

[@MoonDay3PhaseName]
Measure=WebParser
URL=[@MoonDay3Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay3PhaseIcon]
Measure=WebParser
URL=[@MoonDay3Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay3PhaseDay]
Measure=WebParser
URL=[@MoonDay3Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay3RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay3Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay3RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay3RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay3RiseTime TimeStamp "[*@MoonDay3RiseTimeStamp*]"][!SetOption @MoonDay3RiseTime Format "#TimeFormat#"]

[@MoonDay3RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay3RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay3SetTimeStamp]
Measure=WebParser
URL=[@MoonDay3Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay3SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay3SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay3SetTime TimeStamp "[*@MoonDay3SetTimeStamp*]"][!SetOption @MoonDay3SetTime Format "#TimeFormat#"]

[@MoonDay3SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay3SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 4
; ========================================

[@MoonDay4Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){3}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){3}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){3}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){3}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){3}(".*")(?:,|\]).*

[@MoonDay4PhaseName]
Measure=WebParser
URL=[@MoonDay4Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay4PhaseIcon]
Measure=WebParser
URL=[@MoonDay4Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay4PhaseDay]
Measure=WebParser
URL=[@MoonDay4Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay4RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay4Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay4RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay4RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay4RiseTime TimeStamp "[*@MoonDay4RiseTimeStamp*]"][!SetOption @MoonDay4RiseTime Format "#TimeFormat#"]

[@MoonDay4RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay4RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay4SetTimeStamp]
Measure=WebParser
URL=[@MoonDay4Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay4SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay4SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay4SetTime TimeStamp "[*@MoonDay4SetTimeStamp*]"][!SetOption @MoonDay4SetTime Format "#TimeFormat#"]

[@MoonDay4SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay4SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 5
; ========================================

[@MoonDay5Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){4}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){4}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){4}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){4}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){4}(".*")(?:,|\]).*

[@MoonDay5PhaseName]
Measure=WebParser
URL=[@MoonDay5Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay5PhaseIcon]
Measure=WebParser
URL=[@MoonDay5Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay5PhaseDay]
Measure=WebParser
URL=[@MoonDay5Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay5RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay5Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay5RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay5RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay5RiseTime TimeStamp "[*@MoonDay5RiseTimeStamp*]"][!SetOption @MoonDay5RiseTime Format "#TimeFormat#"]

[@MoonDay5RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay5RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay5SetTimeStamp]
Measure=WebParser
URL=[@MoonDay5Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay5SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay5SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay5SetTime TimeStamp "[*@MoonDay5SetTimeStamp*]"][!SetOption @MoonDay5SetTime Format "#TimeFormat#"]

[@MoonDay5SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay5SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 6
; ========================================

[@MoonDay6Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){5}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){5}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){5}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){5}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){5}(".*")(?:,|\]).*

[@MoonDay6PhaseName]
Measure=WebParser
URL=[@MoonDay6Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay6PhaseIcon]
Measure=WebParser
URL=[@MoonDay6Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay6PhaseDay]
Measure=WebParser
URL=[@MoonDay6Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay6RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay6Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay6RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay6RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay6RiseTime TimeStamp "[*@MoonDay6RiseTimeStamp*]"][!SetOption @MoonDay6RiseTime Format "#TimeFormat#"]

[@MoonDay6RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay6RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay6SetTimeStamp]
Measure=WebParser
URL=[@MoonDay6Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay6SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay6SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay6SetTime TimeStamp "[*@MoonDay6SetTimeStamp*]"][!SetOption @MoonDay6SetTime Format "#TimeFormat#"]

[@MoonDay6SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay6SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 7
; ========================================

[@MoonDay7Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){6}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){6}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){6}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){6}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){6}(".*")(?:,|\]).*

[@MoonDay7PhaseName]
Measure=WebParser
URL=[@MoonDay7Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay7PhaseIcon]
Measure=WebParser
URL=[@MoonDay7Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay7PhaseDay]
Measure=WebParser
URL=[@MoonDay7Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay7RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay7Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay7RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay7RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay7RiseTime TimeStamp "[*@MoonDay7RiseTimeStamp*]"][!SetOption @MoonDay7RiseTime Format "#TimeFormat#"]

[@MoonDay7RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay7RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay7SetTimeStamp]
Measure=WebParser
URL=[@MoonDay7Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay7SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay7SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay7SetTime TimeStamp "[*@MoonDay7SetTimeStamp*]"][!SetOption @MoonDay7SetTime Format "#TimeFormat#"]

[@MoonDay7SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay7SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 8
; ========================================

[@MoonDay8Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){7}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){7}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){7}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){7}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){7}(".*")(?:,|\]).*

[@MoonDay8PhaseName]
Measure=WebParser
URL=[@MoonDay8Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay8PhaseIcon]
Measure=WebParser
URL=[@MoonDay8Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay8PhaseDay]
Measure=WebParser
URL=[@MoonDay8Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay8RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay8Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay8RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay8RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay8RiseTime TimeStamp "[*@MoonDay8RiseTimeStamp*]"][!SetOption @MoonDay8RiseTime Format "#TimeFormat#"]

[@MoonDay8RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay8RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay8SetTimeStamp]
Measure=WebParser
URL=[@MoonDay8Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay8SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay8SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay8SetTime TimeStamp "[*@MoonDay8SetTimeStamp*]"][!SetOption @MoonDay8SetTime Format "#TimeFormat#"]

[@MoonDay8SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay8SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 9
; ========================================

[@MoonDay9Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){8}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){8}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){8}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){8}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){8}(".*")(?:,|\]).*

[@MoonDay9PhaseName]
Measure=WebParser
URL=[@MoonDay9Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay9PhaseIcon]
Measure=WebParser
URL=[@MoonDay9Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay9PhaseDay]
Measure=WebParser
URL=[@MoonDay9Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay9RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay9Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay9RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay9RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay9RiseTime TimeStamp "[*@MoonDay9RiseTimeStamp*]"][!SetOption @MoonDay9RiseTime Format "#TimeFormat#"]

[@MoonDay9RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay9RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay9SetTimeStamp]
Measure=WebParser
URL=[@MoonDay9Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay9SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay9SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay9SetTime TimeStamp "[*@MoonDay9SetTimeStamp*]"][!SetOption @MoonDay9SetTime Format "#TimeFormat#"]

[@MoonDay9SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay9SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 10
; ========================================

[@MoonDay10Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){9}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){9}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){9}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){9}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){9}(".*")(?:,|\]).*

[@MoonDay10PhaseName]
Measure=WebParser
URL=[@MoonDay10Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay10PhaseIcon]
Measure=WebParser
URL=[@MoonDay10Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay10PhaseDay]
Measure=WebParser
URL=[@MoonDay10Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay10RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay10Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay10RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay10RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay10RiseTime TimeStamp "[*@MoonDay10RiseTimeStamp*]"][!SetOption @MoonDay10RiseTime Format "#TimeFormat#"]

[@MoonDay10RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay10RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay10SetTimeStamp]
Measure=WebParser
URL=[@MoonDay10Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay10SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay10SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay10SetTime TimeStamp "[*@MoonDay10SetTimeStamp*]"][!SetOption @MoonDay10SetTime Format "#TimeFormat#"]

[@MoonDay10SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay10SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 11
; ========================================

[@MoonDay11Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){10}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){10}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){10}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){10}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){10}(".*")(?:,|\]).*

[@MoonDay11PhaseName]
Measure=WebParser
URL=[@MoonDay11Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay11PhaseIcon]
Measure=WebParser
URL=[@MoonDay11Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay11PhaseDay]
Measure=WebParser
URL=[@MoonDay11Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay11RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay11Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay11RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay11RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay11RiseTime TimeStamp "[*@MoonDay11RiseTimeStamp*]"][!SetOption @MoonDay11RiseTime Format "#TimeFormat#"]

[@MoonDay11RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay11RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay11SetTimeStamp]
Measure=WebParser
URL=[@MoonDay11Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay11SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay11SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay11SetTime TimeStamp "[*@MoonDay11SetTimeStamp*]"][!SetOption @MoonDay11SetTime Format "#TimeFormat#"]

[@MoonDay11SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay11SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 12
; ========================================

[@MoonDay12Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){11}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){11}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){11}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){11}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){11}(".*")(?:,|\]).*

[@MoonDay12PhaseName]
Measure=WebParser
URL=[@MoonDay12Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay12PhaseIcon]
Measure=WebParser
URL=[@MoonDay12Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay12PhaseDay]
Measure=WebParser
URL=[@MoonDay12Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay12RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay12Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay12RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay12RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay12RiseTime TimeStamp "[*@MoonDay12RiseTimeStamp*]"][!SetOption @MoonDay12RiseTime Format "#TimeFormat#"]

[@MoonDay12RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay12RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay12SetTimeStamp]
Measure=WebParser
URL=[@MoonDay12Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay12SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay12SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay12SetTime TimeStamp "[*@MoonDay12SetTimeStamp*]"][!SetOption @MoonDay12SetTime Format "#TimeFormat#"]

[@MoonDay12SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay12SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 13
; ========================================

[@MoonDay13Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){12}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){12}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){12}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){12}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){12}(".*")(?:,|\]).*

[@MoonDay13PhaseName]
Measure=WebParser
URL=[@MoonDay13Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay13PhaseIcon]
Measure=WebParser
URL=[@MoonDay13Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay13PhaseDay]
Measure=WebParser
URL=[@MoonDay13Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay13RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay13Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay13RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay13RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay13RiseTime TimeStamp "[*@MoonDay13RiseTimeStamp*]"][!SetOption @MoonDay13RiseTime Format "#TimeFormat#"]

[@MoonDay13RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay13RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay13SetTimeStamp]
Measure=WebParser
URL=[@MoonDay13Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay13SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay13SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay13SetTime TimeStamp "[*@MoonDay13SetTimeStamp*]"][!SetOption @MoonDay13SetTime Format "#TimeFormat#"]

[@MoonDay13SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay13SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 14
; ========================================

[@MoonDay14Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){13}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){13}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){13}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){13}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){13}(".*")(?:,|\]).*

[@MoonDay14PhaseName]
Measure=WebParser
URL=[@MoonDay14Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay14PhaseIcon]
Measure=WebParser
URL=[@MoonDay14Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay14PhaseDay]
Measure=WebParser
URL=[@MoonDay14Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay14RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay14Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay14RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay14RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay14RiseTime TimeStamp "[*@MoonDay14RiseTimeStamp*]"][!SetOption @MoonDay14RiseTime Format "#TimeFormat#"]

[@MoonDay14RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay14RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay14SetTimeStamp]
Measure=WebParser
URL=[@MoonDay14Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay14SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay14SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay14SetTime TimeStamp "[*@MoonDay14SetTimeStamp*]"][!SetOption @MoonDay14SetTime Format "#TimeFormat#"]

[@MoonDay14SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay14SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

; ========================================
; Day 15
; ========================================

[@MoonDay15Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){14}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){14}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){14}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){14}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){14}(".*")(?:,|\]).*

[@MoonDay15PhaseName]
Measure=WebParser
URL=[@MoonDay15Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay15PhaseIcon]
Measure=WebParser
URL=[@MoonDay15Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay15PhaseDay]
Measure=WebParser
URL=[@MoonDay15Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay15RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay15Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay15RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay15RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay15RiseTime TimeStamp "[*@MoonDay15RiseTimeStamp*]"][!SetOption @MoonDay15RiseTime Format "#TimeFormat#"]

[@MoonDay15RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay15RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay15SetTimeStamp]
Measure=WebParser
URL=[@MoonDay15Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay15SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay15SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay15SetTime TimeStamp "[*@MoonDay15SetTimeStamp*]"][!SetOption @MoonDay15SetTime Format "#TimeFormat#"]

[@MoonDay15SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay15SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
Substitute="AM":"am","PM":"pm"

