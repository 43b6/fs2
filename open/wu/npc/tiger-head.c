#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("���ǻ���ͷ", ({ "tiger-head","head"}) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","�����ײеĶ��ǻ���ͷ,������<cut>�������Ľ�(cornu)...\n");
                set("value", 0);
        }
}
void init()
{
    add_action("do_cut","cut");
}
int do_cut(string arg)
{
    object me, ob;

    me=this_player();
    ob=new("/open/doctor/obj/cornu");
    
    if(!arg || arg != "cornu")
        return notify_fail("��Ҫ��ʲô������\n");
    if(!me->query_temp("find_cornu")==1 && ob->query_temp("for_cut")==1)
        return notify_fail("�㻹Ҫ��ʲô������[���ǻ�]��ͷ��...\n");
        write("�����ּ��˰ѵ�����ৡ���һ�����Ѷ��ǻ�ͷ�ĽǸ���������...\n"NOR);

        ob->move(me);
        ob->set_temp("for_cut",1);
        me->delete_temp("find_cornu");
        me->set_temp("get_cornu",1);
        return 1;
}

