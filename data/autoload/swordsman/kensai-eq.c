inherit ITEM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create()
{
set_name(HIY"��ʥװ��"NOR,({"kensai-eq"}));
  set("long",HIY"�ɴ�ʦ�����������ɵ����׽�ʥװ��(open kensai or close kensai)��"NOR);
  set("unit","��");
set("no_auc",1);
set("no_put",1);
set("no_sell",1);
// set("no_give",1);
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
        ob=present("kensai-eq",me);
if(ob&&ob->name()==HIY"��ʥװ��"NOR)
{
 add_action("do_open","open");
 add_action("do_close","close");
}
}

int do_open(string str)
{
object me,eq01,eq02,eq03,eq04,eq05,eq06,eq07,eq08,eq09,eq10,eq11,eq12,eq13,we;
object ob;
  string name;
  me=this_player();

  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "kensai")
          return 0;
  ob=present("kensai-eq",me);
if(ob->query_temp("kensai")==1)
  return notify_fail("��ʥװ���ѷֻ��ˣ�\n");
message_vision(HIY"\n$N����Ԫ�������Ͻ�ʥ֮�������������֮��ʥװ����\n\n"NOR,this_player());
  eq01 = new("/open/gsword/obj1/kshield");
  eq02 = new("/open/gsword/obj1/kboots");
  eq03 = new("/open/gsword/obj1/karmband");
  eq04 = new("/open/gsword/obj1/karmor");
  eq05 = new("/open/gsword/obj1/khands");
  eq06 = new("/open/gsword/obj1/khelmet");
  eq07 = new("/open/gsword/obj1/klegging");
  eq08 = new("/open/gsword/obj1/kneck");
  eq09 = new("/open/gsword/obj1/kpants");
  eq10 = new("/open/gsword/obj1/kring");
  eq11 = new("/open/gsword/obj1/kcloak");
  eq12 = new("/open/gsword/obj1/kbelt");
  eq13 = new("/open/gsword/obj1/kwrists");
  we=new("/open/gsword/obj1/sunsword");
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
we->set("no_steal",1);
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
  we->move(this_player());
  ob->set_temp("kensai",1);
   me->set_temp("kensai",1);
  return 1;
}

int do_close(string str)
{
  object me,ob;
  string name;
  me=this_player();
  ob=present("kensai-eq",me);
  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "kensai")
          return 0;
if(me->query_temp("kensai")!=1)
return notify_fail("�㲢û�п�����ʥװ����\n");
if(ob->query_temp("kensai")==1) {
destruct(present("kensai neck",me));
destruct(present("kensai belt",me));
destruct(present("kensai cloak",me));
destruct(present("kensai ring",me));
destruct(present("kensai pants",me));
destruct(present("kensai wrists",me));
destruct(present("kensai legging",me));
destruct(present("kensai scarf",me));
destruct(present("kensai hands",me));
destruct(present("kensai armor",me));
destruct(present("kensai armband",me));
destruct(present("kensai boots",me));
destruct(present("kensai shield",me));
destruct(present("sevensun_sword",me));
me->delete_temp("kensai");
ob->delete_temp("kensai");
message_vision(HIW"\n$N����������ɢ��֮ʥ������ʱ����װ�������䣬�ջ�$N���\n\
n"NOR,me);
}
return 1;
}
