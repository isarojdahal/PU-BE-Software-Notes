        .model small
        .stack 100h
       
        space macro
            mov dl,' '
            mov ah,02h
            int 21h
            
            endm
        .data  
            string dw ?
            len dw 15
        .code
            main proc
                .startup
                mov cx,len
                mov si, offset string
          again:      mov ah, 01h
                int 21h 
                mov [si],al
                inc si   
                loop again
                
                mov cx, len
                                        
              
               mov di, offset string 
        label: mov dl,[di]
                
                mov ah,02h                 
                int 21h 
                space  
                inc di
                loop label
                
                
                
                .exit
                
                main endp
            end main
                