#include <ansi.h>
#include <combat.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int main(object me, string arg)
{
        object obj,ob;
        object target;
        string st1, st2, po;
        if(!arg)
        return notify_fail("ָ���ʽ��throw <��> to <��>\n");
        if(sscanf(arg,"%s to %s",st2, st1) != 2)
        return notify_fail("ָ���ʽ��throw <��> to <��>\n");
        if(!ob=present(st2,me))
        return notify_fail("�������û�����ֶ�����\n");
        if(!ob->query("can_throw"))
        return notify_fail("���ֶ�����������ʹ�á�\n");
 if(environment(me)->query("no_fight")==1)
 return notify_fail("�����ֹս����\n");
 if(me->query("class") != "poisoner")
 return notify_fail("ֻ��ħ��ͽ���á�\n");
        if(!objectp( obj = present(st1, environment(me))))
        return notify_fail("���빥��˭��\n");
if(obj->query_temp("throw-poison")==3)
return notify_fail("���ض�����ֻ�������Ρ�\n");
    if( obj->query("no_poison") )
        return notify_fail("��һ��㲻�ܶ����ǲ��ܶ���\n");
        if( !obj->is_character() )
        return notify_fail("�����һ�㣬�ǲ��������\n");
if( obj->query_temp("netdead") )
return notify_fail("���˶����У�����������\n");
  if(!living(obj)) return notify_fail("�����һ�㣬�ǲ��������\n");
        if(obj==me) return notify_fail("�㲻�ܹ����Լ���\n");
if(userp(obj)&&obj->query("age")<16) return notify_fail("���ܶ������á�\n");
        if( me->is_fighting() ) me->start_busy(1);
        message_vision(
        HIG "$N������ó�һ��"+ob->name()+"��$n��ȥ��\n" NOR,me,obj);
        if(50>random(100))
        {
        message_vision(
        GRN "$n���㲻������"+ob->name()+"���У�\n" NOR,me,obj);
        po = ob->query("poison_type");
        obj->apply_condition(po,obj->query_condition(po)+ob->query("poison_power"));
if(obj->query("id")=="degu sa") obj->add_temp("throw-poison",1);
obj->set("suck",me->query("functions/suck/level"));
obj->set("five",me->query("functions/five/level"));
        }
        else
        {
          message_vision(
          GRN "$n��æ��һ�����о����յı��˿�ȥ������$N��ʼչ��������\n" NOR,me,obj);
          obj->kill_ob(me);
        }
        ob->add_amount(-1);        
        return 1;
}

int help(object me)
{
   write(@HELP

ָ���ʽ��throw <��> to <Ŀ����>

˵�������ָ�����������ս���жԵз��ö���

HELP
   );
   return 1;
}
