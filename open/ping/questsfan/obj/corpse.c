//����ʬ��------by dhk 2000.5.18
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name("����ʬ��", ({ "noname corpse","corpse" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "����һ�߲�֪����ʬ�壬��ô���ʬ��ɽ��������֣�\n");
       set("unit", "��");
       set("value", 150);
       set("no_sell",1);
       set("no_auc",1);
       set("no_give",1);
       set("no_get",1);
      }
    setup();
}
void init()
{
  add_action("do_corpse","search");
  add_action("do_yes","get_all_from_corpse");
}
int do_corpse()
{
  object me = this_player();

  if(me->query("family/family_name") != "�μ�")
  {
  tell_object(this_player(),"ɶҲû�ҵ�....\n");
  }
  if(me->query("family/family_name") == "�μ�")
  {
  tell_object(this_player(),"����������������һ����������֪����ʲô?�������zget_all_from_corpse�{��һ�°ɣ�\n");
    me->set_temp("search_ok",1);
  }
  return 1;
}
int do_yes()
{
  object me = this_player();
  object letter=new("/open/ping/questsfan/obj/posthumous.c");
    if(me->query_temp("search_ok")==1)
  {
  letter->move(me);
  tell_object(this_player(),"�ҵ�һ��"HIR"մѪ������"NOR"\n");
    me->set_temp("search_ok",0);
}
  return 1;
}

