//open/prayer/room/punch1-14

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    �ڷ���Ľ��䣬��һ֧���˻�����������������֧���������ֶ��Ҹ�
������ʥ��̵���̳���˽���һ���Ǹ��ƺƵ����Ĵ󹤳̣��Ż��������
���ư���ĸо��� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/major-officer" : 1,		//����
]));
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/prayer/room/punch1-11",	//`����
	"east" : "/open/prayer/room/punch1-13",		//`����

]));
  set("light_up", 1);

  setup();
}
 
