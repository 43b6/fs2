//open/prayer/room/2elder7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ִ�����Ϸ�");
  set ("long", @LONG

	    �������ִ�����ϵİ칫���ˣ�����û��
	�����ϵ��ˣ����������˴����˽̹棬������
	����ִ���ˣ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 1,		//����
]));
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/2elder6",		//`���Ϸ�
	"west" : "/open/prayer/room/2elder4",		//`���Ϸ�
]));
  set("light_up", 1);

  setup();
}
 
