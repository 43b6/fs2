inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
set_name(HIW"����ɽǧ����֥��"NOR, ({"thousand pill","pill"}) );
set("long","�ɳ���ɽǧ����֥������������ҩ��, ������������Ѹ�ٻָ�������Ĺ�Ч!!\n");
set("base_unit", "��");
set("unit", "��");
set("no_sell",1);
set("no_steal",1);
set("value",90000);
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
if (me->query_condition("mon_pill")>0)
return notify_fail("���������Ȼ�����ų���ɽǧ����֥��ҩЧ!!\n");
message_vision(HIW"$N���³���ɽǧ����֥��, ������Ѹ�ٻָ�!!\n"NOR, me);
me->receive_curing("kee",2000);
me->receive_heal("kee",2000);
me->receive_curing("gin",1000);
me->receive_heal("gin",1000);
me->receive_curing("sen",1000);
me->receive_heal("sen",1000);
me->apply_condition("mon_pill",10);
add_amount(-1);
return 1;
}

