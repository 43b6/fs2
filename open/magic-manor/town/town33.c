inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�߲�̯");
        set ("long", @LONG
��̯С���������Ÿ���������߲ˣ�ֻ���߲�ɫ���������ˬ
�ڣ���ǮҲ�������������˲�����������ѡ���򡣶���Ҳ�����ϵ�
��������Ϊ����һ���߲�̯��
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town27",
	]));

        setup();
}