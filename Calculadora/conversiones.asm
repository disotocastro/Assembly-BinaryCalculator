section .text
;       DISTANCIA
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

; Kilometros
global _kilometros2metros:function
global _kilometros2centimetros:function
global _kilometros2milimetros:function
global _kilometros2pulgadas:function
global _kilometros2pies:function
global _kilometros2yardas:function
global _kilometros2millas:function


; Pulgadas
global _pulgadas2metros:function
global _pulgadas2centimetros:function
global _pulgadas2milimetros:function
global _pulgadas2kilometros:function
global _pulgadas2pies:function
global _pulgadas2yardas:function
global _pulgadas2millas:function

; Pies
global _pies2metros:function
global _pies2centimetros:function
global _pies2milimetros:function
global _pies2kilometros:function
global _pies2pulgadas:function
global _pies2yardas:function
global _pies2millas:function

;Yardas
global _yardas2metros:function
global _yardas2centimetros:function
global _yardas2milimetros:function
global _yardas2kilometros:function
global _yardas2pies:function
global _yardas2pulgadas:function
global _yardas2millas:function


; Millas
global _millas2metros:function
global _millas2centimetros:function
global _millas2milimetros:function
global _millas2kilometros:function
global _millas2pies:function
global _millas2yardas:function
global _millas2pulgadas:function





; PESO
global _onzas2gramos:function
global _onzas2kilogramos:function
global _onzas2libras:function

global _libras2gramos:function
global _libras2kilogramos:function
global _libras2onzas:function

global _kilogramos2gramos:function
global _kilogramos2libras:function
global _kilogramos2onzas:function

global _gramos2kilogramos:function
global _gramos2libras:function
global _gramos2onzas:function



;VOLUMEN
global _mililitros2mililitros:function
global _mililitros2litros:function
global _mililitros2galones:function
global _mililitros2metroscubicos:function
global _litros2mililitros:function
global _litros2litros:function
global _litros2galones:function
global _litros2metroscubicos:function
global _galones2mililitros:function
global _galones2litros:function
global _galones2galones:function
global _galones2metroscubicos:function
global _metroscubicos2mililitros:function
global _metroscubicos2litros:function
global _metroscubicos2galones:function
;Peso
global _Celsius2Fahrenheit:function
global _Celsius2Kelvin:function

global _Kelvin2Fahrenheit:function
global _Kelvin2Celsius:function

global _Fahrenheit2Celsius:function
global _Fahrenheit2Kelvin:function


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

; Kilometros

_kilometros2metros:
    ; Convertir kilómetros a metros: Multiplicar por 1000
    ; Cargar 1000 en xmm1
    mov rax, 408f400000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_kilometros2milimetros:
    ; Convertir kilómetros a milímetros: Multiplicar por 1,000,000
    ; Cargar 1,000,000 en xmm1
    mov rax, 412e848000000000h ; Representación de punto flotante de 1,000,000
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_kilometros2centimetros:
    ; Convertir kilómetros a centímetros: Multiplicar por 100,000
    ; Cargar 100000 en xmm1
    mov rax, 40f86a0000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret


_kilometros2pulgadas:
    ; Convertir kilómetros a pulgadas: Multiplicar por 39,370.1
    ; Cargar 39370.1 en xmm1
    mov rax, 40e3394333333333h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_kilometros2pies:
    ; Convertir kilómetros a pies: Multiplicar por 3,280.84
    ; Cargar 3280.84 en xmm1
    mov rax, 40a9a1ae147ae148h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_kilometros2yardas:
    ; Convertir kilómetros a yardas: Multiplicar por 1,093.61
    ; Cargar 1093.61 en xmm1
    mov rax, 40911670a3d70a3dh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_kilometros2millas:
    ; Convertir kilómetros a millas: Multiplicar por 0.621371
    ; Cargar 0.621371 en xmm1
    mov rax, 3fe3e2456f75d9a1h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret


; Pulgadas

_pulgadas2kilometros:
    ; Convertir pulgadas a kilómetros: Dividir por 39370
    mov rax, 40e3394000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret

_pulgadas2metros:
    ; Convertir pulgadas a metros: Dividir por 39.37
    mov rax, 4043af5c28f5c28fh
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret

