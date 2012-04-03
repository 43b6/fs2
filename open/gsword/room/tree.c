#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "树洞");
        set("long", @LONG
这是树身的内部,想不到这竟然别有洞天,两把半熄的火把(torch)挂在左上角,火光
忽明忽灭,前方还不时传来凄厉的吼叫声,分不清到底是野兽亦或是人类,使你对这儿
产生一种莫名的恐惧,          
LONG
        );

        set("item_desc",(["torch":
"两把即将熄灭的火把\n"]));        
        
        set("exits", ([
		"out": "/u/b/bigcat/room/lnroad1",
                "north":"/u/b/bigcat/room/tree1"
        ]) );
        
setup();
}
