//open/prayer/room/kiyan/13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

	�����ŵ����䳡, ���䳡�ϵĵ�������ѵ������. ����ʥ��̵���
	ѧ��������, ��������Ǭ����Ų�ƵĲ���, �ǽ����ɶ�����ϰ�õ�
	��ѧ!!�ܹ�����ıܿ����˵Ĺ���!!

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"11",		//����
	"south":__DIR__"20",		//���䳡
	"west":__DIR__"14",		//���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,		//����
  "/open/prayer/npc/trainee4" : 1,		//����
   		
]));
     
  setup();
}

 int valid_leave(object me, string dir)
  {
    if(dir=="east"&&me->query("gender")=="Ů��")
        return notify_fail("Ů�����޷����븱�����İ칫���� !\n");
        
   return 1;
}
