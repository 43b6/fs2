inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "Ծ�ؽ�");
        set ("long", @LONG
���Ϸ嶥����֪����ǰ�����������ǻã�ԭ��ɽ��ɽ���������
�ȴ�����ӳ�������������Ǵ����ɼ����㾲���Ĵ���ԭ�أ�ȴ��
�����κεĶ�����ֻ��һ����С�ľ�Ծ��ؽ磬�۵ķ�����ǡ�
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "down"    : __DIR__"mon41",
]));
        setup();
}
