global IntegerAddSub_

IntegerAddSub_:
    push    rbp
    mov     rbp, rsp

    mov     [rbp-4], edi
    mov     [rbp-8], esi
    mov     [rbp-12], edx
    mov     [rbp-16], ecx
    mov     edx, [rbp-4]
    mov     eax, [rbp-8]
    add     edx, eax
    mov     eax, [rbp-12]
    add     eax, edx
    sub     eax, [rbp-16]

    pop     rbp
    ret