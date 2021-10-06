@echo off
Title A COOL WAY TO SAY TELL YOUR FRIENDS HAPPY BIRTHDAY
Color 0A & Mode con cols=70 lines=3
set Msg="                   Wishing you love"
Call :Typewriter %Msg%
set Msg="                   luck and everlasting joy"
Call :Typewriter %Msg%
set Msg="                   Happy birthday to you."
Call :Typewriter %Msg%
pause>nul
Exit /b
::*********************************************************************
:TypeWriter
Cls
echo(
(
echo strText=wscript.arguments(0^)
echo intTextLen = Len(strText^)
echo intPause = 120
echo For x = 1 to intTextLen
echo     strTempText = Mid(strText,x,1^)
echo     WScript.StdOut.Write strTempText
echo     WScript.Sleep intPause
echo Next
echo Set Voice=CreateObject("SAPI.SpVoice"^)
echo voice.speak strText
)>%tmp%\%~n0.vbs
@cScript.EXE /noLogo "%tmp%\%~n0.vbs" "%~1"
exit /b
::********************************************************************* 