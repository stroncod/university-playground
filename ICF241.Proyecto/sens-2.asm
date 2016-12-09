PILA SEGMENT STACK
    db 256 dup(0)
PILA ENDS

DATA SEGMENT
    x           db 0
    y           db 5  
    carro       db 219,219,219,10,10,'$'
    sensores    db '    ',254,' ',254,' ',254,10,10,'$'
    contador    db 182
    IPViejo8    dw ?
    CSViejo8    dw ?
    msg         db 10,13,"Baja velocidad de desplazamiento",10,13,'$'


DATA ENDS

    
CODE SEGMENT
    MiProg PROC FAR
    Assume CS:code, DS:DATA
    mov ax, data
    mov ds, ax
    

;LIMPIAR PANTALLA
ciclo:          ;vuelve cada vez que se apreta una tecla
    cmp x,00    ;compara si x es 0
    add x,1     ;variable x que se incrementa en 1
  
    mov ah,06h
    mov al,0 ;limpia la pantalla
    mov ch,0 ; filas esquina izq
    mov cl,0 ; columnas esquina izq
    mov bh,0 ; escribe lineas vacias(0)
    mov dh,24 ;fila esquina derecha 24
    mov dl,80 ;columnas esquina derecha 80
    mov bx,0AAAh  ;color de letras verde claro
    int 10h     
    
    mov ah,02h ;setea el cursor de
    mov bh,0   ;inicia en pag. cero
    mov dh,y   ;posision de Y
    mov dl,x   ;posision de x
    int 10h
    
    mov ah,09h
    mov dx,offset carro   ;carga el mensaje
    int 21h
    mov ah,09h
    mov dx,offset sensores   ;carga el mensaje
    int 21h
    
    cmp x,1 ;compara posicion bloque
    je S0
    
    cmp x,2 ;compara posicion bloque
    je S1
    
    cmp x,3 ;compara posicion bloque
    je S1
    
    cmp x,4 ;compara posicion bloque
    je S2
    
    cmp x,5 ;compara posicion bloque
    je S3
    
    cmp x,6 ;compara posicion bloque
    je S4
    
    cmp x,7 ;compara posicion bloque
    je S5
    
    cmp x,8;compara posicion bloque
    je S5
    
    
sigue: 
    mov ah,0h ;interrupcion de tecla se queda esperando
    int 16h
    cmp x,9      ;compara tama?o la posision x
    je cicloaux    ;Salta si es igual
    jmp  ciclo   ;Salta al ciclo de nuevo
cicloaux:
    mov x,00 ;devuelve a o el valor de x 
    mov contador,182    ;resetea el contador del tiempo
    jmp  ciclo   ;Salta al ciclo de nuevo   
S0:
    mov dx, 48 ;EL ASCII DEL 0
    mov ah, 02h ; IMPRIRMIR ASCII DEL NUMERO
    int 21h ;
    jmp sigue
S1:
    mov dx, 49 ;EL ASCII DEL 1
    mov ah,02h ;IMPRIMIR
    int 21h 
    call timer
    jmp sigue
S2:
    mov dx, 50
    mov ah, 02h
    int 21h
    call timer
    jmp sigue
S3:
    mov dx, 51
    mov ah,02h
    int 21h
    call timer
    jmp sigue
S4:
    mov dx, 52
    mov ah, 02h
    int 21h
    call timer
    jmp sigue

S5:
    mov dx, 53
    mov ah, 02h
    int 21h
    call timer
    jmp sigue
  
Salir:   
     
    mov ax,4c00h ;instruccion para terminar el programa
    int 21h

    miProg ENDP



timer proc near
    MOV AX, DATA
    MOV DS, AX
    
    ;Guardar vector
    MOV DI, 0
    MOV ES, DI
    MOV DI, 32 ;offset timer donde esta
    
    MOV AX,ES:[DI];se guarda todo el offset
    MOV IPViejo8, AX
    MOV AX, ES:[DI+2];aca empieza el CS
    MOV CSViejo8, AX
    
    ;PonVector
    
    MOV word ptr ES:[DI], offset miTimer ;setea nuestro nuevo indice de timer
    MOV word ptr ES:[DI+2], SEG miTimer ;setea nuestro nuevo cs 
       
    
    
espera: 
    STI ;habilitan las interrupciones
    CMP contador, 0
    JE continuar
    mov ah,01h ; Espera que se aprete tecla
    int 16h    ; que solo es
    cmp al, 32 ; la tecla espacio
    jne espera
    jmp sigue
    
continuar:
    CLI ;cancela interrupcion
    MOV AX, IPViejo8   ;devuelve todos 
    MOV ES:[DI], AX    ; los registros antiguos que se
    MOV AX, CSViejo8   ; guardaron antes de usar la rutina
    MOV ES:[DI+2], AX  ;
    STI
    
    MOV DX,offset msg ;imprime mensaje
    MOV AH,9
    INT 21H
    
    jmp Salir 

miTimer:

    Push AX
    push DS
    
    DEC contador
         
    ;Fin interrupcion
    MOV AL, 20H
    OUT 20H, AL
    POP DS
    POP AX
    IRET
    timer endp
    
CODE ENDS
END miProg