       mov     R0,#0
Start  add     R0,R0,#1
       cmp     R0,#0x1000
       endeq
       B       Start
