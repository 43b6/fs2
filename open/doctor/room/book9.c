#include <ansi.h>
inherit ROOM;
inherit __DIR__"bookmsg.c";
string *exit = ({
__DIR__"book1",__DIR__"book2",__DIR__"book3",
__DIR__"book4",__DIR__"book5",__DIR__"book6",
__DIR__"book7",__DIR__"book8",__DIR__"book9",});

void create()
{
    set("short", YEL"藏经阁"NOR);
    set("long",
(: print_book_msg :),
);
    set("exits", ([
                "south" : exit[random(sizeof(exit))],
                "north" : exit[random(sizeof(exit))],
                "east" : exit[random(sizeof(exit))],
                "west" : exit[random(sizeof(exit))],
        ]));
    set("no_transmit",1);
    setup();
}
void init()
 {
     add_action("do_search","search");
     add_action("do_look","look");
     add_action("do_enter","enter");
 }
int do_search()
{
    object me = this_player();

    if(present("book_mark",me))
{
        write("你开始仔细的搜寻这房间的每一个角落！\n");
    if(random(100) < 50)
{
        write("突然「啪喳！”的一声，你似乎发现了一个暗道(road)！\n");
        me->set("doctor/find_door",1);
        return 1;
}else{
        write("你发觉这个房间似乎并没有什么特别之处！\n");
        return 1;
    }
  }
}
int do_look(string arg)
{
    object me = this_player();

    if(!arg || arg != "road") return 0;
    if(me->query("doctor/find_door")==1)
{
        write("你发觉这个暗道似乎可以进入(enter)！\n");
        return 1;
  }
}
int do_enter(string arg)
{
    object me = this_player();
    int kar = (int)me->query("kar")+random(20);

    if(!arg || arg != "road") return 0;
    if(me->query("doctor/find_door")==1)
{
        write("你缓缓的走进这个暗道之中......\n");
    if(random(100) < kar)
        write(HIR"突然间！你一脚踩了个空，向暗道内直滚而去....\n"NOR);
        call_out("bad1",3,me);
        return 1;
}else{
        write("你慢慢的向倾斜的暗道内走去...");
        call_out("good1",4,me);
        return 1;
  }
}
int bad1(object me)
{
    int kee = (int)me->query("kee")/5;

        write(HIR"你滚啊滚啊滚...你跌跌撞撞...撞得满身是伤...\n"NOR);
        me->add("kee",-kee);
        call_out("bad2",3,me);
}
int bad2(object me)
{
    int kee = (int)me->query("kee")/5;

        write(HIR"你滚啊滚啊滚...你跌跌撞撞...撞得满身是伤...\n"NOR);
        me->add("kee",-kee);
        call_out("bad3",3,me);
}
int bad3(object me)
{
    int kee = (int)me->query("kee")/5;

        write(HIR"你滚啊滚啊滚...你跌跌撞撞...撞得满身是伤...\n"NOR);
        me->add("kee",-kee);
        call_out("bad4",3,me);
}
int bad4(object me)
{
    int kee = (int)me->query("kee")/5;

        write(HIR"你滚啊滚啊滚...你跌跌撞撞...撞得满身是伤...\n"NOR);
        me->add("kee",-kee);
        write(HIW"你好不容易停了下来，发现自己已落在平坦的地面上头...\n"NOR);
        me->move("/open/doctor/room/yf-room");
        return 1;
}
int good1(object me)
{
        write("你慢慢的走着走着...四周尽是一片漆黑...伸手不见五指...\n");
        call_out("good2",4,me);
}
int good2(object me)
{
        write("你慢慢的走着走着...四周尽是一片漆黑...伸手不见五指...\n");
        call_out("good3",4,me);
}
int good3(object me)
{
        write("你慢慢的走着走着...四周尽是一片漆黑...伸手不见五指...\n");
        me->move("/open/doctor/room/yf-room");
        write("你终于到了一块平坦的地面，但四周始终是一片漆黑...\n");
        return 1;
}
