%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
 
    GET_DEC 1, al
    GET_DEC 1, num
 
    ;PRINT_DEC 1, al
    ;NEWLINE
    ;PRINT_DEC 1, num
 
    ; 더하기 연산
    ; add a, b ( a = a + b)
    ; a는 레지스터 or 메모리
    ; b는 레지스터 or 메모리 or 상수
    ; - 단! a, b 모두 메모리는 X
 
    add al, 1 ; 레지스터 + 상수
    PRINT_DEC 1, al  ; 1+1 = 2
    NEWLINE
    
    add al, [num] ; 레지스터 + 메모
    PRINT_DEC 1, al
    NEWLINE
 
    mov bl, 3 ; 레지스터 + 레지스터
    add al, bl
    PRINT_DEC 1, al
    NEWLINE
    
    add [num], byte 1
 
    xor rax, rax
    ret

    ; 초기화 된 데이터
    ; [변수이름] [크기] [초기값]
    ; [크기] db(1) dw(2) dd(4) dq(8)
    
    
;section .data
    
    ; 초기화 되지 않은 데이터
    ; [변수이름] [크기] [개수]
    ; [크기] resb(1) resw(2) resd(4) resq(8)
section .bss
    num resb 1