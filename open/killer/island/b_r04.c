#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"�ߵ�"NOR);
set("long",@LONG
������һ�䷿�䣬�ż���һ��д��һЩ�֣������˼����㿴�Ķ��ú��֣���ͻ
Ȼ�������Ƴ���³�������Ļ��������������������ǰ��������̬���ƣ��ѵ���
�Ҵ��Ƕ����������ģ�
LONG);
set("exits",([
"north":__DIR__"b_r03",
"south":__DIR__"b_r05",
"east":__DIR__"room02",
]));
setup();
}