       ;assume i=r0,j=r1,f=r2,h=r3,g=r4

       cmp     r0,r1
       beq     equal
       b       else
equal  
       add     r2,r4,r4
       b       finish
else   
       sub     r2,r4,r3
finish 
       end

