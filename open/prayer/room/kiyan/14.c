//open/prayer/room/kiyan/14.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

	�˴������̷ֲ�֮һ�Ŀ����ŵ����䳡, ���䳡���ܽ�ͷ��������
	ָ����������Ŭ�������������ǿ����ŵ�����, ��������Ǵ�����
	�����붫������������Ƿֱ�ͨ���ܹ��븱�����İ칫��.

LONG);

        set("outdoors", "/open/prayer");
        set("no_fight", 0);
	set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"1-door",	//����
	"south":__DIR__"21",		//���䳡
	"east":__DIR__"13",		//����
	"west":__DIR__"16",		//����
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer" : 1,		//�ܽ�ͷ
   		
]));
        
          setup();
}
