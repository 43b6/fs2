//open/prayer/room/tanchun/1-door.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",@LONG

	��Ȩ�ŵ�����, �������ȥ������Ȩ�ŵ�������(open door). 
	����������Ȩ�ŵ����䳡, ���䳡�ϵ�����������ǿ��ĵ��� 
	. ֻҪ�ܹ�������ٰ�һ�εı���������ӱ����, �����ڽ�
	�ڻ��һϯ֮��!!

LONG);
        set("item_desc", ([ /* sizeof() == 1 */
      "north" : (: look_door,     "north" :),
]));

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"8",		//������
        "south":__DIR__"16",		//���䳡
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/duty" : 2,		//ֵ�����
   		
]));
        set("no_fight", 0);
        set("light_up", 1);
        create_door("north","ʥ�����ľ����", "south",DOOR_CLOSED);
  setup();
}
