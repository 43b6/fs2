// Room: /u/f/fire/room/room1-11.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
���µ�������Ҳ��ΪƽϢ�ˡ�ͻȻ�䣬���ŵ�һ��Ũ����ҩ�㣬
���ϵĳ���Ʈ����������ϸ�ķֱ�һ�·�λ���ƺ��Ǵӱ��ߵĵ��̴�
�����ģ�Ӧ����һ��ҩ�ꡣ
LONG);

  set("outdoors", "/open/marksman");
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"room1-9",
//  "north" : __DIR__"room1-12.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/marksman/npc/oldman" : 1,
]));

  setup();
}
