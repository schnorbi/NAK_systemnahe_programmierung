
hello.ld:     Dateiformat elf64-x86-64


Disassembly of section .plt:

0000000000401000 <puts@plt-0x10>:
  401000:	ff 35 02 30 00 00    	push   0x3002(%rip)        # 404008 <_GLOBAL_OFFSET_TABLE_+0x8>
  401006:	ff 25 04 30 00 00    	jmp    *0x3004(%rip)        # 404010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40100c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000401010 <puts@plt>:
  401010:	ff 25 02 30 00 00    	jmp    *0x3002(%rip)        # 404018 <puts@GLIBC_2.2.5>
  401016:	68 00 00 00 00       	push   $0x0
  40101b:	e9 e0 ff ff ff       	jmp    401000 <puts@plt-0x10>

Disassembly of section .text:

0000000000401020 <main>:
  401020:	55                   	push   %rbp
  401021:	48 89 e5             	mov    %rsp,%rbp
  401024:	48 8d 05 d5 0f 00 00 	lea    0xfd5(%rip),%rax        # 402000 <main+0xfe0>
  40102b:	48 89 c7             	mov    %rax,%rdi
  40102e:	e8 dd ff ff ff       	call   401010 <puts@plt>
  401033:	90                   	nop
  401034:	5d                   	pop    %rbp
  401035:	c3                   	ret    
