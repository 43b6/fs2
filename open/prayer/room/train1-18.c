//open/prayer/room/train1-18

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG

	    ʥ�����̳�����䳡�ϣ��㿴�����ʥ��
	����ƴ���������书������ǰ���ʥ����ӿ�
	���书���Ӳ����� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 3,
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/prayer/room/train1-13",		//`���䳡
	"east" : "/open/prayer/room/train1-17",		//`���䳡
]));

  setup();
}
 
