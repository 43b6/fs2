inherit ITEM;
#include <ansi.h>

int call_guard(int i);

void create()
{
set_name(MAG "װ����" NOR,({"hate box","box"}));
set("long","����һ��ƽ���ĺ��ӣ��Ҹ��ŷ�����\n");
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
if(str!="box"&&str!="eq box")
return notify_fail("������ʲô ?\n");
if(this_object()->query_temp("tear_paper")!=1)
tell_object(this_player(),"�㷢������������з���(fon papers)��\n");
if(this_object()->query_temp("tear_paper")==1)
return notify_fail("�㷢�������е���˺���ķ�����\n");
return 1;
}

int do_tear(string str)
{
  int i;
  if(this_object()->query_temp("tear_paper")==1)
    return notify_fail("�����Ѿ���˺����\n");
  seteuid(getuid());
  if(str!="fon papers")
    return 0;
  tell_object(this_player(),"������˺�������ϵķ�����\n");
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
    return notify_fail("���ڿ���һ�\n");
  message_vision( "$N��"+this_object()->name()+"�ó�һЩװ����\n",me );
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