inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "ˮ��̯");
        set ("long", @LONG
���۸��ָ������ʵ�ˮ����ˮ������ζ���磬��Զ�ڼ��ٹ��ߵ�
�㶼���������ֻ��������ʵ��С�ȳƣ�֭�౥����ζ������������
�޻���˵��
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town26",
	]));

        setup();
}