#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          set("short","七星阵");
        set("outdoors", 1);
        set("long", @LONG
你已经走入八卦七星阵，只见四周都是岩石，以及一些困死在此
的人的骸骨，在此你已无法辨明方向。四处阴森森的，空气中弥漫着
一股不寻常的气息，就连你带进来的火把也显得十分的暗淡。这样的
场面使你怯步，心中一股寒意不禁油然升起，有种声音一直在叫你回
头，不要继续往前走了....
LONG);
        set("exits", ([
		"north":__DIR__"room5",
		"south":__DIR__"room5f",
		"west":__DIR__"room5g",
		"east":__DIR__"room5e",
        ]) );
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
      
        set("no_transmit",1);
        setup();
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



