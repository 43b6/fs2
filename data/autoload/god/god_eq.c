inherit ITEM;
// ���벻��͵������ by swy
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create()
{
set_name(HIW"�ɽ�װ��"NOR,({"god-eq"}));
  set("long",HIG"�������׵��ɽ�װ��(open god or close god)��"NOR);
  set("unit","��"); 
        if( clonep() )
                set_default_object(__FILE__);
        else { 
        set("no_auc",1);
        set("no_sell",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_give",1);
set("no_steal",1);
  setup();
}
}
int query_autoload()
{
 return 1;
}
void init() 
{       object me=this_player();
        object ob;
        ob=present("god-eq",me);
if(ob&&ob->name()==HIW"�ɽ�װ��"NOR)
{
 add_action("do_open","open");
 add_action("do_close","close");
}
}

int do_open(string str) 
{
object me,eq01,eq02,eq03,eq04,eq05,eq06,eq07,eq08,eq09,eq10,eq11,eq12,eq13,eq14;
object ob;
  string name;
  me=this_player();
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "god")
          return 0;
  ob=present("god-eq",me);
if(ob->query_temp("god")==1)
  return notify_fail(HIG"�ɽ�װ���ѷֻ��ˣ�\n"NOR);
message_vision(HIY"\n$N���ɽ�װ�������������ɸ����ݵ�װ����\n\n"NOR,this_player());
eq01 = new("/nets/god/god_gloves");
eq02 = new("/nets/god/god_boots");
eq03 = new("/nets/god/seven_ring");
eq04 = new("/nets/god/god_cloak");
eq05 = new("/nets/god/god_belt");
eq07 = new("/nets/god/god_armband");
eq08 = new("/nets/god/god_neck");
eq09 = new("/nets/god/god_legging");
eq10 = new("/nets/god/god_cloth");
eq11 = new("/nets/god/god_skirt");
eq12 = new("/nets/god/god_wrists");
eq13 = new("/nets/god/god_hat");
eq14 = new("/nets/god/god_shield");
eq01->set("no_steal",1);
eq02->set("no_steal",1);
eq03->set("no_steal",1);
eq04->set("no_steal",1);
eq05->set("no_steal",1);
eq07->set("no_steal",1);
eq08->set("no_steal",1);
eq09->set("no_steal",1);
eq10->set("no_steal",1);
eq11->set("no_steal",1);
eq12->set("no_steal",1);
eq13->set("no_steal",1);
eq14->set("no_steal",1);
  eq01->move(this_player());
  eq02->move(this_player());
  eq03->move(this_player());
  eq04->move(this_player());
  eq05->move(this_player());
  eq07->move(this_player());
  eq08->move(this_player());
  eq09->move(this_player());
  eq10->move(this_player());
  eq11->move(this_player());
  eq12->move(this_player());
  eq13->move(this_player());
  eq14->move(this_player());
  ob->set_temp("god",1);
   me->set_temp("god",1);
  return 1;
}

int do_close(string str)
{
  object me,ob;
  string name;
  me=this_player();
  ob=present("god-eq",me);
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "god")
          return 0;
if(me->query_temp("god")!=1)
  return notify_fail("�㲢û�п����ɽ�װ����\n");
if(ob->query_temp("god")==1) {
ob->delete_temp("god");
destruct(present("seven_ring",me));
destruct(present("moon_bracelet",me));
destruct(present("angel_skirt",me));
destruct(present("dragon_god_shield",me));
destruct(present("dragon_eye",me));
destruct(present("rain_god_legging",me));
destruct(present("light_gloves",me));
destruct(present("bird_cloth",me));
destruct(present("god cloak",me));
destruct(present("Sun_shoes",me));
destruct(present("rainbow_belt",me));
destruct(present("thunder_god_hat",me));
destruct(present("God_Armband"));
me->delete_temp("god");
message_vision(HIW"\n$Nж�����е�װ��֮�󣬸�����װ���Զ��ظ����ɽ�װ����\n\n"NOR,me);
}
return 1;
}

