//open/prayer/room/train1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳���䳡");
  set ("long", @LONG

	    ������һ��ʥ���ͷ�����ڲ����ŵ�����
	�ӣ�����ʥ��̽�������¹��ԭ���ư����ֵ�
	��ͷ��

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer1" : 1,		
]));
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/1-door",		//`����
	"south" : "/open/prayer/room/train1-7",		//`���䳡
	"east" : "/open/prayer/room/train1-1",		//`����
	"west" : "/open/prayer/room/train1-3",		//`����
]));

  setup();
}
 
