// Room: /open/dancer/room/r12-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","花丛");
  set ("long", @LONG
你发现你的四周满是花朵，恍如置身花海之中，有些甚至是你从未
看过之品种，有一簇花丛(flower)长得特别茂盛令你不禁想多看两眼，
而眼前的景色更是让你以为来到了世外桃园。




LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "flower" : "一簇美丽的花丛，香味扑鼻。
",
]));

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/dancer/room/r13-2.c",
  "east" : "/open/dancer/room/r12-3.c",
]));

  set("search_desc", ([ /* sizeof() == 1 */
  "flower" : "你拨开花丛忽然发现丛内有个小洞恰可容人身通过，而外表却看不出
来。
",
]));

  set("light_up", 1);

  setup();
}

void init()
{
        add_action("do_enter", "enter");
}

int do_enter(string arg)
{
        object who;
        who = this_player();

        if( !arg || arg!="flower" )
                return notify_fail("你要通过什么？\n");
        tell_object(who,"你用手拨开花丛，向着小洞钻了进去。\n");
        who->move("/open/dancer/room/dream");
        tell_room(this_object(),"你看到"+who->query("name")+"慢慢向花丛走去，忽然就不见踪影了。\n");
        return 1;
}
