inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "����");
        set ("long", @LONG
һ���ª�ĳ���������ɢ����һ����ߵ���Ƭ��������ʣ������
��������꣬Ϊ�������������һЩ�����������Ĵ���ɢ���ڳ�����
ÿ�����䣬�㻹����һ��¯���ڳ�������һ�ǡ�
LONG);


        set("exits", ([ /* sizeof() == 4 */
        "west"      : __DIR__"mon01",
]));
        setup();
}
