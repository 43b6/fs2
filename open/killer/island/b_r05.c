#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"�ߵ�"NOR);
set("long",@LONG
�����ҡ�μӴ��ˣ��·��ھ��������߸Ͽ��뿪���װ������Ѿ����࣬����
�ӣ����Ҵ���Ŀ�Ҫ�������ˡ�
LONG);
set("exits",([
"north":__DIR__"b_r04",
"south":__DIR__"b_r06",
]));
setup();
}