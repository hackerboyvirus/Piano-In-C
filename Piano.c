#include <stdio.h>
#include <windows.h>
 
/* C  = 261.6256 = z
   C# = 277.1826 = s
   D  = 293.6648 = x
   D# = 311.1270 = d
   E  = 329.6276 = c
   F  = 349.2282 = v
   F# = 369.9944 = g
   G  = 391.9954 = b
   G# = 415.3047 = h
   A  = 440.0000 = n
   A# = 466.1638 = j
   B  = 493.8833 = m
   C' = 523.2511 = ,  
   C#'= 554.3653 = l
   D' = 587.3295 = .
   D#'= 622.2540 = ;
   E' = 659.2551 = / */

int main()
{
 for(int i=0;i<1000;i++)
 {
    
    char note=getch();
      // C
    if(note=='z')
    {
        Beep(261.6256, 1000);
    }
      // C#
       if(note=='s')
    {
        Beep(277.1826, 1000);
    }
      // D
       if(note=='x')
    {
        Beep(293.6648, 1000);
    }
     // D#
       if(note=='d')
    {
        Beep(311.1270, 1000);
    }
     // E
       if(note=='c')
    {
        Beep(329.6276, 1000);
    }
     // F
       if(note=='v')
    {
        Beep(349.2282, 1000);
    }
     // F#
       if(note=='g')
    {
        Beep(369.9944, 1000);
    }
     // G
       if(note=='b')
    {
        Beep(391.9954, 1000);
    }
     // G#
       if(note=='h')
    {
        Beep(415.3047, 1000);
    }
     // A
       if(note=='n')
    {
        Beep(440.0000, 1000);
    }
     // A#
       if(note=='j')
    {
        Beep(466.1638, 1000);
    }
     // B
       if(note=='m')
    {
        Beep(493.8833, 1000);
    }
     // C'
       if(note==',')
    {
        Beep(523.2511, 1000);
    }
     // C#'

       if(note=='l')
    {
        Beep(554.3653, 1000);
    }
     // D'
       if(note=='.')
    {
        Beep(587.3295, 1000);
    }
    // D#'
       if(note==';')
    {
        Beep(622.2540, 1000);
    }
    // E'
       if(note=='/')
    {
        Beep(659.2551, 1000);
    }
 }
    return 0;
}
