#include <room.h>
#include "../../open.h"
inherit ROOM;

void create()
{
set("short","װ����Ŵ�");
          set("long",@LONG
�����ǵ�����λҽ��������󣬱��������װ���ĵط���
����ͷ���һ��ƽ�������ӡ����������ȥ������ʲô�����ɡ�
�Ϸ���һ��СС��ͨ������������Ψһ�ĳ��ڰɡ� 
LONG);
        set("exits", ([
"south":__DIR__"outr4.c",
        ]) );
set("objects",([
    "/open/killer/obj/mbox":1,
]));
set("light_up",1);
        setup();
}