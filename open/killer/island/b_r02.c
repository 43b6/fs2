#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"�ߵ�"NOR);
set("long",@LONG
��������һ�䷿�䣬�ż�����д��һЩ�㿴�������֣��ɴ˿��Ƶã����Ҵ���
������һ��������ԭ��ʿ������������Ť�˵����ͣ����ƺ������������￴����һ
ʱ֮�䣬��Ҳ���벻������
LONG);
set("exits",([
"north":__DIR__"b_r01",
"south":__DIR__"b_r03",
"west":__DIR__"room01",
]));
setup();
}