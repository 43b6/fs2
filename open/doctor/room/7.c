#include <room.h>
inherit ROOM;
void create()
{
        set("short","������");
        set("long", @LONG

    ǽ������������鷨��д�š�ҽ�ߴ��ɱ�����������ɼ������ȡ�
���㲻�ȵ����廪�ӵ���ҽ�緶��ƽʱ���԰��Ľ̵���ͽ���������Ե�
���ˡ�

LONG
        );        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"4",             
        "west":__DIR__"8",             
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/doctor/npc/woman" : 1,
        "/open/doctor/npc/man" : 1,                
]));

   setup();
}

