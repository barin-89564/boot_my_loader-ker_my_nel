void kernel_main(void) {
    volatile unsigned short *vga = (volatile unsigned short *)0xB8000;
    const char *msg = "boot_my_loader & ker_my_nel running";
    for (int i = 0; msg[i] != '\0'; i++) {
        vga[i] = (0x0A << 8) | (unsigned char)msg[i];
    }
    for (;;) {
        __asm__ volatile("hlt");
    }
}