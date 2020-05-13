# details_of_helloWorld
## In depth look at details of C hello world

The first few lines are pretty basic. 
`.section __TEXT,__text` is Apple's way of defining a `.text` 
[section](https://developer.apple.com/library/archive/documentation/DeveloperTools/Reference/Assembler/040-Assembler_Directives/asm_directives.html#//apple_ref/doc/uid/TP30000823-SW1).
>regular (S_REGULAR)
A regular section may contain any kind of data and gets no special processing from the link editor. This is the default section type. Examples of regular sections include program instructions or initialized data.

The next line is just some build information about OS version, etc.
`.build_version macos, 10, 15	sdk_version 10, 15, 4`.
The `.globl _main` declaration is used for making the `_main` symbol external so
the linker knows what to look for when marking the entry point. The align piece
simply explains where the next align-expression boundary is. In this case it's 
every 16-byte alignments with 0x90 as the filling between the current location
and the next alignment.

Finally we get onto the actual program. 
