//AM 09:52 2001/9/16 bye neverend

inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "С��ԭ");
        set ("long", @LONG
�뿪������һֱ������ǰ����ֻ���������������٣�·Ҳ������
�����ˣ���ǰ�ľ�����һ���޼ʵĲ�ԭ������ʱ��������һЩ����
�Ľ������ƺ������������ĵĵط���
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town43",
        "west"	: __DIR__"town39",
	]));

        setup();
}
