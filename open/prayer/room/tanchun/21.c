//open/prayer/room/tanchun/21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

	���䳡�ϵĵ���һ��������ĥ���Լ������ܣ�ֻϣ���ܹ���һ��
	�߱���ϰ����Ǭ�������ʸ�!!������Ǭ����һ����һʮ��ʽ, ÿ 
	һʽ���������벻���ı���, ����Ҫѧ��ʮ�ɵĻ��, �͵�Ҫ��
	������Լ��Ϻ����Ŭ����!! 

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"17",		//���䳡
	"south":__DIR__"27",		//���䳡
	"east":__DIR__"20",		//���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,		//����
  "/open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
