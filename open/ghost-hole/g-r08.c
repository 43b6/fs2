#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"幽冥道"NOR"草屋");
        set("long",@LONG
几个椅子摆满了整个草屋, 可见得此草屋之小, 
屋内有个木桌, 感觉上像是在家里面闲聊泡茶所用
的木桌, 整个感觉仿佛置身于人间界的平常住屋一
般, 十分的祥和...
LONG);
        set("exits",([
        "out":__DIR__"g-r05",
	"west":__DIR__"g-r09",
        ]));
        set("objects",([
        __DIR__"npc/wis-man":1,
        ]));
        set("no_transmit",1);
        setup();
}
