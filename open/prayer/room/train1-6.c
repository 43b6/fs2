//open/prayer/room/train1-6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG

	    ��ʥ�����̳�����䳡���㿴�����ʥ��
	����ƴ���������书������ʥ��̵�������ԭ
	Ұ�Ĳ�С�� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 3,
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/prayer/room/train1-11",		//���䳡
	"west" : "/open/prayer/room/train1-7",		//`���䳡
]));

  setup();
}
 
