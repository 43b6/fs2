// Room: /open/capital/room/r69.c
#include "../../open.h"
inherit ROOM;

void create ()
{
   set("short","������");
  set ("long", @LONG
������ȫ����ߵľ��»����������������������ȫ��������
�����ӵĵ��䡢��ǲ��ѵ���ȵȣ���ֵ���ʾ��Ȩ��֮��
 
LONG);

  set("exits", ([ /* sizeof() == 1 */
	"east":"/open/capital/room/r72",
]));

  set("objects", ([ /* sizeof() == 1 */
	"/open/capital/npc/soldier_officer":1,
	]));

  set("no_fight", 1);

  set("light_up", 1);

  set("no_magic", 1);

  setup();
}
