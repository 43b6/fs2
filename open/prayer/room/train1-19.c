//open/prayer/room/train1-19

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ͻȻ���������ζ������ԭ�����Ϸ���ȥ
	����ʥ��̵Ļ﷿�ˣ����ڴ�ʱ��Ķ��ӹ���
	������˼�����

LONG);
  set("exits", ([ /* sizeof() == 2 */
	"enter" : "/open/prayer/room/kicthen6",		//`����
	"north" : "/open/prayer/room/train1-14",		//`����
]));
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/footman" : 1,		//����
   		
]));

  setup();
}
 
