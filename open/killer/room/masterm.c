#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","��̳����");
  set ("long", @LONG
�����Ǻ�������̳��������û���ر��װ�Σ�����һ���˸߸��������ϡ�
��ǰ�����ģ���������һ��ɱ����֯�ĵ���ϯ---Ҷ��ɱ
�ഫ������һ�ưɣ����书֮ǿ���Ƿ��˿�֪�����������Ե������ĵ��ӣ�
Ҳ���������쵱����ɱ�֡������ɱ�������ȿ����Լ��ķ����ɡ�������
��¥��ɱ�ֳ�����ʱ������װ���ĵط������Ǳ������ʹ�Ҷ��ɱ�ſ��ԡ�
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
	"south":__DIR__"ru3",
    "up":__DIR__"misrm1",
  "east":__DIR__"ru4",
  "west":__DIR__"ru5",
 "north":__DIR__"bedrm",
]));

  set("objects",([
  "/daemon/class/killer/master_yar.c" : 1,
        "/open/main/obj/torch" : 1,
        ]));
  set("valid_startroom", 1);
  setup();
}
