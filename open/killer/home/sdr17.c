#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
set("short","����֮��");
          set("long",@LONG
������ǰ�ľ��Ǵ�˵�кڰ��������������һ��---ŷ�����գ���˵���Ծ���ʧ������
û�뵽��Ȼ�ڴ��ֳ����ˣ���������Ϊ�˺�Ѫ����ŵ��˴��ɡ�
��Ϊ�ڴ�˵�У�����Ʈ�����к����ԨԴ��Ȼ����Ѫ���뱾�����ǳ�����Ʈ������


LONG);
        set("exits", ([
"up":__DIR__"sdr2.c",
        ]) );
set("objects",([
    "/open/killer/npc/oyang.c":1,
]));
set("light_up",1);
        setup();
}