#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
set("short","����֮��");
          set("long",@LONG
������ǰ�ľ��Ǵ�˵�еĳ��ϼ�ɱ��--���٣���˵���Բ�û�����������������
�������ܵ��ڴ�ѵ�����������ĳ���ɱ�֣���˵���ٵı�ɱ�ܼ�----ħ��ɱ��
���Ǻ�����֮�����ϲ���ռ����壬һ����Ӹ�������ѧ��
����˵��Ӱذ�׵�������Ҳ���ɴ˿�ʼ����������

LONG);
        set("exits", ([
"up":__DIR__"rbd.c",
        ]) );
set("objects",([
    "/open/killer/npc/rou":1,
]));
set("light_up",1);
        setup();
}