inherit ITEM;
// ����ħ��eq...��sula�����۽�Ʒ....by cgy
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create()
{
set_name(HIG"����ռ�װ��"NOR,({"fs-eq"}));
  set("long",HIY"�������׵Ŀ���ռ�װ��(open fs or close fs)��"NOR);
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
        ob=present("fs-eq",me);
if(ob&&ob->name()==HIG"����ռ�װ��"NOR)
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
  if(name != "fs")
          return 0;
  ob=present("fs-eq",me);
if(ob->query_temp("fs")==1)
  return notify_fail("����ռ�װ���ѷֻ��ˣ�\n");
message_vision(HIY"\n$N���І����дʣ�����ռ�װ����һ�������ɸ����ݵ�װ����\n\n"NOR,this_player());
  eq01 = new("/open/dancer/obj/fseq/mshield");
  eq02 = new("/open/dancer/obj/fseq/mboots");
  eq03 = new("/open/dancer/obj/fseq/marmband");
  eq04 = new("/open/dancer/obj/fseq/mcloth");
  eq05 = new("/open/dancer/obj/fseq/mhands");
  eq06 = new("/open/dancer/obj/fseq/mhelmet");
  eq07 = new("/open/dancer/obj/fseq/mleggings");
  eq08 = new("/open/dancer/obj/fseq/mneck");
  eq09 = new("/open/dancer/obj/fseq/mpants");
  eq10 = new("/open/dancer/obj/fseq/mring");
  eq11 = new("/open/dancer/obj/fseq/msurcoat");
  eq12 = new("/open/dancer/obj/fseq/mwaist");
  eq13 = new("/open/dancer/obj/fseq/mwrists");
eq01->set("no_steal",1);
eq02->set("no_steal",1);
eq03->set("no_steal",1);
eq04->set("no_steal",1);
eq05->set("no_steal",1);
eq06->set("no_steal",1);
eq07->set("no_steal",1);
eq08->set("no_steal",1);
eq09->set("no_steal",1);
eq10->set("no_steal",1);
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
  eq10->move(this_player());
  eq11->move(this_player());
  eq12->move(this_player());
  eq13->move(this_player());
  ob->set_temp("fs",1);
   me->set_temp("fs",1);
  return 1;
}

int do_close(string str)
{
  object me,ob;
  string name;
  me=this_player();
  ob=present("fs-eq",me);
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "fs")
          return 0;
if(me->query_temp("fs")!=1)
return notify_fail("�㲢û�п�������ռ�װ����\n");
if(ob->query_temp("fs")==1) {
destruct(present("Swy_bracelet",me));
destruct(present("Acelan_belt",me));
destruct(present("Wade_cloak",me));
destruct(present("Fund_ring",me));
destruct(present("acky_skirt",me));
destruct(present("Anmy_gem",me));
destruct(present("Server_legging",me));
destruct(present("Konn_helmet",me));
destruct(present("Wataru_hands",me));
destruct(present("Chan_cloth",me));
destruct(present("Lum_armband",me));
destruct(present("Urd_shoes",me));
destruct(present("Cgy_shield",me));
me->delete_temp("fs");
ob->delete_temp("fs"); 
if(me->query_temp("ref_shield")){
me->delete_temp("ref_shield");}
message_vision(HIC"\n$N���������ʱ���Ͽ���ռ�װ������������ԭʼ����̬��\n\n"NOR,me);
}
return 1;
}

