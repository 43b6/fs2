//open/prayer/room/tanchun/30.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	��Ȩ��˽���������, ��ͷ������������ʯ��. ������˾ͽ����
	����Ҵ���ѧ�ĵط�!!��һ��ʯ����ר�Ÿ��������õ�!!

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 1 */
	"south":__DIR__"2",		//����
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/teststone" : 1,		//ʯ��
   		
]));
     
  setup();
}

