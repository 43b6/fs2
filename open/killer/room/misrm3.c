#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","װ����");
  set ("long", @LONG
�����Ǻ�������������ȡ�����ĵط�����������Կ������ٵı���
����Կ���һ��װ���䣬ֻ��Ҷ��ɱͬ��ſ�����ȡ��
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
"west":__DIR__"misrm1",
]));

  set("objects",([
/*        "/open/killer/npc/spy1": 1, */
        "/open/killer/obj/misbox2.c": 1,
]));
  setup();
}
