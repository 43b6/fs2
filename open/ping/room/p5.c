// Room: /open/ping/room/p5
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "��Ϣ��");
  set ("long", @LONG
����Ƕ���ү�ر𲦳�����һ�䷿��, ��Ϊ�μ��ӵ���Ϣ�ķ���, 
��˳��˶μҵ�������, ������ǽ������ġ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"p2",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan3" : 1,
]));
  set("no_magic", 1);

  setup();
}
