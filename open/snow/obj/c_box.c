inherit ITEM;
#include <ansi.h>
#include "../../open.h"
int call_guard(int i);
void create()
{
	set_name(MAG "紫玉霞盒" NOR,({"mag box","box"}));
	set("long","这是一个特殊的盒子，外壳发出闪闪的紫光，且附着两条封条，而里头所装的是独孤愁生前的衣物。\n");
     set("unit","俱");
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
		return notify_fail("你在找什么 ?\n");
	if(this_object()->query_temp("tear_paper")!=1)
	tell_object(this_player(),"你发现在这个盒子上有两道封条(fon papers)。\n");
	if(this_object()->query_temp("tear_paper")==1)
		return notify_fail("你发现盒子上有两道被撕掉的封条。\n");
	return 1;
}
int do_tear(string str)
{
	int i;
	if(this_object()->query_temp("tear_paper")==1)
		return notify_fail("盒子上的封条已经被撕开。\n");
	seteuid(getuid());
	if(str!="fon papers")
		return 0;
	tell_object(this_player(),"你用手撕开了盒子上的封条。\n");
	message_vision(
	"雪苍武者走了过来，发现你撕掉了封条。\n雪苍武者大暍：小贼 !! 你想偷什么 !!\n" NOR,this_player());
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
		return notify_fail("箱内空无一物。\n");
	message_vision( "$N从"+this_object()->name()+"搜出一本诗集。\n",
		this_player() );
	this_object()->set("opened",1);
	ob = new( "/open/snow/obj/poet_book" );
	ob->move(this_player());
	return 1;
}
