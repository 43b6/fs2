//open/prayer/room/train1-2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ������һ���ţ���������ʥ��̵�����
	�������������ƥ���Ϸ���ͨ������������
	������·��

LONG);
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-5",		//`����
	"enter" : "/open/prayer/room/horse6",		//`��
	"west" : "/open/prayer/room/train1-1",		//`���䳡
]));

  setup();
}
 
