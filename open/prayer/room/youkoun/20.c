//open/prayer/room/youkoun/20.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        һ����������, �Ϳɿ������������䳡! ����������ֻ��
        Ů����, ��˹㳡�������Ҳ����Ů��! ΢�紵��, ֻ��
        ��һ�ɺ�����������ӵ�����ζ��..

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"17",            //���䳡
        "south":__DIR__"2-door",        //���䳡
        "west":__DIR__"21",             //���䳡
        "east":__DIR__"19",             //���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee3" : 1,                //����
        "/open/prayer/npc/trainee1" : 1,                //����
                
]));

        create_door("south","ʥ����ƾ��ִ���", "north",DOOR_CLOSED);     
  setup();
}
