        ;assume x=r1
        ;assume y=r2

        ldr     r1,=0x0
        ldr     r2,=0x0

        cmp     r1,#1
        beq     ifequal
        b       else
ifequal mov     r2,#1
else    
        end
