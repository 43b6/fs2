inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
        set_name(HIY"�����"NOR,({"earth board","board"}));
        set_weight(10);
        if(clonep())
                set_default_object(__FILE__);
        else
        {
        set("value",10000);
        set("unit","��");
	set("base_unit","��");
        set("long",
"һ�����ε�ľ��, ��������������, �о����ƺ��и���..
ҥ��˵�����������(puton)ĳһ��������, ���Խ���ľ��ĸ���
������̧����(pull)��\n");
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
        if(!env->query("earth-area") || !env->query("evil-area") || !me->query_temp("evil/king/statue_search_earth"))
        {
                message_vision("$N�Ҳ������Է���$n�ĵط���\n",me,this_object());
                return notify_fail("��ͻȻ�����Լ�����ɵ�ϡ�\n");
        }
        message_vision("$N��$n�����ڵ����µĿ�϶��\n",me,this_object());
        env->set_temp("can_pull",1);
	add_amount(-1);
        return 1;
}
