//open/prayer/room/punch1-8

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    ����ǰ�����ʥ��̾�ʦ�Ĵ����ˣ�������Ľ�ͽ�ƺ������࣬����
ֻ���д��������ʦ�ĵմ����ӲŻᾭ�����͸������Ƚ������������
��֮��...... 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/vice-manager" : 1,		//����
]));
  set("exits", ([ /* sizeof() == 3 */
	"north" : "/open/prayer/room/punch1-4",		//`��ʦ
	"south" : "/open/prayer/room/punch1-11",	//`����
]));

  setup();
}
 