_pulgadas2centimetros:
    ; Convertir pulgadas a centímetros: Multiplicar por 2.54
    ; Cargar 2.54 en xmm1
    mov rax, 400451eb851eb852h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_pulgadas2milimetros:
    ; Convertir pulgadas a milímetros: Multiplicar por 25.4
    ; Cargar 25.4 en xmm1
    mov rax, 4039666666666666h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_pulgadas2pies:
    ; Convertir pulgadas a pies: Dividir por 12
    mov rax, 4028000000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret

_pulgadas2yardas:
    ; Convertir pulgadas a yardas: Dividir por 36
    mov rax, 4042000000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret

_pulgadas2millas:
    ; Convertir pulgadas a millas: Dividir por 63,360
    mov rax, 40eef00000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret



; Pies


_pies2kilometros:
    ; Convertir pies a kilómetros: Dividir por 3280.84
    mov rax, 40a9a20000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret

_pies2metros:
    ; Convertir pies a metros: Multiplicar por 0.3048
    ; Cargar 0.3048 en xmm1
    mov rax, 3fd3b645a1cac083h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_pies2centimetros:
    ; Convertir pies a centímetros: Multiplicar por 30.48
    ; Cargar 30.48 en xmm1
    mov rax, 403e7ae147ae147bh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_pies2milimetros:
    ; Convertir pies a milímetros: Multiplicar por 304.8
    ; Cargar 304.8 en xmm1
    mov rax, 4072b020c49ba5e3h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_pies2pulgadas:
    ; Convertir pies a pulgadas: Multiplicar por 12
    ; Cargar 12 en xmm1
    mov rax, 4028000000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_pies2yardas:
    ; Convertir pies a yardas: Dividir por 3
    mov rax, 4008000000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret

_pies2millas:
    ; Convertir pies a millas: Dividir por 5280
    mov rax, 40b4a00000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret


; Yardas
_yardas2kilometros:
    ; Convertir yardas a kilómetros: Dividir por 1093.61
    mov rax, 40911670a3d70a3dh
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret

_yardas2metros:
    ; Convertir yardas a metros: Multiplicar por 0.9144
    mov rax, 3fed42c3c9eecbfbh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_yardas2centimetros:
    ; Convertir yardas a centímetros: Multiplicar por 91.44
    ; Cargar 91.44 en xmm1
    mov rax, 4056dc28f5c28f5ch
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_yardas2milimetros:
    ; Convertir yardas a milímetros: Multiplicar por 914.4
    ; Cargar 914.4 en xmm1
    mov rax, 408c933333333333h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_yardas2pulgadas:
    ; Convertir yardas a pulgadas: Multiplicar por 36
    ; Cargar 36 en xmm1
    mov rax, 4042000000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_yardas2pies:
    ; Convertir yardas a pies: Multiplicar por 3
    ; Cargar 3 en xmm1
    mov rax, 4008000000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_yardas2millas:
    ; Convertir yardas a millas: Dividir por 1760

    mov rax, 409b800000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret



; MIllas
_millas2kilometros:
    ; Convertir millas a kilómetros: Multiplicar por 1.60934
    ; Cargar 1.60934 en xmm1
    mov rax, 3ff9bfdb4cc25072h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_millas2metros:
    ; Convertir millas a metros: Multiplicar por 1609.34
    mov rax, 4099255c28f5c28fh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_millas2centimetros:
    ; Convertir millas a centímetros: Multiplicar por 160934
    ; Cargar 160934 en xmm1
    mov rax, 4103a53000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_millas2milimetros:
    ; Convertir millas a milímetros: Multiplicar por 1,609,340
    ; Cargar 1,609,340 en xmm1
    mov rax, 41388e7c00000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_millas2pulgadas:
    ; Convertir millas a pulgadas: Multiplicar por 63,360
    ; Cargar 63,360 en xmm1
    mov rax, 40eef00000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_millas2pies:
    ; Convertir millas a pies: Multiplicar por 5,280
    ; Cargar 5,280 en xmm1
    mov rax, 40b4a00000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_millas2yardas:
    ; Convertir millas a yardas: Multiplicar por 1,760
    ; Cargar 1,760 en xmm1
    mov rax, 409b800000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret


