#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set("short","��Ѩ���");
  set ("long", @LONG
�����Ǻ���������ǰ�����ģ���������һ��ɱ����֯�ĵ���ϯ
��Ҷ��ɱ�����ഫ������һ�ưɣ����书֮ǿ���Ƿ��˿�֪������
�����Ե������ĵ��ӣ�Ҳ���������쵱����ɱ�֡�
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
	"out":__DIR__"r2",
	"east":__DIR__"r4",
	"north":__DIR__"blackwiz",
]));

  set("objects",([
	"/daemon/class/killer/master_yar":1,
        "/open/main/obj/torch" : 1,
        ]));
  set("valid_startroom", 1);
  setup();
  call_other("/obj/board/killer_b","???");
}
