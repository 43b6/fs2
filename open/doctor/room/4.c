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
        "south":__DIR__"7",            
        "north":__DIR__"1",             
        "west":__DIR__"5",             
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/doctor/npc/patient" : 1,        
]));

   setup();
}


