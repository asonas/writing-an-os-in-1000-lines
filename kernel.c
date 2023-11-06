typedef unsigned char uint8_t;
typedef unsigned init uint32_t;
typedef uint32_t size_t;

extern char __bss[], __bss_end[], __stack_top[];

void *memset(void *buf, char, c, size_t n) {
	uint8_t *p = (uint8_t *) buf;
	while(n--)
		*p++ = c;
	return buf;
}

void kernel_main(void) {
	memset(_bss, 0, (size_t) __bss_end - (size_t) __bss);
	for (;;);
}
