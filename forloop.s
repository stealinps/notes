       ;assume x=R0,y=R1,z=R2
       ldr     R1,=0x4
       mov     R0,#1
       cmp     R1,R0
       Bgt     loop
       B       else
loop   
       add     R2,R2,R0
       add     R0,R0,#1
       cmp     R1,R0
       Bgt     loop
else   
       end
