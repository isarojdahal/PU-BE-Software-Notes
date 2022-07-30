                       .model small
        .stack 100h
       
       
        
        .data  
            string db 'pokhara university$'
            
        .code
            main proc
                .startup
                
                mov dx, offset string
                mov ah,09h
                int 21h
                
                mov cx,18
                                        
              
               mov di, offset string 
        
        label:       sub [di],20h
               mov dl,[di]
                mov ah,02h                 
                int 21h 
                  
                inc di
                loop label
                
                
                
                .exit
                
                main endp
            end main
                