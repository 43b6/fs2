//open/prayer/room/train1-5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    �ڶ�����һ���ţ���������ͨ����������
	Ψһ��ڣ���������ͨ���������Ϸ����ǽ�
	����������ͨ·��

LONG);
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-10",		//`����
	"north" : "/open/prayer/room/train1-2",		//`����
	"enter" : "/open/prayer/room/1elder6",		//`���Ϸ�
]));

  setup();
}
 
