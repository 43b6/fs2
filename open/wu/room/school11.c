// Room: /u/d/devils/school11.c

inherit ROOM;

void create()
{
        set("short", "藏宝库");
        set("long", @LONG
这是一间仓库，堆满了杂七杂八的物品，你放眼望去似乎没有任何
稍有价值的东西，这里的地板很干净，不像一般仓库满地灰尘，左边角
落有一个不起眼的箱子。
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"school8",
]));
        set("light_up", 1);
        setup();
}
/*
void init()
{
        add_action("do_move","move");
        add_action("do_push","push");
}

int do_move(string str)
{
        if(!str || str != "box")
                return notify_fail("你要移动什么?\n");
        else if(!query_temp("box_moved")) {
                set_temp("box_moved",1);
                message_vision("$N把箱子移向旁边，赫然发现箱子下面竟然出现了一个暗门。\n", this_player());
        }
        else {
                delete_temp("box_moved");
                message_vision("$N把箱子移回原位。\n", this_player());
                if(query("exits/down"))
                        delete("exits/down");
        }
        return 1;
}

int do_push(string str)
{
        object ob;
        ob = this_player();

        if(!query_temp("box_moved"))
                return notify_fail("推什么推！不要乱推好不好！\n");
        else if(!str || str != "door")
                return notify_fail("你在推什么?\n");
        else {
                set("exits/down",__DIR__"school12");
                message_vision("$N缓缓的把暗门推开，这才发现原来有一个往下的阶梯。\n", ob);
                call_out("do_close",10);
        }
        return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"被人打开的暗门又缓缓的自动关了起来。\n");
}
*/
