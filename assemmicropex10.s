       ldr     R0,=0x00006000
       ldr     R1,=0x0000000C
       ldr     R2,=0x12345678

       ldr     R4,=0x00000BE
       ldr     R5,=0x00000BA
       ldr     R6,=0x00000ED
       ldr     R7,=0x00000FE

       str     R4,[R0,#0]
       str     R5,[R0,#4]
       str     R6,[R0,#8]
       str     R7,[R0,#12]

       ldr     R2,[R0,R1]!

HALT   