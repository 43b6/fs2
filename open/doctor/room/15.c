#include <room.h>
inherit ROOM;
void create()
{
        set("short","���䳡");
        set("long",@LONG
�����䳡�Ķ����ǣ���������������ɳ�����ݣ��ƺ��Ըղ���
ѧ�Ĳ���������������ӡ�

LONG);

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"14",            
        "south":__DIR__"19",            
        "west":__DIR__"16",             

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/doctor/npc/trainee1" : 1,              
  "/open/doctor/npc/trainee2" : 1,            

]));

  setup();
}


