#include "/open/open.h"
#include <ansi.h>
inherit ITEM;

void create()
{
        set_name(HIW+"��ġ�"HIC"����"HIW"��"+NOR, ({ "drum" }) );
        set_weight(700);
        set("long", "���Ÿ��Ĵ����޵Ĺ��й� ,Ȼ��û�ù�˭Ҳ��֪��... 
�÷���use drum at xxx��\n");
        set("unit", "ֻ");
        set("value", 5000);
       set("no_put", 1);
       set("no_sell", 1);
       set("no_drop", 1);
       set("no_give", 1);
        setup();
}

void init()
{
  add_action("do_use", "use");
}

int do_use(string arg)
{
   object me=this_player(), turtle;
   string name, what;

  if (!arg) return 0;
  if ( sscanf (arg, "%s at %s", what, name) != 2) return 0;
  if (what != "drum" && name != "turtle") return
        notify_fail ("������ʲô??\n");

  if (!turtle=present("turtle", environment(me)))
    return notify_fail ("һ������������ ,��ʲô�¶�û������\n");

 
    message_vision (HIW"һ������ֱ������ ,���̹����Ĺ�Ƿ�����\n"NOR, me);
   destruct(turtle);
   
 new("/open/island/npc/turtle2.c")->move("/open/island/room/cold.c");   
message_vision (HIC"��ġ�������Ҳ��󻯳ɷɻ�...\n"NOR, me);
destruct(this_object());

  return 1;
}

