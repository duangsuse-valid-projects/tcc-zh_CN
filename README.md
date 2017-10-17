## Tiny C Compiler
C Scripting Everywhere - The __Smallest__ ANSI C compiler

这是一个 __翻译提示文本的补丁__ .  可能也会在未来Merge其它patch.

对于TCC来说, 加入太多语言支持会增加它的体积, 这是不明智的. 这个分支只会包含中文的提示本地化.

### Features:

- __SMALL!__ You can compile and execute C code everywhere, for example on
  rescue disks.

- __FAST!__ tcc generates optimized x86 code. No byte code
  overhead. Compile, assemble and link about 7 times faster than 'gcc
  -O0'.

- __UNLIMITED!__ Any C dynamic library can be used directly. TCC is
  heading torward full ISOC99 compliance. TCC can of course compile
  itself.

- __SAFE!__ tcc includes an optional memory and bound checker. Bound
  checked code can be mixed freely with standard code.

- Compile and execute C source __directly__. No linking or assembly
  necessary. Full C preprocessor included.

- __C script supported__ : just add '#!/usr/local/bin/tcc -run' at the first
  line of your C source, and execute it directly from the command
  line.

### Documentation:

##### Installation on a i386 Linux host (for Windows read tcc-win32.txt)
```shell
   ./configure
   make
   make test
   make install
```
By default, tcc is installed in /usr/local/bin.
./configure --help  shows configuration options.


##### Introduction

We assume here that you know ANSI C. Look at the example hello_world.c to know
what the programs look like.

The include file <tcclib.h> can be used if you want a small basic libc
include support (especially useful for floppy disks). Of course, you
can also use standard headers, although they are slower to compile.

You can begin your C script with '#!/usr/local/bin/tcc -run' on the first
line and set its execute bits (chmod a+x your_script). Then, you can
launch the C code as a shell or perl script :-) The command line
arguments are put in 'argc' and 'argv' of the main functions, as in
ANSI C.

##### Examples

hello_world.c: simplest example (hello world). Can also be launched directly
as a script: './hello_world.c'.

find_num.c: more complicated example: find a number with the four
operations given a list of numbers (benchmark).

fib.c: compute fibonacci numbers (benchmark).

gui.c: more complicated: X11 program. Very complicated test in fact
because standard headers are being used !

glic_hello.c: 'hello world' with standard glibc headers.

tcc.c: TCC can of course compile itself. Used to check the code
generator.

tcctest.c: auto test for TCC which tests many subtle possible bugs. Used
when doing 'make test'.

##### Full Documentation

Please read tcc-doc.html to have all the features of TCC.

Additional information is available for the Windows port in tcc-win32.txt.

### License:

TCC is distributed under the __GNU Lesser General Public License__ (see
COPYING file).

Fabrice Bellard.
