#include <ansi.h>
inherit ROOM;
void create()
{
   set("short", HIW"仙剑试炼峡谷"NOR);
   set("long", @LONG
一个杂草丛生的峡谷.四周山壁耸立..看起来似乎无法离开此处...
就在你仔细找寻出口时..你发现山壁上尽是属不尽的剑痕.。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */

]));
        set("light_up",1);
        set("no_transmit", 1);
        setup();
}

void init()
{
  object ob;
  if( interactive( ob= this_player()))
   {
      remove_call_out("greeting");
        call_out("greeting", 0, ob);
   }
}
int greeting (object who)
{
  object room = this_object();
  object mob;
  int i;
  int edir=random(5);
  int wdir=random(5);
  int sdir=random(5);
  room->set("exits/west","/open/gsword/room2/sun"+wdir);
  room->set("exits/east","/open/gsword/room2/sun"+edir);
  room->set("exits/north","/open/gsword/room2/sun5");
  room->set("exits/south","/open/gsword/room2/sun"+sdir);
    message_vision(HIR"\n$N进入仙剑试炼场后后..瞬间冲出数道剑芒.\n",who);
    message_vision(HIR"剑芒消失后，数到人影$N冲来！！！\n"NOR,who);
    seteuid(getuid());
    i=random(3)+1;
    while(i--)
   {
      mob=new("/open/gsword/npc2/t_man");
      mob->move(room);
      mob->callset(who);
      mob->kill_ob(who);
    }
  return 1;
}
int valid_leave(object me, string dir)
{
if((dir=="south" || dir=="east" || dir=="west")&& present("man",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("你以为你能活得过去吗??"+RANK_D->query_respect(me)+"你去死吧!\n");
return ::valid_leave(me,dir);
}
