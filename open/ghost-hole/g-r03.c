#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"��ڤ��"NOR);
        set("long",@LONG
������ȳ�ζ���ϵ��˱Ƕ���, ���̲�ס����ס
�˱���, ����ż���ᴫ�������ҡ��, �о��ܲ����
, �ϱ��ƺ����������ǽк���, ������Ӧ�����Ǳ߿�
��..
LONG);
        set("exits",([
        "south":__DIR__"g-r04",
        "north":__DIR__"g-r02",
        ]));
        set("no_transmit",1);
        setup();
}
