//open/prayer/room/punch1-12

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    ������һ��!!��Ϊ����Ϊ������һ������Ҫ�����㣬��һ����һ����
�ڽ��������������ԭ��֧����̳�������֧��������������Ϊ�ϵĿ̹�
̫���������ˣ��Ż�ʹ�˲��˻þ��� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/major-officer" : 1,		//����
]));
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/prayer/room/punch1-9",		//`����
	"west" : "/open/prayer/room/punch1-13",		//`����

]));
  set("light_up", 1);

  setup();
}
 