; ============ PESO ============
_gramos2kilogramos:
    ; Convertir gramos a kilogramos: Dividir por 1000
    ; Cargar 1/1000 (0.001) en xmm1
    mov rax, 408f400000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret

_gramos2libras:
    ; Convertir gramos a libras: Multiplicar por 0.00220462
    ; Cargar 0.00220462 en xmm1
    mov rax, 3f620f6c599a7b16h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_gramos2onzas:
    ; Convertir gramos a onzas: Multiplicar por 0.035274
    ; Cargar 0.035274 en xmm1
    mov rax, 403c59999999999ah
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret


; Onzas
_onzas2gramos:
    ; Convertir onzas a gramos: Multiplicar por 28.3495
    ; Cargar 28.3495 en xmm1
    mov rax, 403c5978d4fdf3b6h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_onzas2kilogramos:
    ; Convertir onzas a kilogramos: Multiplicar por 0.0283495
    ; Cargar 0.0283495 en xmm1
    mov rax, 3f9d07a6bd6e8af8h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_onzas2libras:
    ; Convertir onzas a libras: Dividir por 16
    mov rax, 4030000000000000h
    movq xmm1, rax
    vdivsd xmm0, xmm0, xmm1
    ret

; Libras
_libras2gramos:
    ; Convertir libras a gramos: Multiplicar por 453.592
    ; Cargar 453.592 en xmm1
    mov rax, 407c5978d4fdf3b6h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_libras2kilogramos:
    ; Convertir libras a kilogramos: Multiplicar por 0.453592
    ; Cargar 0.453592 en xmm1
    mov rax, 3fdd07a6bd6e8af8h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_libras2onzas:
    ; Convertir libras a onzas: Multiplicar por 16
    ; Cargar 16 en xmm1
    mov rax, 4030000000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

; Kilogramos
_kilogramos2gramos:
    ; Convertir kilogramos a gramos: Multiplicar por 1000
    ; Cargar 1000 en xmm1
    mov rax, 408f400000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_kilogramos2libras:
    ; Convertir kilogramos a libras: Multiplicar por 2.20462
    ; Cargar 2.20462 en xmm1
    mov rax, 4001a30fcf80dc33h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_kilogramos2onzas:
    ; Convertir kilogramos a onzas: Multiplicar por 35.274
    ; Cargar 35.274 en xmm1
    mov rax, 4041a3126e978d50h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret


; ============ VOLUMEN ============
_mililitros2litros:
    ; Convertir mililitros a litros: Dividir por 1000
    ; Cargar 0.001 en xmm1
    mov rax, 3f50624dd2f1a9fch
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret
_mililitros2galones:
    ; Convertir militros a galones: Divide por 3785
    ; Cargar 1/3785 = 0.000264201 en xmm1
    mov rax, 3f31508ea791ee99h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret
_mililitros2metroscubicos:
    ; Convertir mililitros a metros cubicos: Dividir por 1,000,000
    ; Cargar 0.000001 en xmm1
    mov rax, 3eb0c6f7a0b5ed8dh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_litros2mililitros:
    ; Convertir centímetros a metros: Dividir por 1000
    ; Cargar 0.01 en xmm1
    mov rax, 408f400000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret

_litros2galones:
    ; Convertir centímetros a metros: Dividir por 3.785
    ; Cargar 0.264200793 en xmm1
    mov rax, 3fd0e8aa7160c8f6h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret
_litros2metroscubicos:
    ; Convertir mililitros a litros: Dividir por 1000
    ; Cargar 0.001 en xmm1
    mov rax, 3f50624dd2f1a9fch
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret
_galones2mililitros:
    ; Convertir galones a mililitros: Multiplicar por 3786
    ; Cargar 3786 en xmm1
    mov rax, 40ad920000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret
_galones2litros:
    ; Convertir galones a litros: Multiplicar por 3,786
    ; Cargar 3,786 en xmm1
    mov rax, 400e49ba5e353f7dh
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret
_galones2metroscubicos:
    ; Convertir mililitros a litros: Dividir por 0.003785011
    ; Cargar 0.003785011 en xmm1
    mov rax, 3f6f01be4eb85275h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret
_metroscubicos2mililitros:
    ; Convertir metroscubicos a mililitros: Multiplicar por 1000000
    ; Cargar 1000000 en xmm1
    mov rax, 412e848000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret
