inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�Ʒ�����");
        set ("long", @LONG
�ߵ�������������һ�������ĵط�����Զ������������С��
�����������ߵ������ε�������࣬�������˳�Ҳ�����Ķ��ˣ�����
��һ����ů�ĸо���
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town13",
        "west"	: __DIR__"town41",
	]));

        setup();
}
