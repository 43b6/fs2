// yu-poison.c for doctor �ƹ�����ɢ
#include <ansi.h>
inherit COMBINED_ITEM;
void create()
{
        set_name("�ƹ�����ɢ",({"ugeposisan"}));
        set("unit", "��");
        set("base_unit", "��");
        set("base_weight", 1);
        set_amount(1);
        setup();
}
void init()
{      add_action("do_throw","throw");       }

int do_throw(string arg)
{
   object me,target;
   me = this_player();
   target = present(arg, environment(me));
   if (!target) return notify_fail("�Ҳ����������.\n");
   if(!arg) return notify_fail("ָ���ʽ: throw <Ŀ��>��\n");
   if( !me->is_fighting() ) return notify_fail("�ƹ�����ɢֻ����ս����ʹ�á�\n");
   if( (int)me->query_skill("godcure") > (int)target->query_skill("move")/2)
{
   message_vision(HIC"$N����$n�����ƹ�����ɢ��\n"NOR,me,target);
   message_vision(HIC"ֻ��$n���㲻��, �����˴����Ķ�ɢ, ���Ϸ���һ����ס�\n"NOR,me,target);
   message_vision(HIW"$n����ɢ����, ����������ȫʧ��ͬ���ˡ�\n"NOR,me,target);
   target->set("force",0);
   me->start_busy(1);
}   else {
   message_vision(HIC"$N����$n�����ƹ�����ɢ��\n"NOR,me,target);
   message_vision(HIC"$Nһ������, ֻ��$n������ض��˿���\n"NOR,me,target);
}

       add_amount(-1);
       return 1;
}


