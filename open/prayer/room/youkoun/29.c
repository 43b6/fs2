//open/prayer/room/youkoun/29.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�η�");
        set("long",@LONG

        ������һλ����, ������Ȼ�ߴ�, ���Ǳ����ڴ�
	������������Ҳ�����ձ���!!������������,
	�ټ���ȫ���˺�����, �ж���Ϊ����!!
		
LONG);

        set("exits", ([ /* sizeof() == 1 */
        "up":__DIR__"26",    
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/youkoun-man" : 1,           //��ʮһ
        ]));
                
  setup();
}

