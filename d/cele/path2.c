inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", HIM"过去时空"NOR" 山坡小径");
  set ("long", @LONG
你现在正走在一条山坡小径上，东边不远处可以望见水烟阁琉璃色的
屋瓦，小径东北是一道白石阶梯通往山巅的虹台，往西则是「水烟十景”
之中最有名的虹谷断崖，小径旁立着一个七、八尺高的石碑(stone)。

LONG);
  set("outdoors", "cele");
  set("exits", ([ /* sizeof() == 1 */
  "east" : "/d/cele/path1",
  "west"  : "/d/cele/path3",
]));

        set("item_desc", ([ /* sizeof() == 1 */
  "stone" : "
石碑上面几个苍劲古朴的字写道：虹谷石台，乙丑年
水烟阁第六代 阁主 关雨楼 立。
你仔细一看，这几个字迹丝毫没有斧凿痕迹，竟像是题字的人直接
用手指在岩石上写出来一般。",
]));
        set("no_clean_up", 0);

        setup();

}



