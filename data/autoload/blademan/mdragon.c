inherit ITEM;
// ���벻��͵������ by swy
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create()
{
set_name(HIB"ħ��װ��"NOR,({"mdragon-eq"}));
  set("long",HIY"�������׵�ħ��װ��(open mdragon or close mdragon)��"NOR);
  set("unit","��");  
        set("no_auc",1);
set("no_put",1);
        set("no_sell",1);
set("no_give",1);
set("no_drop",1);
set("no_steal",1);
  setup();
}

int query_autoload()
{
 return 1;
}
void init() 
{       object me=this_player();
        object ob;
        ob=present("mdragon-eq",me);
if(ob&&ob->name()==HIB"ħ��װ��"NOR)
{
 add_action("do_open","open");
 add_action("do_close","close");
}
}

int do_open(string str) 
{
object me,eq01,eq02,eq03,eq04,eq05,eq06,eq07,eq08,eq09,eq10,eq11,eq12,eq13;
object ob;
  string name;
  me=this_player();
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "mdragon")
          return 0;
  ob=present("mdragon-eq",me);
if(ob->query_temp("mdragon")==1)
  return notify_fail("ħ��װ���ѷֻ��ˣ�\n");
message_vision(HIY"\n$N��ħ��װ���������������𶯣���һ�������ɸ����ݵ�װ����\n\n"NOR,this_player());
  eq01 = new("/daemon/class/blademan/obj/mshield");
  eq02 = new("/daemon/class/blademan/obj/mboots");
  eq03 = new("/daemon/class/blademan/obj/marmband");
  eq04 = new("/daemon/class/blademan/obj/mcloth");
  eq05 = new("/daemon/class/blademan/obj/mhands");
  eq06 = new("/daemon/class/blademan/obj/mhelmet");
  eq07 = new("/daemon/class/blademan/obj/mleggings");
  eq08 = new("/daemon/class/blademan/obj/mneck");
  eq09 = new("/daemon/class/blademan/obj/mpants");
  eq11 = new("/daemon/class/blademan/obj/msurcoat");
  eq12 = new("/daemon/class/blademan/obj/mwaist");
  eq13 = new("/daemon/class/blademan/obj/mwrists");
eq01->set("no_steal",1);
eq02->set("no_steal",1);
eq03->set("no_steal",1);
eq04->set("no_steal",1);
eq05->set("no_steal",1);
eq06->set("no_steal",1);
eq07->set("no_steal",1);
eq08->set("no_steal",1);
eq09->set("no_steal",1);
eq11->set("no_steal",1);
eq12->set("no_steal",1);
eq13->set("no_steal",1);
  eq01->move(this_player());
  eq02->move(this_player());
  eq03->move(this_player());
  eq04->move(this_player());
  eq05->move(this_player());
  eq06->move(this_player());
  eq07->move(this_player());
  eq08->move(this_player());
  eq09->move(this_player());
  eq11->move(this_player());
  eq12->move(this_player());
  eq13->move(this_player());
  ob->set_temp("mdragon",1);
   me->set_temp("mdragon",1);
  return 1;
}

int do_close(string str)
{
  object me,ob;
  string name;
  me=this_player();
  ob=present("mdragon-eq",me);
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "mdragon")
          return 0;
if(me->query_temp("mdragon")!=1)
return notify_fail("�㲢û�п���ħ��װ����\n");
if(ob->query_temp("mdragon")==1) {
destruct(present("mdragon bracelet",me));
destruct(present("mdragon belt",me));
destruct(present("mdragon surcoat",me));
destruct(present("mdragon pants",me));
destruct(present("mdragon gem",me));
destruct(present("mdragon legging",me));
destruct(present("mdragon helmet",me));
destruct(present("mdragon hands",me));
destruct(present("mdragon cloth",me));
destruct(present("mdragon armband",me));
destruct(present("mdragon boots",me));
destruct(present("mdragon shield",me));
me->delete_temp("mdragon");
ob->delete_temp("mdragon"); 
message_vision(HIW"\n$N������Ԫ����һ�𣬶�ʱ����װ��������������ԭʼ����̬��\n\n"NOR,me);
}
return 1;
}

