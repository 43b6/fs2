#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","������");
  set ("long", @LONG
�����Ǻ�����ƽʱ��������ĵط�����������Կ������ٵı���
���Ǵ���ǰ�����ֻ�к������ĵ��ӿ�����������ȡ���������Ǳ���
������������ı���ʹ����(report)����֪����ʲô��������(list)��


���������ǰ����һ�����ʯ����������һ������ң�
����ı���ʹ���Һ�����Ҷ��ɱһ�����룬Ŀǰ����ɱ����̳�ı������С�
��Ȼ��о��Ϸ��ƺ����˵���Ϣ���ڣ�
����ɣ����˻��ס��������
�ǵ�Ҷ��ɱ�������������ı������л�������ѵ���ң�
��֪�������ǲ����б��ƻ������������ҿ����ɡ���
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
	"west":__DIR__"r3",
]));

/*
  set("objects",([
	"/open/snow/npc/manager":1,
	]));
*/

  setup();
}

void init()
{ 
   add_action("do_search","search");
}

int do_search()
{
   object me;
   me = this_player();
   tell_room(me,""+me->query("name")+"�ҵ��˻��أ�������һ����·��\n");
    set("exits", ([
	"west":__DIR__"r3",
	"south":__DIR__"r5",
]));
   return 1;
}
