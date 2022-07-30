

  .stack 100h
  .data
    string db "microprocessor$"
  .code
    main proc
        .startup
        mov dx,offset string
        mov ah,09h
        int 21h
    main endp
    end main

