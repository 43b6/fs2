//open/prayer/room/kiyan/15.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

	�����ŵ����䳡, ���䳡�ϵĵ�����������. ����ʥ��̵���ѧ
	��������, ����֮һ������Ǭ����, ������ٱ!!����������Ϊ�� 
	��, ���Ը������Բ��ܹ�̫��, ������˶���������Σ��!!

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
 	"east":__DIR__"14",		
	"south":__DIR__"22",		//���䳡
	"west":__DIR__"17",	
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1" : 1,		//����
  "/open/prayer/npc/trainee4" : 1,		//����
   		
]));
     
  setup();
}
 int valid_leave(object me, string dir)
  {
    if(dir=="west"&&me->query("gender")=="����")
        return notify_fail("�������޷������ܹܵİ칫���� ?\n");
        
   return 1;
}
