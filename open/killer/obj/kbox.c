inherit ITEM;
#include <ansi.h>

int call_guard(int i);

void create()
{
set_name(MAG "装备箱" NOR,({"hate box","box"}));
set("long","这是一个平凡的盒子，且附着封条。\n");
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
if(str!="box"&&str!="eq box")
return notify_fail("你在找什么 ?\n");
if(this_object()->query_temp("tear_paper")!=1)
tell_object(this_player(),"你发现在这个箱上有封条(fon papers)。\n");
if(this_object()->query_temp("tear_paper")==1)
return notify_fail("你发现箱上有道被撕掉的封条。\n");
return 1;
}

int do_tear(string str)
{
  int i;
  if(this_object()->query_temp("tear_paper")==1)
    return notify_fail("封条已经被撕开。\n");
  seteuid(getuid());
  if(str!="fon papers")
    return 0;
  tell_object(this_player(),"你用手撕开了箱上的封条。\n");
  this_object()->set_temp("tear_paper",1);
    return 1;
}

int do_open( string arg )
{
  object ob,me;
  me=this_player();
  if( !arg || arg != "box" ) 
    return 0;
  if( !this_object()->query_temp("tear_paper") ) return 0;
  if( query("opened") ) 
    return notify_fail("箱内空无一物。\n");
  message_vision( "$N从"+this_object()->name()+"拿出一些装备。\n",me );
  this_object()->set("opened",1);
  ob = new( "/open/killer/obj/bellstar.c" );
  ob->add_amount(39);
  ob->move(me);
  ob = new( "/open/killer/obj/s_pill.c" );
  ob->add_amount(2);
  ob->move(me);
  ob = new( "/open/killer/obj/k_ring.c" );
  ob->move(me);
  return 1;
}