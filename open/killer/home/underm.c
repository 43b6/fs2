#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set("short","�����������");
  set ("long", @LONG
�����ǲ�����ָʾ�����ң�������Ҫ���˾��������ˡ�ǧ�򲻿��Ե������ġ�
�ɷ��д���������ɱ�������������Ѿ�����ɱ������Ҫ����ɱ���㡣
�������û�а��յĻ������Ǿ���Ĵ��Ϸ��Ĺ�������ȥ�ɡ� 

LONG);

  set("exits", ([ /* sizeof() == 3 */
"south":__DIR__"outr0.c",
]));

  set("objects",([
        "/open/killer/npc/wanted.c":1,
        "/open/main/obj/torch" : 1,
        ]));
  setup();
}