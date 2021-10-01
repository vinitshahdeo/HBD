// Happy Birthday Song in Arduino - Nishant Giri

int buzzerPin = 10;
int numberOfNotes = 28; 	
char musicalNotes[] = "GGAGcB GGAGdc GGxecBA yyecdc";
int musicalBeats[] = {2, 2, 8, 8, 8, 16, 1, 2, 2, 8, 8, 8, 16, 1, 2, 2, 8, 8, 8, 8, 16, 1, 2, 2, 8, 8, 8, 16};
int musicTempo = 150;
void playMusicalTones(int musicalTone, int musicDuration) 
{
	for(long i = 0; i < musicDuration * 1000L; i += musicalTone * 2) 
	{
   		digitalWrite(buzzerPin, HIGH);
   		delayMicroseconds(musicalTone);
   		digitalWrite(buzzerPin, LOW);
   		delayMicroseconds(musicalTone);
	}
}
void playMusicalNotes(char musicalNote, int musicDuration) 
{
	char musicalScale[] = {'C', 'D', 'E', 'F', 'G', 'A', 'B', 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'x', 'y'};
	int musicalTones[] = {1915, 1700, 1519, 1432, 1275, 1136, 1014, 956, 834, 765, 593, 468, 346, 224, 655, 715};
	int speed = 5;    // Tone Corresponding to Note of Scale
	for(int i = 0; i < 17; i++) 
	{
   		if (musicalScale[i] == musicalNote) 
		{
    			int newMusicDuration = musicDuration / speed;
     			playMusicalTones(musicalTones[i], newMusicDuration);
   		}
	}
}
void setup() 
{
	pinMode(buzzerPin, OUTPUT);
}
void loop() 
{
	for(int i = 0; i < numberOfNotes; i++) 
	{
   		if(musicalNotes[i] == ' ') 
		{
     			delay(musicalBeats[i] * musicTempo);    // Rest - Absence of Sound
   		} 
		else 
		{
     			playMusicalNotes(musicalNotes[i], musicalBeats[i] * musicTempo);    // Fermata - Rest on the Note
   		}
   		delay(musicTempo);
	}
}