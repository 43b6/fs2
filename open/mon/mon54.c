inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "ɽ��С��");
        set ("long", @LONG
СС��һ��·����ͨ�����嵱�е�������ؾ���С������������
ǰ��ȥ����ֻ�������ܲ�ľ��������ʢ���������ƺ����ܵ�����ص�
Ӱ�����¡�
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "southdown"   : __DIR__"mon55",
        "northup"     : __DIR__"mon38",
]));
        setup();
}
