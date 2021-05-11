%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging

    ; 함수 (프로시저 procedure 서브루틴 subroutine)

    ; call PRINT_MSG    

    mov eax, 10
    mov ebx, 5
    call MAX
    PRINT_DEC 4, ecx
    NEWLINE

    xor rax, rax
    ret

PRINT_MSG:
    PRINT_STRING msg
    NEWLINE
    ret
    
; ex) 두 값중 더 큰 값을 반환하는 max
; 근데 2값을 어떻게 넘겨받지? 반환은 어떻게?
; eax와 ebx 입력값을 ecx에 반환
MAX:
    cmp eax, ebx
    jg L1
    mov ecx, ebx
    jmp L2

L1:
    mov ecx, eax
L2:
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
    num resb 10