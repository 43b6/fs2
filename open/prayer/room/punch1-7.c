//open/prayer/room/punch1-7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    ����ǰ�߱���ʥ��̸������������ͽ��һ������ָ���������书
�Ĵ����ˣ��㿴�����ٵĽ�ͽ���ﲻ�����߽��߳�����ظ�������һλ��
�����ѵ��ˣ����ܴ�����񲢽̵��书�� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/vice-manager" : 1,		//����
]));
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/prayer/room/punch1-3",		//`������
	"south" : "/open/prayer/room/punch1-9",		//`����
]));

  setup();
}
 
