#include <room.h>
inherit ROOM;
void create()
{
        set("short","����");
        set("long",@LONG
�����������ŵ����أ������� (open door)�ߣ����������ŵ�����
�ң��������������ŵ�ľ�˻�ͭ�˳���ľ�˳��ﵽ������ϰ��ǿ����
ʶѨ���ĵ��ӡ�

LONG);
        set("item_desc", ([ /* sizeof() == 1 */
      "north" : (: look_door,     "north" :),
]));

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"8",           
        "south":__DIR__"16",        

        ]) );

        set("objects",([ /* sizeof() == 1 */
  "/open/doctor/npc/duty" : 2,       

]));
        
        set("light_up", 1);
        create_door("north","��ľ���ƴ���", "south",DOOR_CLOSED);
  setup();
}


