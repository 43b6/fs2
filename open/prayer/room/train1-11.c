//open/prayer/room/train1-11

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG

	    ��ǰ��ʥ�����̳���䳡�ϣ��㿴�����
	ʥ�����ƴ���������书������ʥ��̵�����
	���פ��ԭ�� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee3" : 1,		//����
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-16",		//���䳡
	"north" : "/open/prayer/room/train1-6",		//`���䳡
	"west" : "/open/prayer/room/train1-12",		//`���䳡
]));

  setup();
}
 
