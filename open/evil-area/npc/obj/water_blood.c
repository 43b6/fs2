inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
        set_name(HIB"ˮѪ"NOR,({"water blood","blood"}));
        set_weight(10);
        if(clonep())
                set_default_object(__FILE__);
        else
        {
        set("value",10000);
        set("unit","ƿ");
        set("base_unit","��");
        set("long",
"һ���޳���ζ��Һ�壬ȴ����Ѫһ��ĳ��ܶȣ���ĳ������а���
Ѫ�Ż��е����󣬴�˵�У�������ˮѪ�÷���(puton)ĳ������ҡ��
(move)��ʹ��������ƣ�������һЩ����˼�������\n");
        }
	set_amount(1);
        setup();
}

void init()
{
add_action("do_puton","puton");
}

int do_puton(string arg)
{
object me,env;
        me=this_player();
        env=environment(me);
        if(!arg || arg!="����")
                return 0;
        if(!env->query("water-area") || !env->query("evil-area") || !me->query_temp("evil/king/water_search"))
        {
                message_vision("$N�Ҳ������Է���ˮѪ�ĵط���\n",me);
                return notify_fail("��ͻȻ�����Լ�����ɵ�ϡ�\n");
        }
        message_vision("$N��$n�����ڰ����ڡ�\n",me,this_object());
        env->set_temp("can_move",1);
	add_amount(-1);
        return 1;
}
