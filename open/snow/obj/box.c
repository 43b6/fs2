inherit ITEM;
#include <ansi.h>
#include "../../open.h"
void create()
{
     set_name(HIR "���³������" NOR,({"box"}));
     set("long","ѩ���ɵ��������Ŷ��³�����ѣ�������š���תа�ơ��ĸ����֡�\n");
     set("unit","��");
     set_weight(1000000);
     set("value",10000);
     setup();
}
void init()
{
	add_action("do_search","search");
	add_action("do_push","push");
	add_action("do_enter","enter");
}
int do_search(string str)
{
	if(str!="box")
		return notify_fail("������ʲô ?\n");
	tell_object(this_player(),"�㷢���������ϵ��ĸ��֣�ÿ���ֶ���һ�����ư���һ��Ķ�����\n");
	return 1;
}
int do_push(string str)
{
	if(str!="��"&&str!="ת"&&str!="а"&&str!="��")
		return notify_fail("���������� ?\n");
	if(str!="а")
	{
	   message_vision(
		HIY "$N�����˰��ţ���һ��ǿ�ҵ���������$N�����˳�ȥ��\n"+HIR+"$N���˿���Ѫ�����˼����ص����ˡ�\n" NOR,this_player());
	   this_player()->add("kee",-100);
	   this_player()->move(SNOW_ROOM"ducu_room_in");
	   return 1;
	}
	tell_object(this_player(),"����ͻȻ��������һ�������˿��������˴��һ�������沢û�ж��³�����壬ֻ��һ���ܵ�(road)��\n");
	return 1;
}
int do_enter(string str)
{
	if(str!="road")
		return 0;
	tell_object(this_player(),"�������أ�һ��һ���߽��ܵ���\n");
	this_player()->move("/open/snow/room/box_in");
	return 1;
}
