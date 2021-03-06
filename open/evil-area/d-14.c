inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",HIY"沙漠"NOR);
        set("long",@LONG
四周已经被山壁呈凹字形给阻隔住了, 除了你来时的路以外, 在
你的正前方, 摆饰一个雕刻精美的木材雕像, 形状仿佛是一个人形, 
可是又长着麒麟的头角, 整体而言, 你可以很明显的感觉到雕作者所
想表达的一股压迫感, 庄严而肃静的感觉不自主的由你最深沉的心底
升起, 不过, 你却突然发现雕像仿佛有在移动着...
LONG);
        set("item_desc",([
"雕像":"你仔细的注视着雕像, 越看越觉得不对劲...\n",
]));
        set("exits",([
"south":__DIR__"d-13",
]));
        set("objects",([
__DIR__"npc/earth-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        set("earth-area",1);
        setup();
}

void init()
{
add_action("do_search","search");
add_action("do_pull","pull");
add_action("do_push","push");
}

int do_search(string arg)
{
object me=this_player();
        if(!arg || arg!="雕像")
                return 0;
        tell_object(me,HIW"
你发现雕像的底盘部分并没有完全着地, 也就是说, 雕像是漂浮着的!!

你再仔细的观察了一次, 发觉雕像底下似乎有一个通道。\n"NOR);
        me->set_temp("evil/king/statue_search_earth",1);
        return 1;
}

int do_push(string arg)
{
object me=this_player();
        if(!arg || arg!="雕像")
                return 0;
        if(!me->query_temp("evil/king/statue_search_earth"))
                return notify_fail("你不晓得该往哪里推，推了半天，雕像动都不动。\n");
        message_vision("$N使劲了吃奶的力气推着雕像，雕像却动也不动。\n",me);
return 1;
}

int do_pull(string arg)
{
object me,ob;
        me=this_player();
        ob=this_object();
        if(!arg || arg!="雕像")
                return 0;
        if(!me->query_temp("evil/king/statue_search_earth"))
                return notify_fail("你不晓得该往哪里拉，拉了半天，雕像动都不动。\n");
        if(!ob->query_temp("can_pull"))
        {
                message_vision("$N使劲了吃奶的力气拉着雕像，雕像却动也不动。\n",me);
                return notify_fail("你累的一直喘～\n");
        }
        message_vision(YEL"雕像底盘的部分，受到土翎板的引响，被拉高腾空。

$N见机不可失，赶忙的走下了位于雕像底盘的通道。\n\n"NOR,me);
        ob->delete_temp("can_pull");
        me->delete_temp("evil/king/statue_search_earth");  
        message_vision("$N走下了通道，来到这里。\n",me);
return 1;
}

