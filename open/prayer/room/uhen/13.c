//__DIR__"13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG
         
        �㿴�����䳡�������������������д��似, ˫����������
        ��ʱȭ�������. �����ԱߵĶ���Ҳ���򻵲���...
        ���������������İ칫��.
 
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
