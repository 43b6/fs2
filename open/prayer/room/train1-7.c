//open/prayer/room/train1-7

#include <ansi.h>
inherit ROOM;

void create ()
{
 set ("short", "��̳���䳡");
  set ("long", @LONG

	    �㿴��ʥ����ӣ���ʥ�����̳�����䳡
	�ϣ�ƴ���������书����ǰ������ӻ�������
	ģ�����ģ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 1,		//����
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/train1",		//`���䳡
	"south" : "/open/prayer/room/train1-12",		//`���䳡
	"east" : "/open/prayer/room/train1-6",		//`���䳡
	"west" : "/open/prayer/room/train1-8",		//`���䳡
]));

  setup();
}
 
