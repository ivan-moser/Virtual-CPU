
--------------------------------------------------------------------


*PROGRAM INSTRUCTIONS:*

0x10  =>  MOVE    
0x20  =>  ADD      
0x30  =>  JUMP
0x40  =>  HALT


--------------------------------------------------------------------


*Byte structure (MOVE / ADD):*

First byte => Instruction.
Second byte => First nebble is the register, second one the value

====================================================================+
MOVE v2, 5               <--- Move 5 to the second register!        |
0b 0000 0001 0010 0101      <---                                    |
0x 0125                                                             |
====================================================================+

*Byte structure (JUMP):*

First byte => Instruction
Second byte => Adress


--------------------------------------------------------------------


// CODE EXAMPLE

ASTRATTO:

MOVE v2, 5
ADD v2, 2
JUMP 0x01   (loop infinito)

IN ESADECIMALE:

0x0125
0x0222
0x0301

IN BINARIO:

0000 0001 0010 0101
0000 0010 0010 0010
0000 0011 0000 0001