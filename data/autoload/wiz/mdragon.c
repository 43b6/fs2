//made by Falcon,copy ande re-edit by qax
inherit ITEM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create()
{
  set_name(HIB"ħ��װ��"NOR,({"mdragon eq","mdragon"}));
  set("long",HIY"�������׵�ħ��װ��(open mdragon or close mdragon)��\n"NOR);
  set("unit","��");  
        set("no_sell",1);
        set("no_auc",1);
set("no_drop",1);
set("no_give",1);
set("no_put",1);
  setup();
}

int query_autoload()
{
 return 1;
}
void init() 
{
 add_action("do_open","open");
 add_action("do_close","close");
 return;
}

int do_open(string str) 
{
  object room,me,eq01,eq02,eq03,eq04,eq05,eq06,eq07,eq08,eq09,eq10,eq11,eq12,eq13;
  string name;
  me=this_player();
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "mdragon")
          return 0;
  if(me->query_temp("mdragon",1))
  return notify_fail("���Ѿ���ħ��װ���ֻ��ˣ�\n");
  message_vision(HIY"$N��ħ��װ������һ�׷��ѳɸ�����\n"NOR,this_player());
  me->set_temp("mdragon",1);
  room=environment(me);
  eq01 = new("/daemon/class/blademan/obj/mblade");
  eq02 = new("/daemon/class/blademan/obj/mboots");
  eq03 = new("/daemon/class/blademan/obj/marmband");
  eq04 = new("/daemon/class/blademan/obj/mcloth");
  eq05 = new("/daemon/class/blademan/obj/mhands");
  eq06 = new("/daemon/class/blademan/obj/mhelmet");
  eq07 = new("/daemon/class/blademan/obj/mleggings");
  eq08 = new("/daemon/class/blademan/obj/mneck");
  eq09 = new("/daemon/class/blademan/obj/mpants");
  eq10 = new("/daemon/class/blademan/obj/mring");
  eq11 = new("/daemon/class/blademan/obj/msurcoat");
  eq12 = new("/daemon/class/blademan/obj/mwaist");
  eq13 = new("/daemon/class/blademan/obj/mwrists");
  eq01->move(this_player());
  eq02->move(this_player());
  eq03->move(this_player());
  eq04->move(this_player());
  eq05->move(this_player());
  eq06->move(this_player());
  eq07->move(this_player());
  eq08->move(this_player());
  eq09->move(this_player());
  eq10->move(this_player());
  eq11->move(this_player());
  eq12->move(this_player());
  eq13->move(this_player());
  return 1;
}

int do_close(string str)
{
  object me;
  string name;
  me=this_player();
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "mdragon")
          return 0;
        me->delete_temp("mdragon");
        me->delete("mdragon");  
destruct(present("bracelet"));
destruct(present("belt"));
destruct(present("surcoat"));
destruct(present("ring"));
destruct(present("pants"));
destruct(present("gem"));
destruct(present("legging"));
destruct(present("helmet"));
destruct(present("hands"));
destruct(present("cloth"));
destruct(present("armband"));
destruct(present("boots"));
destruct(present("mblade"));
write("ok.\n");
return 1;
}

