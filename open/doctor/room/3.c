#include <room.h>
inherit ROOM;
void create()
{
        set("short","������ƫ��");
        set("long", @LONG

    �����������һ��ʯ���ͼ���ʯ�Σ����ӵ�ͽ����������Ϊʦ��
ĥ�룬�Ա���һ�Ű׺�ͼ����ľ�����磬������һ��ľ�������ǻ���
���˿����ʸ��õģ�Ҳ������ν���������ˡ�

LONG
        );
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"2",     
        "south":__DIR__"6",
        "west":__DIR__"29",

        ]) );
        set("light_up", 1);
        set("objects", ([ /* sizeof() == 1 */
  "/open/doctor/npc/liu" : 1,
]));
  setup();
}



