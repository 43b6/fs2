inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
set_name(HIG"������Ԫ"NOR, ({"green-dragon pill","pill"}) );
set("long","��������ȡ�õľ�Ԫ, �����п���ʱ���ӵ��͵�����!!\n");
set("base_unit", "��");
set("unit", "��");
set("no_sell",1);
set("no_steal",1);
set("value",99000);
set_amount(1);
setup();
}
void init()
{
add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{
object ob,me=this_player();
if( !arg )                     
return 0;
if( !ob = present(arg,me) )     
return 0;
if( ob != this_object() )       
return 0;
if (me->query_condition("blade_pill")>0)
return notify_fail("ҩЧδ���޷��ٳ�!!\n");
message_vision(HIG"$N����������Ԫ, ����ͻ��!!\n"NOR, me);
me->add_temp("apply/blade",50);
me->apply_condition("blade_pill",20);
add_amount(-1);
return 1;
}
