#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "ʱ�յ����");
        set("long", @LONG
Ϊ�������е��˸��˽�����Ϊ�����������Ŭ�����������ǣ���
���ر�������������ݣ�����������Ϸ����֮ʱ��Ҳ���ڴ˸�л��
����������һ��ʱ�����Ѫ��ҲҪ��л����ʱ�����ιۡ�

����վ��������ǰ�ĵ�����  �� �ͼ�(nike) ��

LONG);


        set("exits", ([ 
//      "north" : __DIR__"bssroom",
        "south" : __DIR__"cgyroom",
        ]) );

        set("objects", ([
        "/open/main/statue/npc/nike-statue": 1,
        ])); 

        set("outdoors", "/open/main" );
        set("no_fight",1);
        set("no_kill",1);

        setup();
}

