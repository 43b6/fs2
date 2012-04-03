#include <ansi.h>
#include <room.h>
inherit ROOM;
                
void create ()
{
  set ("short", "休息室");
  set ("long", @LONG
这是杀手们接受特训后的休息的地方  
在这儿有一小水池(water),池水似乎有点脏，但是还是可以喝的,
不过我想还是不要喝比较好，拿来洗东西倒是不错的建议。
可以听到地下传来一阵阵淙淙的水声,想必是地下水源所发出的


LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r0.c",
  "west" : __DIR__"restrm.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "water" : "池水虽然有点怪颜色,但是你还是可以在这儿喝水(drink) 
",
   ]));
  set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));

 set("objects",([
        "/open/killer/npc/boy": 1,
]));

setup();
}

void init()
{
   add_action("do_drink", ({"drink"}) );
        add_action("do_enter",({"enter"}));
   add_action("do_wash",({"wash"}));
}
int do_drink(string arg)
{
  object me;

  if (!arg || arg=="" )
  {
    me = this_player();
    if ( (int)me->query("water") >= (int)me->max_water_capacity() )
    {
     tell_object(me,"你已经一口水也喝不下了.......\n");
     return 1;
    }
    tell_object(me,"你从池中舀了几口水喝，发现池水似乎有怪味......\n");
    me->add("water",40);
    return 1;  
  }
    return 1;
}
int do_enter(string arg)
{
   object who;
   who=this_player();
   if(who->query("class")!="killer")
   return notify_fail("这是杀手专用密道,一般人无法进入!\n");
   if((arg="water") || (arg=="water")) {
   message_vision(GRN"$N进入了小水池中\n"NOR,who);
   tell_object(who,"\n你只听到～～～～哗啦～～～～
    ～～～～～～～～～～～～～～～～～～～～～～～～～哗啦～～～\n\n");
   tell_object(who,HIW"只见一阵强大的水势迎面而来～～ \n"NOR);
   tell_object(who,"你在无法反抗之下被水流带往他处 \n");
tell_object(who,HIC"\n你感觉水势减弱,随便乱抓之下,抱住一颗大石头 \n\n"NOR);
who->move(__DIR__"stonerm.c");
   return 1;
   }
      return 0;
}

int do_wash(string arg)
{
   object who;

   who=this_player();

   if (!present("herb",who))
	return 0;
   if (!who->query_temp("herb_1"))
   {
   	tell_object(who,"\n你将富士山秘草放入这个怪颜色的水池中，
		      哗啦地洗了起来～\n\n");
	tell_object(who,HIW"只见一阵奇怪的颜色变化～～ \n"NOR);
	tell_object(who,"秘草发出了奇异的光芒，应该可以了吧 ?。。 \n");
	who->set_temp("herb_1",1);
	return 1;
   }
   if(who->query_temp("herb_1")==1)
   {
     tell_object(who,HIW"但是由于你再一次洗秘草～～ \n"NOR);
     tell_object(who,"使得秘草发出了金色的光芒，终于可以了！ \n");
     who->set_temp("herb_1",2);
   }
   return 1;
}  

