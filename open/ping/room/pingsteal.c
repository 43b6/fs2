#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "ƽ������");
	set( "build", 606 );
  set ("long", @LONG
������ƽ�ϳǵĴ�����,��������ʦ���������ڵĹ���,
ǽ�Ϲ��������õı���,��,����������ȱ,�������������
����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road5",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/sells0" : 1,
]));
  set("light_up", 1);

  setup();
}
