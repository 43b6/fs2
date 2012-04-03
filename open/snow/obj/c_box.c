inherit ITEM;
#include <ansi.h>
#include "../../open.h"
int call_guard(int i);
void create()
{
	set_name(MAG "����ϼ��" NOR,({"mag box","box"}));
	set("long","����һ������ĺ��ӣ���Ƿ����������Ϲ⣬�Ҹ�����������������ͷ��װ���Ƕ��³���ǰ�����\n");
     set("unit","��");
     set_weight(1000000);
     set("value",10000);
}
void init()
{
	add_action("do_search","search");
	add_action("do_tear","tear");
	add_action("do_open","open");
}
int do_search(string str)
{
	if(str!="box"&&str!="mag box")
		return notify_fail("������ʲô ?\n");
	if(this_object()->query_temp("tear_paper")!=1)
	tell_object(this_player(),"�㷢�����������������������(fon papers)��\n");
	if(this_object()->query_temp("tear_paper")==1)
		return notify_fail("�㷢�ֺ�������������˺���ķ�����\n");
	return 1;
}
int do_tear(string str)
{
	int i;
	if(this_object()->query_temp("tear_paper")==1)
		return notify_fail("�����ϵķ����Ѿ���˺����\n");
	seteuid(getuid());
	if(str!="fon papers")
		return 0;
	tell_object(this_player(),"������˺���˺����ϵķ�����\n");
	message_vision(
	"ѩ���������˹�����������˺���˷�����\nѩ�����ߴ󕢣�С�� !! ����͵ʲô !!\n" NOR,this_player());
	for(i=0;i<10;i++) call_guard(i);
	this_object()->set_temp("tear_paper",1);
	return 1;
}
int call_guard(int i)
{
	object guard;
	string place;
	if(i<2) place="ducu_room_in2";
	else if(i<5) place="ducu_room_in1";
	else if(i<7) place="ducu_room_in";
	else place="ducu_room";
	seteuid(getuid());
	guard=new(SNOW_NPC"snow_guard");
	guard->move(SNOW_ROOM+place);
	guard->kill_ob(this_player());
	guard->set_leader(this_player());
	guard->set_leader(this_player());
}
int do_open( string arg )
{
	object ob;
	if( !arg || arg != "box" )
			return 0;
	if( !this_object()->query_temp("tear_paper") ) return 0;
	if( query("opened") ) 
		return notify_fail("���ڿ���һ�\n");
	message_vision( "$N��"+this_object()->name()+"�ѳ�һ��ʫ����\n",
		this_player() );
	this_object()->set("opened",1);
	ob = new( "/open/snow/obj/poet_book" );
	ob->move(this_player());
	return 1;
}
