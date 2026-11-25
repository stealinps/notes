           ;assume x=r0,y=r1,z=r2
           mov     r0,#0
           mov     r1,#1
           mov     r2,#3

comparenum 
           add     r3,r0,r1
           cmp     r3,r2
           bgt     ifgreater
           b       else
ifgreater  
           end

else       
           add     r0,r0,r1
           b       comparenum
