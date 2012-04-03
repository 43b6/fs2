inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "锁妖塔二楼--");
  set ("long", @LONG
踏入这儿给你的第一个印象，还是那片恼人的暗红色，和着地上斑斑的
血迹，使你觉得这儿充满一片血腥，不禁有一股冲动想要往回走。
LONG);
 
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tower2-3",
  "north" : __DIR__"tower2-1",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/yama" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="west"&&present("yama",environment(me))) {
  return notify_fail("幻变千手吼道: 想过去！先杀了我再说吧！\n");
  } 
 return 1;
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 6,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"～鬼影幢幢～你觉得胸中一阵翻滚，忽然一道血箭从你的嘴里喷了出来。\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 6,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}


