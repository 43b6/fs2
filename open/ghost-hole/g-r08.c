#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"��ڤ��"NOR"����");
        set("long",@LONG
�������Ӱ�������������, �ɼ��ô˲���֮С, 
�����и�ľ��, �о��������ڼ����������ݲ�����
��ľ��, �����о��·��������˼���ƽ��ס��һ
��, ʮ�ֵ����...
LONG);
        set("exits",([
        "out":__DIR__"g-r05",
	"west":__DIR__"g-r09",
        ]));
        set("objects",([
        __DIR__"npc/wis-man":1,
        ]));
        set("no_transmit",1);
        setup();
}
