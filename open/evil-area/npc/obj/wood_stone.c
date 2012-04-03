inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
        set_name(YEL"ľ����"NOR,({"wood stone","stone"}));
        set_weight(10);
        if(clonep())
                set_default_object(__FILE__);
        else
        {
        set("value",10000);
        set("unit","��");
        set("base_unit","��");
        set("long",
"һ������ԲͲ״��ľ�顫
�������ƺ���ĳһ��ľ������(left-head)��һ���ݡ�
ҥ����������������(place)ԭ����λ�ã��ͻ�
������ĳһ������ĵط���
\n");
        }
	set_amount(1);
        setup();
}

void init()
{
add_action("do_lock","lock");
add_action("do_place","place");
}

int do_lock(string arg)
{
object me,env;
        me=this_player();
        env=environment(me);
        if(!arg || arg!="left-head")
                return 0;
        if(!env->query("wood-area") || !env->query("evil-area") || !me->query_temp("evil/king/statue_search_wood"))
                return notify_fail("����ǰû���κζ������Է����������õ�ľ���飬���Բ���Ҫ������\n");
        me->set_temp("evil/king/lock-left",1);
        tell_object(me,"�㽫�����õ����ľ����������ľ������ֲ�λ��\n");
return 1;
}


int do_place(string arg)
{
object me,env;
        me=this_player();
        env=environment(me);
        if(!arg || arg!="ľ��")
                return 0;
        if(!env->query("wood-area") || !me->query_temp("evil/king/statue_search_wood") || !env->query("evil-area"))
                return notify_fail("���Ҳ������Է��õĵط���\n");
        if( !me->query_temp("evil/king/left-head") )
        {
                message_vision("$N������Ҫ��$n���İ�\��\n",me,this_object());
                tell_object(me,"(��������[lock]�������õĲ�λ��)\n");
                return notify_fail("��ͻȻ�����Լ�����ɵ�ϡ�\n");
        }
        message_vision(YEL"$N��$n������ľ������ֲ�λ��

������һ����ľ��ͻȻ��ʼ���������

һ˲�䡫ľ��չ��˫�ֽ�$N�����˱�ס��ֻ����$N������������ľ���ڣ���ʧ������

\n"NOR,me,this_object());
        me->delete_temp("evil/king/lock-left");
        me->delete_temp("evil/king/statue_search_wood");
        me->move(__DIR__"k-02");
        message_vision("$NͻȻ�������⡣\n",me);
	add_amount(-1);
        return 1;
}
