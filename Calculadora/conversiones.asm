section .text
global _testmain:function
global _metros2centimetros:function

_testmain:
mov rax, 1234
ret

_metros2centimetros:
    ; Recibe el valor en metros en rdi
    ; Realiza la conversión de metros a centímetros (multiplica por 100)
    mov rax, rdi
    mov rcx, 100
    imul rax, rcx
    mov rdi, rax ; Almacena el resultado en rdi

    ret

