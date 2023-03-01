global IntegerAddSub_

IntegerAddSub_:
    mov eax, edi
    add eax, esi
    add eax, edx
    sub eax, ecx

    ret