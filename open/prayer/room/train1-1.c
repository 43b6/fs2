//open/prayer/room/train1-1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ������ʥ��̵Ĵ����ȣ�������ʥ��̵�
	����������һ��ȭʦ��������������������
	������ʲô��һ�㣮

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/puncher1" : 1,		
]));
  set("exits", ([ /* sizeof() == 2 */
//	"south" : "/open/prayer/room/train1-6",		//���䳡
	"east" : "/open/prayer/room/train1-2",		//`����
	"west" : "/open/prayer/room/train1",		//`���䳡
]));

  setup();
}
 
