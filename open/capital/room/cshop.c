// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "干记商行");
  set ("long", @LONG
一进到这里就被那富丽堂皇的装设所镇摄，其装潢之华丽，与一般
之小店铺截然不同，这家商行是城内首富干通天的产业之一，不过最近
他已经很少来此，这里的问题全部交给总管卜士仁负责打点。在右边的
墙上挂了个告示(note)。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "note" : "
	< value > : 估价
	< list >  : 列出
        < buy  >  : 买
	< sell >  : 卖出
 ",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"h09.c",
]));
  set("light_up", 1);

  setup();
}
