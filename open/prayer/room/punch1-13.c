//open/prayer/room/punch1-13

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    ��һ����ʥ�����̳�Ĵ�����ͻȻ��һ����ǰһ���ĸо���ԭ������
ʥ��֮��������������������������Ļ�ѣ����ڴ�����������һ��ʥ��
�����ѹֻ���˹����� 

LONG);
  set("exits", ([ /* sizeof() == 4 */
	"north" : "/open/prayer/room/punch1-10",	//`����
	"east" : "/open/prayer/room/punch1-12",		//`����
	"west" : "/open/prayer/room/punch1-14",		//`����
	"out" : "/open/prayer/room/1-door",	//`����
]));
  set("light_up", 1);

  setup();
}
 
