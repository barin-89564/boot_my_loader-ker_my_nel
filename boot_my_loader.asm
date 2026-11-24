section .multiboot
align 4
    dd 0x1BADB002 ; Magic shit
    dd 0x00000000 ; Flag shit
    dd -(0x1BADB002 + 0x00000000) ; Checksum
