#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"NOR);
set("long",@LONG
̧ͷһ��, ������ϡ����������������ϸ��¶����Щ
΢������, ���ϳ�����Ұ��, ʹ��������ϸ��ʱ��û����
�����ĳ������
LONG);
set("exits",([
"down":__DIR__"g-h03",
]));
set("no_transmit",1);
setup();
}

