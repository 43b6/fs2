inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "Сƽԭ");
        set ("long", @LONG
СС��ƽԭ��һ���޼ʵĿտ��У�ʹ���й���ɪ�ĸо������ƺ�
�����ڲ�Զ��ǰ������һ�����̵���Ϣ��
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town41",
        "west"	: "/open/main/room/L21",
	]));

        setup();
}
