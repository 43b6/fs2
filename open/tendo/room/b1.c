#include <ansi.h>
#include <room.h>

inherit ROOM;
void create()
{
set("short","�����ɾ�");
set("long", @LONG
�����Ǵ�˵�е������ɾ���ֻ������������������֦�컨���侰
�����˼��ɾ�һ�㣬̧ͷ�����������ͬ����Ⱥ�����ޣ���Լ������
�������߰����˵��������ǰ������ͨ����Ӧ����ͨ����صġ�

LONG);

        set("light", 1);
        set("light_up", 1);
        set("no_fanset", 1);
        set("no_chome", 1);
        set("exits", ([ /* sizeof() == 2 */
        "north" : "/open/tendo/room/b2",
        "back" : "/open/tendo/room/start",
        ]));

        set("objects",([
        "/daemon/class/taoist/necromancy/npc/hawk1" : 1,
        ]));
        setup();

}
