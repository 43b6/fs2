//open/prayer/room/tangi/tangi1-21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",
"�˴������̷ֲ�֮һ������ŵ����䳡,���䳡���ܽ�ͷ��������ָ����������Ŭ
������. ����������ŵ�����,��������Ǵ���.����������Ƿֱ�ͨ���ܹ��븱��
���İ칫��.\n");

        	set("outdoors", "/u/r/rence");
        	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 4 */
        	"north":"/open/prayer/room/tangi/tangi1-17",		//����
	"south":"/open/prayer/room/tangi/tangi1-26",		//���䳡
	"east":"/open/prayer/room/tangi/tangi1-22",		//����
	"west":"/open/prayer/room/tangi/tangi1-20",		//����
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer" : 1,		//�ܽ�ͷ
   		
]));
        
          setup();
}
