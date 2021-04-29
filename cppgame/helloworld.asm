%include "io64.inc"

section .text
global CMAIN
CMAIN:
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
    
    PRINT_STRING msg
    
    xor rax, rax
    ret
    
section .data
    msg db 'Hello World', 0x00