//open/prayer/room/tanchun/20.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

	��Ȩ�ŵ����䳡, ���䳡�ϵĵ�������ѵ������. ����ʥ��̵�
	Ǭ����Ų�ƵĲ���, �ܹ�����ıܿ����˵Ĺ���!!���ҿ��Գ���
	������Ƶ����Ȼ�!!

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"16",		//���䳡
	"south":__DIR__"26",		//���䳡
	"west":__DIR__"21",		//���䳡
	"east":__DIR__"19",		//���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee3" : 1,		//����
  "/open/prayer/npc/trainee4" : 1,		//����
   		
]));
     
  setup();
}
