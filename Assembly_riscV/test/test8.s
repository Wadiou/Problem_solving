.text
.globl main

main:
    addi sp, sp, -16            
    addi a0, zero, 5            

    jal increment           
    jal zero, after_increment   

after_increment:
    la t0, double               
    jalr t0, t0 , 0              
    jal zero, after_double      

after_double:
    jal ra, subroutine          

    la t1, end_program          
    jr t1                       

increment:
    addi a0, a0, 1              
    jalr zero, ra, 0            

double:
    slli a0, a0, 1              
    jr t1           

subroutine:
    addi a1, a0, 10             
    jalr zero, ra, 0            

end_program:
    addi sp, sp, 16             
    jalr zero, zero, 0          
