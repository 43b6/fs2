//open/prayer/room/train1-13

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG

	    �ڶ�ʮ���ߴ���������ʥ�������ʥ���
	��̳�����䳡��������ʥ���󷨣���û�뵽��
	ʥ��̾�Ȼ�����󷨣�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 3,		//����
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-18",		//���䳡
	"north" : "/open/prayer/room/train1-8",		//`���䳡
	"east" : "/open/prayer/room/train1-12",		//`���䳡
]));

  setup();
}
 
