#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "��������");
	set( "build", 1978 );
  set ("long", @LONG
 ���������еĴ�����,��������ʦ���������ڵĹ���,
ǽ�Ϲ��������õı���,��,����������ȱ,���������
����Щ����.	
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/su2.c",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/sells0" : 1,
]));


  setup();
}
