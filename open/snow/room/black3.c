#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set("short","��Ѩ���");
  set ("long", @LONG
�����Ѩ������ͦ�����Ƶģ���Ѩ��ʯ�ڿ���һ��������״
�ഫ��������һ��ɱ����֯�����С��������������Ŵ���֯ʮ��
���أ�������������ɱ�֣�ɱ�޲��ˣ���������˲�䣬�������
֯���������ƣ�����������ʮ�����ơ�
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
	"out":__DIR__"black2",
	"enter":__DIR__"black4",
]));
       set("objects",([
   "/open/killer/npc/guard.c" : 2,  ]));

  setup();
}
