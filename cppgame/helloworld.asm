%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    ;write your code here
    
    ; 메모를 남길 수 있는 기능 = 주석
    ; 10진수 (진법)
    ; 10진수 (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
    ; 10 11 12 13 ... 19 20
    
    ; 2진수 (0, 1)
    ; 0b 0b1 0b10 0b11 0b100 0b101 0b110 0b111 0b1000
    
    ; 16진수 (1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F)
    ; 0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09 0x0A ... 0x0F 0x10
    ; 0x00 = 0 
    
    ; 0b10010101 = 0x95
    
    ; 8bit = 1byte
    ; 16bit = 2byte = 1word
    ; 32bit = 4byte = 2word = 1dword (double-word)
    ; 64bit = 8byte = 4word = 1qword (quad-word)
    
    ; mov reg1, cst -> cst 를 reg1 에 넣기
    ; mov reg1, reg2 -> reg2 의 값을 reg1 에 복사
    ; 오른쪽에서 왼쪽으로 데이터 이동
    
    mov eax, 0x1234
    mov rbx, 0x12345678
    mov cl, 0xff
    
    mov al, 0x00
    mov rax, rdx
    
    ; 메모리 <-> 레지스터
    
    
    ;PRINT_STRING msg
    
    xor rax, rax
    ret

    ; 변수의 선언 및 사용
    ; 변수는 그냥 데이터를 저장하는 바구니 [ ]
    ; - 처음에 바구니 사용하겠다 선언 (이름과 크기 지정)
    
    ; 초기화 된 데이터
    ; [변수이름] [크기] [초기값]
    ; [크기] db(1) dw(2) dd(4) dq(8)
section .data
    a db 0x11   ; [0x11]
    b dw 0x2222
    c dd 0x33333333
    d dq 0x4444444444444444

    ; 초기화 되지 않은 데이터
    ; [변수이름] [크기] [개수]
    ; [크기] resb(1) resw(2) resd(4) resq(8)
section .bss
    e resb 10


;section .data
;    msg db 'Hello World', 0x00

