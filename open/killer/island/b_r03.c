#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"�ߵ�"NOR);
set("long",@LONG
���ߵ��������ͻȻҡ����һ�£��װ巢��������Ҳ����ˣ���������û��
�ÿ��ܾͻ����ˣ�Ҳ����Ӧ���ټӽ��Ų��뿪�Ŷԡ�
LONG);
set("exits",([
"north":__DIR__"b_r02",
"south":__DIR__"b_r04",
]));
setup();
}