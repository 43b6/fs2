//open/prayer/room/kicthen1

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

	    ����ǰ����һ����æ����ͷ�󺹣���Ϊ��
	Ҫ��Ӧʥ��̣��������ϵĻ�ʳ����һ������
	���ѱ�������֮�ǣ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/cooker" : 1,		//��ʦ
]));
  set("exits", ([ /* sizeof() ==  1*/
	"north" : "/open/prayer/room/kicthen3",		//`����
]));
   set("light_up", 1);
  setup();
}
 
