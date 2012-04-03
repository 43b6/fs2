
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "锁妖塔四楼--");
  set ("long", @LONG
你眼前有一个大梯子，你想又是往上推进一楼的时刻了。由于疲累的关系，你对
四周的景致也无心注意，你只觉得四周的暗蓝色比刚刚的都还要来得深、也还要来沈
。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room4",
  "north" : __DIR__"tower4-1",
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t武林之中传来一道消息 : "HIY""+this_player()->name()+""HIW"勇闯"HIR"锁妖塔"HIW"第五层了 !!\n"NOR,users());
        return ::valid_leave(me, dir);
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 3,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"～鬼影幢幢～你觉得胸中一阵翻滚，忽然一道血箭从你的嘴里喷了出来。\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 3,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}



