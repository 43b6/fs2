#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
set("short","ר�ñ�����");
          set("long",@LONG
��������Ҷ��ɱ��������������ĵ�����--ɱ��ħ��ĵط���
������һ����ͨ���������������ҵĳ��ڰɡ� 
LONG);
        set("exits", ([
"west":__DIR__"weaponrm.c",
        ]) );
set("objects",([
    "/open/killer/obj/kbox":1,
]));
set("light_up",1);
        setup();
}