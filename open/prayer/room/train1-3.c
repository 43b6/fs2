//open/prayer/room/train1-3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ������ʥ��̵Ĵ����ȣ�������ʥ��̵�
	ִ���ã��������������������������Լ�ʥ��
	�̵Ļ﷿��

LONG);
  set("exits", ([ /* sizeof() == 3 */
     "south" : "/open/prayer/room/train1-8",         //`���䳡
	"west" : "/open/prayer/room/train1-4",		//`����
	"east" : "/open/prayer/room/train1",		//`���䳡
]));

  setup();
}
 
