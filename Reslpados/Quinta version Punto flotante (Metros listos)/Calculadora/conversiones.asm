section .data
factor:  dq 100.0   ; Valor de punto flotante doble precisión para 100.0

section .text
global _testmain:function
global _metros2centimetros:function
global _metros2milimetros:function
global _metros2kilometros:function
global _metros2pulgadas:function
global _metros2pies:function
global _metros2yardas:function
global _metros2millas:function


_metros2centimetros:
    ; xmm0 ya contiene el valor pasado desde C++
    ; RAX = Carga el valor inmediato 100.0 en xmm1
    mov rax, 4059000000000000h ; Valor en hexadecimal para el double 100.0
    movq xmm1, rax
    ; Multiplica xmm0 por xmm1
    vmulsd xmm0, xmm0, xmm1 ; xmm0 * xmm1 y lo guarda en xmm0
    ret

_metros2milimetros:
    mov rax, 408F400000000000h ; Valor en hexadecimal para el double 1000.0
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_metros2kilometros:
    mov rax, 408F400000000000h ; Valor en hexadecimal para el double 1000.0
    movq xmm1, rax
    ; Divide xmm0 por xmm1
    vdivsd xmm0, xmm0, xmm1 ; xmm0 / xmm1 y lo guarda en xmm0
    ret

_metros2pulgadas:
    mov rax, 4043af5f6fd21ff3h ; Valor en hexadecimal para el double 39.3701
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_metros2yardas:
    mov rax, 3ff17f6d330941c8h ; Valor en hexadecimal para el double 1.09361
    movq xmm1, rax

    vmulsd xmm0, xmm0, xmm1
    ret

_metros2millas:
    mov rax, 3f445c700fd4d6a9h ; Valor en hexadecimal para el double 0.000621371
    movq xmm1, rax

    vmulsd xmm0, xmm0, xmm1
    ret

_metros2pies:
    mov rax, 400a3f7ced916873h ; Valor en hexadecimal para el double 0.000621371
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret













