//open/prayer/room/punch1-9

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    �������ԵĻ���ǽ�ϣ�����������������д�����֣����Ҿ�Ȼ����
��ͷ������������д������ʥ��̵Ľ̹棬����ʥ�����һ���ǳ����ƶ�
���̹����ϵ���֯��

LONG);
  set("exits", ([ /* sizeof() == 3 */
	"north" : "/open/prayer/room/punch1-7",		//`����
	"south" : "/open/prayer/room/punch1-12",	//`����
	"west" : "/open/prayer/room/punch1-10",		//`����
]));

  setup();
}
 
