%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
 
    ; 반복문 (for while)
    ; 특정 조건을 만족할때까지 반복해서 실행~
    
    ; ex) Hello World를 10번 출력해야 한다면?
    
    mov ecx, 10
    
LABEL_LOOP:
    PRINT_STRING msg
    NEWLINE
    dec ecx ; sub ecx, 1과 동일
    
    cmp ecx, 0
    
    jne LABEL_LOOP
    
    
    xor rax, rax
    ret

    ; 초기화 된 데이터
    ; [변수이름] [크기] [초기값]
    ; [크기] db(1) dw(2) dd(4) dq(8)
    
    
section .data
    msg db 'Hello World', 0x00    
    ; 초기화 되지 않은 데이터
    ; [변수이름] [크기] [개수]
    ; [크기] resb(1) resw(2) resd(4) resq(8)
section .bss
    num resb 1