//open/prayer/room/train1-12

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳���䳡");
  set ("long", @LONG

	    ����ǰ��λʥ���ͽ������������Ǭ����
	���������л������磬����Ҳ����һ�����ǵ�
	�һ 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//����
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/train1-7",		//`���䳡
	"south" : "/open/prayer/room/train1-17",		//`���䳡
	"east" : "/open/prayer/room/train1-11",		//`���䳡
	"west" : "/open/prayer/room/train1-13",		//`���䳡
]));

  setup();
}
 
