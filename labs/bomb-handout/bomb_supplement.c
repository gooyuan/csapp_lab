
/**
 * 皆为伪代码
 */
void signal(){

}

void initialize_bomb(){
    // a in %edi, *p in %esi, *input in %rdi
    void *p = sig_handler;
    int a = 2;
    signal();
}

bool string_not_equal(char* input){
    // *input in %rdi, pwd in %esi(0x402400)
    // str in %rbx
    char* str = input;
}

void explode_bomb(){

}

void phase_1(char *input){
    // *input in %rdi, pwd in %esi(0x402400)
    if(string_not_equal(input)){
        explode_bomb();
    }
}

void read_six_number(){
    %rdx = %rsi;
    %rcx = %rsi + 0x4;
    %rax = %rsi + 0x14;
    %rsp + 0x8 = %rax;
    %rax = %rsi + 0x10;
    %rsp = %rax;
    %r9 = %rsi + 0xc;
    %r8 = %rsi + 0x8;
    %esi = 0x4025c3;
    %eax = 0x0;
    if(scanf() <=5){
        explode_bomb();
    }
}

void phase_2(char* input){
    %rdi = read_line();
    %rsi = %rsp;
    read_six_number();
    // %rdx = %rsi, %rcx = %rsi + 0x4;  %rsi + 0x8 = %rsi + 0x14;
    // %rsp= %rsi + 0x10; %r9 = %rsi + 0xc; %r8 = %rsi + 0x8; 
    // %esi = 0x4025c3
    if($rsp == 0x1){
        // 最多比较6个数
        %rbx = %rsp + 0x4;
        %rbp = %rsp + 0x18;
    label_400f17:
        %eax = %rbx - 0x4;
        %eax = %eax + %eax;
        // 这里是关键
        if((%rbx) == %eax){
            %rbx += 0x4;
            if(%rbp != %rbx){
                goto loop;   
            }
        }else{
            explode_bomb();
        }
    }else{
        explode_bomb();
    }
}

void phase_3(char* input){
    %rcx = 0xc + %rsp;
    %rdx = 0x8 + %rsp;
    %esi = 0x4025cf;
    %eax = scanf();
    if(%eax > 1){
        if($(rsp + 0x8) <= 0x7){
            %eax = $(rsp + 0x8);
            // 根据下面的逻辑， 可判断是一个switch语句
            goto *(0x402470 + 8*rax)
            // case 0xcf, 0x2c3, 0x100, 
            // 0x185,0xce,0x2aa, 0x147
            // mov $0x137, %eax 这一句在此函数中并没有跳转?
        
        }else{
            explode_bomb();
        }
    }else{
        explode_bomb();
    }

}
void phase_4(char* input){

}
void phase_5(char* input){

}
void phase_6(char* input){

}
void phase_defused(){

}
