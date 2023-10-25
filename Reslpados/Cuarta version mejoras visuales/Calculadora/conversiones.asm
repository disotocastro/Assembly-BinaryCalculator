section .text
global _testmain:function
global _metros2centimetros:function
global _metros2milimetros:function
global _metros2kilometros:function





xor rdi, rdi
xor rax, rax

_metros2centimetros:
    ; Recibe el valor en metros en rdi
    ; Realiza la conversión de metros a centímetros (multiplica por 100)
    mov rax, rdi
    mov rcx, 100
    imul rax, rcx
    mov rdi, rax ; Almacena el resultado en rdi
    ret

_metros2milimetros:
    ; Recibe el valor en metros en rdi
    mov rax, rdi
    mov rcx, 1000
    imul rax, rcx
    mov rdi, rax ; Almacena el resultado en rdi
    ret


_metros2kilometros:
    ; Recibe el valor en metros en rdi
    mov rax, rdi
    mov rcx, 1000
    idiv rcx
    ;mov rdi, rax ; Almacena el resultado en rdi
    ret
