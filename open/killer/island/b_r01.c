#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"�ߵ�"NOR);
set("long",@LONG
�����������ߣ��װ�ȴ��Ϊ���ض�����"֨֨"����������������ṹ�ƺ��Ѿ�
��Ҫ������ˣ����ƺ���С��һ�ㆪ��
LONG);
set("exits",([
"north":__DIR__"b_s",
"south":__DIR__"b_r02",
]));
setup();
}