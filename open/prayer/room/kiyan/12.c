//open/prayer/room/kiyan/12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

	���������͵������л��ҳ�, �������ĺͰ������ɴ˿ɼ�һ��!!
	���ڵİ�����˼�������֮��, Ҳû��ʲô������..���������
	�Ľ��ڵ�����վ��, �ɼ��������ĵ�λҲ�Ƿǳ�����Ҫ��߽���
	!!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"11",		//��������
	"northeast":__DIR__"9",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/vice-chair" : 1,		
   "/open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
