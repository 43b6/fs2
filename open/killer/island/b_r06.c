#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"�ߵ�"NOR);
set("long",@LONG
���ߵ��ż��Ϲ���һ�������桯ͭ��ģ�Ͱ棬�����������˽⵽����������
���Ĳ������������Ӷ��˵Ļ����������ȥ�Ǳ���һЩ���������԰ɣ�����ҪС
�ĳԵ��ж�����Ʒ��
LONG);
set("exits",([
"north":__DIR__"b_r05",
"south":__DIR__"b_r07",
"west":__DIR__"room03",
]));
setup();
}