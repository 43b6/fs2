//__DIR__"11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

	����Ÿ������İ칫��. ������ͨ�����䳡�ķ���,
	�ϱ��������������鷿. �㿴��������ĸߴ��ʥ��
        �̵���վ���ſ�����. �����ڵİ��迴���൱����.

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
