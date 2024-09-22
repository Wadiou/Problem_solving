
.text
main:#if (t0 >10 || t1 =2) t1 ++ else (t0 <= 10 && t1 != 2) t2 ++
#false in case 3
li s1 , 10
li s2 , 2
jal case1 
jal corrected1
li a0 , 10
ecall

case1: # F,F
li t0,9
li t1 , 3
ble t0 , s1 ,if1
if1:
bne t1 , s2 , else1
addi t1 , t1 , 1
j exit1
else1:
addi t2 , t2 , 1
exit1:
j case2

case2: # F,T
li t0,9
li t1 , 2
ble t0 , s1 ,if2
if2:
bne t1 , s2 , else2
addi t1 , t1 , 1
j exit2
else2:
addi t2 , t2 , 1
exit2:
j case3

case3: # T,F 
#here's the problem
li t0,12
li t1 , 3
ble t0 , s1 ,if3
if3:
bne t1 , s2 , else3
addi t1 , t1 , 1
j exit3
else3:
addi t2 , t2 , 1
exit3:
j case4

case4: # T,T
li t0,12
li t1 , 2
ble t0 , s1 ,if4
if4:
bne t1 , s2 , else4
addi t1 , t1 , 1
j exit4
else4:
addi t2 , t2 , 1
exit4:
ret

corrected1: # F,F
li t0,9
li t1 , 3
ble t0 , s1 ,ifc1
addi t1 , t1 , 1
j exitc1
ifc1:
bne t1 , s2 , elsec1
addi t1 , t1 , 1
j exitc1
elsec1:
addi t2 , t2 , 1
exitc1:
j corrected2

corrected2: # F,T
li t0,9
li t1 , 2
ble t0 , s1 ,ifc2
addi t1 , t1 , 1
j exitc2
ifc2:
bne t1 , s2 , elsec2
addi t1 , t1 , 1
j exitc2
elsec2:
addi t2 , t2 , 1
exitc2:
j corrected3

corrected3: # T,F 
#solved
li t0,12
li t1 , 3
ble t0 , s1 ,ifc3
addi t1 , t1 , 1
j exitc3
ifc3:
bne t1 , s2 , elsec3
addi t1 , t1 , 1
j exitc3
elsec3:
addi t2 , t2 , 1
exitc3:
j corrected4

corrected4: # T,T
li t0,12
li t1 , 2
ble t0 , s1 ,ifc4
addi t1 , t1 , 1
j exitc4
ifc4:
bne t1 , s2 , elsec4
addi t1 , t1 , 1
j exitc4
elsec4:
addi t2 , t2 , 1
exitc4:
ret






