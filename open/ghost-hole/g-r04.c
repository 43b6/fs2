#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"��ڤ��"NOR"С��");
        set("long",@LONG
���߽�����ڤ��Ψһ��С��ׯ, �������˵��
��ڤ�����˼�������Ƶĵط���, ֻ������������
����������ͬ��ħ��ס������, ���������Ƿ�����
ڤ����������ĵط�, ����������������ڤ������
����Ϣ�ĵط�...
LONG);
        set("exits",([
        "south":__DIR__"g-r05",
	"west":__DIR__"g-r06",
	"east":__DIR__"g-r07",
        "north":__DIR__"g-r03",
        ]));
        set("no_transmit",1);
        setup();
}
