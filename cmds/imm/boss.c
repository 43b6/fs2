// boss.c                                           
                                                    
#include <ansi.h>                                   
#define SYNTAX  "ָ���ʽ��boss [��ʦ����]\n"       
                                                    
inherit F_CLEAN_UP;                                 
                                                    
int main(object me, string arg)                     
{                                                   
        string name, str;                           
                                                    
        if( !arg ) name = me->query("id");          
                                                    
        else if( sscanf(arg, "%s", name)!=1 )       
                return notify_fail(SYNTAX);         
                                                    
        if ((str=SECURITY_D->get_boss(name)) == "") 
                write(name + " ��û����˾��\n");    
        else                                                   
                write(name + " �Ķ�ͷ��˾�� " + str + "��\n"); 
        return 1;                                              
}                                                              
                                                               
int help()                                                     
{                                                              
        write(SYNTAX + @TEXT                                   
                                                               
�ҳ�ĳλ��ʦ�Ķ�ͷ��˾��                                       
TEXT                                                           
        );                                                     
}                                                              

