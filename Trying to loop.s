        AREA    MyCode, CODE, READONLY
        ENTRY
        EXPORT  __main
__main
        ldr     R0,=0x12340A0B
        ldr     R1,=0x00006000
        ldr     R2,=0x00000002

        ldr     R3,=0x00005FF8
        ldr     R5,=Table
        mov     R6,#0
Loop
        cmp     R6,#36
        bge     Done
        ldr     R4,[R5,R6]
        str     R4,[R3,R6]
        add     R6,R6,#4
        b       Loop
Done
stop    b       stop

        AREA    MyData, DATA, READONLY
Table   DCD     0xEF38B4AA, 0xA123B456, 0xBB45CC66, 0x12341234, 0xABCD5678, 0xFFBBCCA0, 0xBECDFECD, 0x60083456, 0xAB8945BB
        END