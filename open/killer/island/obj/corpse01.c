#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name("残缺不全的尸体", ({ "uncomplete-corpse","corpse" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "尸骨残缺不全，看来生前受到极大的伤害。\n");
       set("unit", "具");
       set("value", 150);
       set("no_sell",1);
       set("no_auc",1);
       set("no_give",1);
       set("no_get",1);
      }
    setup();
}

int accept_object(object me,object ob)
{

me=this_player();
if(ob->query("id")!="incomplete_corpse's head")
tell_object(me,"结果什么事也没发生。\n");

if(me->query_temp("quest_corpse")==1)
{
message_vision("$N把$n给装上去了。\n",me,ob);
tell_object(me,HIB"\n\n你仿佛听到了一些声音：遇到打不开的门，就祈祷吧...。\n"NOR);
me->set_temp("quest_corpse",2);
}

else
tell_object(me,"但你却不知道要把"+ob->name()+"装在哪？\n");
}
