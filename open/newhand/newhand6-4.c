#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "     后来创站大神Wade那时也快毕业了,慢慢的将事情交给了下一任大神Lum
,Lum接手FS在他的整顿之下巫师的问题也慢慢变少,约只有四十多位左右的巫
师,同时狂想的发展也正在进行,一些的门派也慢慢有其特色出来!!门派也慢慢
变多了,那时狂想也一直在稳定中发展!!!
" );
  set("exits", ([
  "north" : __DIR__"newhand6-3",
  "south" : __DIR__"newhand6-5",
               ]));
  set("light_up", 1);
  setup();
}

