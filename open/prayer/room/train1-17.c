//open/prayer/room/train1-17

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳���䳡");
  set ("long", @LONG

	    ��һ��Ŀ����һ���ǳ�׳�۵Ļ��棬��Ϊ
	����۹�ȥ��ʥ�����̳�����䳡���������
	ʥ�����ƴ���������书������ʥ�������ʵ
	����¹��ԭ���֣� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee3" : 3,
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/train1-12",		//`���䳡
	"out" : "/open/prayer/room/1-door2",		//`����
	"east" : "/open/prayer/room/train1-16",		//`���䳡
	"west" : "/open/prayer/room/train1-18",		//`���䳡
]));

  setup();
}
 