_metroscubicos2litros:
    ; Convertir metroscubicos a litros: Multiplicar por 1000
    ; Cargar 1000 en xmm1
    mov rax, 408f400000000000h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret
_metroscubicos2galones:
    ; Convertir metroscubicos a galones: Multiplicar por 264.2
    ; Cargar 264.2 en xmm1
    mov rax, 4070833333333333h
    movq xmm1, rax
    vmulsd xmm0, xmm0, xmm1
    ret


; ============ Temperatura ============
_Celsius2Fahrenheit:
    ; F = C * 9/5 + 32
    ; Primero, cargamos la constante 9/5 en xmm1.
    mov rax, 3ffccccccccccccdh ; 9/5 en representación hexadecimal
    movq xmm1, rax
    ; Multiplicamos C por 9/5.
    vmulsd xmm0, xmm0, xmm1
    ; Ahora, cargamos la constante 32 en xmm1.
    mov rax, 4040000000000000h ; 32 en representación hexadecimal
    movq xmm1, rax
    ; Sumamos 32 al resultado.
    vaddsd xmm0, xmm0, xmm1
    ret

_Celsius2Kelvin:
    ; K = C + 273.15
    ; Cargamos la constante 273.15 en xmm1.
    mov rax, 4071126666666666h ; 273.15 en representación hexadecimal
    movq xmm1, rax
    ; Sumamos 273.15 a C.
    vaddsd xmm0, xmm0, xmm1
    ret

_Kelvin2Fahrenheit:
    ; F = (K - 273.15) * 9/5 + 32
    ; Cargamos la constante 273.15 en xmm1.
    mov rax, 4071126666666666h ; 273.15 en representación hexadecimal
    movq xmm1, rax
    ; Restamos 273.15 de K.
    vsubsd xmm0, xmm0, xmm1
    ; Cargamos la constante 9/5 en xmm1.
    mov rax, 3ffccccccccccccdh ; 9/5 en representación hexadecimal
    movq xmm1, rax
    ; Multiplicamos por 9/5.
    vmulsd xmm0, xmm0, xmm1
    ; Cargamos la constante 32 en xmm1.
    mov rax, 4040000000000000h ; 32 en representación hexadecimal
    movq xmm1, rax
    ; Sumamos 32 al resultado.
    vaddsd xmm0, xmm0, xmm1
    ret

_Kelvin2Celsius:
    ; C = K - 273.15
    ; Cargamos la constante 273.15 en xmm1.
    mov rax, 4071126666666666h ; 273.15 en representación hexadecimal
    movq xmm1, rax
    ; Restamos 273.15 de K.
    vsubsd xmm0, xmm0, xmm1
    ret

_Fahrenheit2Celsius:
    ; C = (F - 32) * 5/9
    ; Cargamos la constante 32 en xmm1.
    mov rax, 4040000000000000h ; 32 en representación hexadecimal
    movq xmm1, rax
    ; Restamos 32 de F.
    vsubsd xmm0, xmm0, xmm1
    ; Cargamos la constante 5/9 en xmm1.
    mov rax, 3fe1c71c71c71c72h ; 5/9 en representación hexadecimal
    movq xmm1, rax
    ; Multiplicamos por 5/9.
    vmulsd xmm0, xmm0, xmm1
    ret

_Fahrenheit2Kelvin:
    ; K = (F - 32) * 5/9 + 273.15
    ; Cargamos la constante 32 en xmm1.
    mov rax, 4040000000000000h ; 32 en representación hexadecimal correcta
    movq xmm1, rax
    ; Restamos 32 de F.
    vsubsd xmm0, xmm0, xmm1
    ; Cargamos la constante 5/9 en xmm1. Necesitamos el valor correcto en precisión doble.
    mov rax, 3fe1c71c71c71c72h ; 5/9 en representación hexadecimal correcta
    movq xmm1, rax
    ; Multiplicamos el resultado por 5/9.
    vmulsd xmm0, xmm0, xmm1
    ; Cargamos la constante 273.15 en xmm1.
    mov rax, 4071126666666666h ; 273.15 en representación hexadecimal correcta
    movq xmm1, rax
    ; Sumamos 273.15 al resultado.
    vaddsd xmm0, xmm0, xmm1
    ret











