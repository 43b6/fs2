//open/prayer/room/train1-8

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG

	    ǰ��ʮ���ߴ�������ʥ����ӣ�����ʥ��
	����̳�����䳡���໥�����У���ϸһ��ԭ��
	���ڴ�����㣮

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 2,		//����
]));
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-13",		//���䳡
	"north" : "/open/prayer/room/train1-3",		//`����
	"east" : "/open/prayer/room/train1-7",		//`���䳡
]));

  setup();
}
 
