section .text
; Metros
global _metros2centimetros:function
global _metros2milimetros:function
global _metros2kilometros:function
global _metros2pulgadas:function
global _metros2pies:function
global _metros2yardas:function
global _metros2millas:function

; Centimetros
global _centimetros2metros:function
global _centimetros2milimetros:function
global _centimetros2kilometros:function
global _centimetros2pulgadas:function
global _centimetros2pies:function
global _centimetros2yardas:function
global _centimetros2millas:function


; Milimetros
global _milimetros2metros:function
global _milimetros2centimetros:function
global _milimetros2kilometros:function
global _milimetros2pulgadas:function
global _milimetros2pies:function
global _milimetros2yardas:function
global _milimetros2millas:function


; Metros
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

; Centimetros

_centimetros2metros:
    ; Convertir centímetros a metros: Dividir por 100
    ; Cargar 0.01 en xmm1
    mov rax, 3f847ae147ae147bh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_centimetros2milimetros:
    ; Convertir centímetros a milímetros: Multiplicar por 10
    ; Cargar 10.0 en xmm1
    mov rax, 4024000000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_centimetros2kilometros:
    ; Convertir centímetros a kilómetros: Dividir por 100000
    ; Cargar 0.00001 en xmm1
    mov rax, 40f86a0000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_centimetros2pulgadas:
    ; Convertir centímetros a pulgadas: Multiplicar por 0.393701
    ; Cargar 0.393701 en xmm1
    mov rax, 3fd93265add9c27fh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_centimetros2pies:
    ; Convertir centímetros a pies: Multiplicar por 0.0328084
    ; Cargar 0.0328084 en xmm1
    mov rax, 3fa0cc433a1173c6h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_centimetros2yardas:
    ; Convertir centímetros a yardas: Multiplicar por 0.0109361
    ; Cargar 0.0109361 en xmm1
    mov rax, 3f8665aa7ec42b3eh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_centimetros2millas:
    ; Convertir centímetros a millas: Multiplicar por 0.00000621371
    ; Cargar 0.00000621371 en xmm1
    mov rax, 3eda0feb992625a7h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

; Milimetros
 _milimetros2metros:
    ; Convertir milímetros a metros: Dividir por 1000
    ; Cargar 0.001 en xmm1
    mov rax, 3f50624dd2f1a9fch
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret


_milimetros2centimetros:
    ; Convertir milímetros a centímetros: Dividir por 10
    ; Cargar 0.1 en xmm1
    mov rax, 3fb999999999999ah
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret


_milimetros2kilometros:
    ; Convertir milímetros a kilómetros: Dividir por 1,000,000
    ; Cargar 0.000001 en xmm1
    mov rax, 3eb0c6f7a0b5ed8dh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_milimetros2pulgadas:
    ; Convertir milímetros a pulgadas: Multiplicar por 0.0393701
    ; Cargar 0.0393701 en xmm1
    mov rax, 3fa4285157e16865h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_milimetros2pies:
    ; Convertir milímetros a pies: Multiplicar por 0.00328084
    ; Cargar 0.00328084 en xmm1
    mov rax, 3f6ae06b901bec70h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_milimetros2yardas:
    ; Convertir milímetros a yardas: Multiplicar por 0.00109361
    ; Cargar 0.00109361 en xmm1
    mov rax, 3f51eaeecbd02298h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_milimetros2millas:
    ; Convertir milímetros a millas: Multiplicar por 0.000000621371
    ; Cargar 0.000000621371 en xmm1
    mov rax, 3ea4d9894781e1f5h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret







