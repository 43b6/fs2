// Bellicosity_Change.c
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
        int i;
        int be=me->query("bellicosity");
        int F=me->query("force"); 
        int k=me->query("kar");
        if( !arg ||  !sscanf(arg, "%d", i) )
             return notify_fail("ָ���ʽ��cmd bc <�Ӽ�ɱ��>\n");
  
         
        if( i > me->query("force") )
                return notify_fail("�������������\n");
        if( i < k && i >= 0 )
                return notify_fail("������Ҫ��"+chinese_number(k)+"�㡣\n");
        if( i > k && i < 0 )
                return notify_fail("������Ҫ��"+chinese_number(k)+"�㡣\n");

        if( (i+be)/2 >  me->query("max_force") )
                return notify_fail("��ų���ɱ��̫��,���޷����ơ�\n");
        if( (i+be) < 0 )
                return notify_fail("�㽵̫��ɱ���ˡ�\n");
        if( me->query_temp("BC")=="USED")
                return notify_fail("�������˹��С�\n");
        if ( i >=0 ) {
        me->add("force",-i);
        } else { me->add("force",i); }
        message_vision(HIC"$N��������ͼ�ı�ɱ�⡣\n"NOR,me);
        me->start_call_out((:call_other, __FILE__, "bell_change",me,i:),2);
        me->set_temp("BC","USED");
        return 1;
}
void bell_change(object me,int i)
{
        int b=random(me->query("kar"));
        if( random(me->query("kar")) + 3 >
            random(me->query("cor")) +
            random(me->query("str")) ){
            message_vision(YEL"$N��ת��ʧ�� ������ʧ�ˡ�\n"NOR,me); }
        else {
   
    if ( i >= 0 ) {
    me->add("bellicosity",i-b);
    message_vision(YEL"$N��ɱ������Լ"+chinese_number(i)+"�㡣\n"NOR,me);
         }
    else { 
    me->add("bellicosity",i+b);
    message_vision(YEL"$N��ɱ���½�Լ"+chinese_number(-i)+"�㡣\n"NOR,me);
        }
            
   }
      me->delete_temp("BC","USED");
          return ;
}

int help(object me)
{
    write(@HELP
 
ָ���ʽ�� cmd bc <ɱ��>��
 
˵�������ָ���������������תɱ��,������������������Ϊ���ޡ�
      ��: cmd bc 10  ��ʮ��
      ��: cmd bc -10 ��ʮ��
 
HELP
);
     return 1;
}
