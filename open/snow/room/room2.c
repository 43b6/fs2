#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
        set("short","雪苍紫云宝殿");
        set("valid_startroom", 1);
        set ("long", @LONG
这里是雪苍派的圣地‘紫云宝殿’，宝殿里装饰着无数的珍宝,雕像
显得华丽非凡，是雪苍派弟子聚会时，或有贵客来临时候的一个重要
场所，在宝殿的左方柱子有一个石牌(stone)。
LONG);
        set("item_desc",([
         "stone" : "
            雪苍武学(snow-martial)  help snow-martial
            雪苍心法(snowforce) help snowforce
            雪苍护身寒劲(snow-kee) help snow-kee
          \n"]));
        set("exits",([
                "up":__DIR__"eqroom",
                "south":__DIR__"room5_out",
                "north":__DIR__"room6",
                "east":__DIR__"room10",
                "west":__DIR__"room18",
        ]) );
        set("objects",([
        "/daemon/class/fighter/master_liu":1,
        ]));
        set("light_up",1);
        setup();
        call_other("obj/board/fighter_b.c","???");
}
 int valid_leave(object me, string dir)
{
if( dir=="up" )
   if( me->query("family/family_name")!="雪苍派")
                return notify_fail("只有雪苍弟子才可以进入。\n");
return ::valid_leave(me,dir);
 }

