//open/prayer/room/punch1-11

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    �ⷿ��Ĵ���ʯǽ�ϣ�����һЩ�����ͼ����������ǽ�����������
һ�����ܵ�ʥ����ʥ����·�վ��һ���ˣ�������һ���������������
��ģ���ţ�ʹ����һ�־������µĸо��� 

LONG);

  set("exits", ([ /* sizeof() == 3 */
	"north" : "/open/prayer/room/punch1-8",		//`����
	"south" : "/open/prayer/room/punch1-14",	//`����
	"east" : "/open/prayer/room/punch1-10",		//`����

]));
  set("light_up", 1);

  setup();
}
 
