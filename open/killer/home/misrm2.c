#include <room.h>
#include "../../open.h"
inherit ROOM;

void create()
{
set("short","װ����Ŵ�");
          set("long",@LONG
�������Ҷ��ɱ��˵�ķ��䣬��һ��ʬ�����ڰ��ص�����ذ��
���û������ˢ�ӣ����ǲ�Ҫð�յĺá�
LONG);
        set("exits", ([
"south":__DIR__"misrm1.c",
        ]) );
set("objects",([
    "/open/killer/npc/ghost1":1,
]));
set("light_up",1);
        setup();
}