#include <ansi.h>
#include <combat.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
inherit F_FUNCTION;
int main(object me,string arg)
{
object target;
string st1;
int lolo,fun;
int jojo;
int sk=me->query_skill("coldpoison",1);
fun=me->query("functions/suck/level");
jojo=me->query("poison");
lolo=me->query_skill("poisonforce",1);
if (!arg||sscanf(arg,"%s",st1)!=1)
return notify_fail("ָ���ʽ: suck <��>\n");
if (!(target=present(st1,me)))
    return notify_fail("�������û�����ֶ�, ��Ҫ��ʲô?\n");
if (!target->query("poison_type"))
    return notify_fail("�����ۻ軨��ѽ!?���Ƕ���?\n");
if (me->query_condition("poison") > 0 )
   return notify_fail("��̫����Ҫ����� !\n");
if(sk<60)
return notify_fail("������涾��û����һ���ȼ�����Ͱɡ�\n");
message_vision(HIW"$N�������, �˹�������"+target->name()+"�Ķ��ԡ�\n"NOR,me);
me->add("poison",random(30));
me->apply_condition("poison",3+(int)(fun/10));  
target->add_amount(-1);
if(fun<100) function_improved("suck",random(700));
return 1;
}

int help(object me)
{
   write(@HELP

ָ���ʽ��suck <��>

˵�������ָ������������ն�ҩ�еĶ��ԡ�

HELP
   );
   return 1;
}


