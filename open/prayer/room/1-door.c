//open/prayer/room/1-door

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    ���������ڵ�λ�ã�����ʥ������ķ��䣬���ǽ��������������Ϣ
    ����һ��խ�����ߵ����������߾ͻᵽ�����ԭ���ֵġ�ʥ���
��̳�ˣ����������ȵľ�ͷ����һ������Ļ�⣬Ī��ʥ������������
ʵ��ȼ�Ų����ʥ�𣡣� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/major-officer" : 1,		
]));
  set("exits", ([ /* sizeof() == 2 */
	"enter" : "/open/prayer/room/punch1-13",		//`����
	"south" : "/open/prayer/room/train1",		//`���䳡
]));

  setup();
}
 
