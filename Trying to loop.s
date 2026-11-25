       ;x=r0,y=r1
       mov     r0,#0
       mov     r1,#2
       mov     r2,#0
loop   
       cmp     r0,#10
       bgt     stop
       add     r0,r0,r1
       add     r2,r2,#1
       ble     loop
stop   
       end
