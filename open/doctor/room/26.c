#include <room.h>
inherit ROOM;
void create()
{
        set("short","ľ�˳�");
        set("long", @LONG

    ǽ���������������Ѩ��ͼ�ͽ�˵���Ա��������ǣ�����ʽ��
Ϊ�����������ŵ��ӣ������������ЩѨλ�������ǲ�������������
�����Ƕ���������񱳵�ͦ������

LONG
        );

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"20",            
        "south":__DIR__"2-door",       
        "west":__DIR__"27",            
        "east":__DIR__"25",         

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/doctor/npc/trainee2" : 1,             
        "/open/doctor/npc/trainee1" : 1,                

]));
        create_door("south","��ľ���ƴ���", "north",DOOR_CLOSED);

  setup();
}


