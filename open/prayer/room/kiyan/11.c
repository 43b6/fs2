//open/prayer/room/kiyan/11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

	�����Ÿ������İ칫��. ���ڵİ�����˼�������֮��, Ҳû��ʲ
	ô������..���������Ľ��ڵ�����վ��, �ɼ��������ĵ�λҲ��
	�ǳ�����Ҫ��߽���!!�ϱ��Ǹ�����������!!

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"10",		//��������
	"south":__DIR__"12",		//��������
	"west":__DIR__"13",		//����
        "east":__DIR__"9",		//��������
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee1" : 1,		//����
   "/open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
