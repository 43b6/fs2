inherit ITEM;
#include <ansi.h>
void create()
{
        set_name(HIY"������"NOR, ({ "whirl sound flute","flute"}) );
	if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "֦");
        set("long", "����һ������ɫ�ĳ��ѣ���˵���������Ĺ���ʹ��(g-use)�����Ը���
�ռ䡣\n");
        set_weight(100);
        set("value",0);
	     }
}

void init()
{
add_action("do_use","g-use");
}

int do_use(string arg)
{
object me=this_player();
object ob=this_object();
object room=environment(me);
if(!arg||arg!="flute")
return notify_fail("��Ҫʹ��ʲô������\n"); 
if(!room->query("ghost-hole/can_use_flute"))
return notify_fail(HIW"�˵���ֻ���������Ĺȵİ׶�ʹ�á�\n"NOR);
if(!me->query_temp("ghost-hole/evil-ghost-flute"))
{
message_vision(HIR"$N�����ʮ��������������������û��þͶ����ˣ���\n"NOR,me);
destruct(ob);
return 1;
}
message_vision(HIY"$Nͻ��ɱ¾֮�ࡢ����֮ʹ�������ߵ�������ѣ�˲����������˿ռ䣬һ
����$N�����˽�ȥ����\n"NOR,me);
me->move("/open/ghost-hole/g-r01");
message_vision(HIW"һ�������ĵ����������ռ�ͻȻ������һ���Ѻۣ�$N�ӿռ���ѷ������˳�
������\n"NOR,me);
message_vision(HIR"$N���ϵ�"HIY"������"HIR"���ںķ��˼������Դ�������Ļ�����һ�Ʒϻ���...\n"NOR,me);
destruct(ob);
return 1;
}
