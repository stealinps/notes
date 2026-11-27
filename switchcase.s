       ;assume button=r0,a,t=r1
       mov     r0,#2 
       cmp     r0,#1 ;case 1
       moveq   r1,#20 ;do if C=1
       Beq     break ;jump to break
       cmp     r0,#2 ;reset flag and compare to case 2
       moveq   r1,#50
       Beq     break
       cmp     r0,#3
       moveq   r1,#100
       Beq     break
       mov     r1,#0
break  
       end
