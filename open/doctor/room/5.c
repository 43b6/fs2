#include <room.h>
inherit ROOM;
void create()
{
        set("short","������");
        set("long", @LONG

    һ���������Ѩ������������ǰ��������Ѩ������Ѩ������Ѩ��
����Ѩ....�ȣ��������ۻ����ң��㲻����ʼ��̾������˰��

LONG
        );
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"2",             
        "south":__DIR__"8",             
        "east":__DIR__"4",              
        "west":__DIR__"6",             
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/doctor/npc/patient1" : 1,        
]));
   setup();
}


