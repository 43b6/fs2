//open/prayer/room/train1-15

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ǰ�������ڣ�����ʥ����������ſڣ�
	�ŵ����洫������İ��������ѵ��ַ�������
	�������������

LONG);
  set("exits", ([ /* sizeof() == 2 */
	"enter" : "/open/prayer/room/3elder6",		//`���Ϸ�
	"north" : "/open/prayer/room/train1-10",		//`����
]));

  setup();
}
 
