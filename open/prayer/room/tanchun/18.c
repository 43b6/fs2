//open/prayer/room/tanchun/18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",@LONG

	��Ȩ�ŵ����ȣ����ȵ��ȶ���ʹ���ϵȵ�������ľ����ģ���ʱ
	����ɢ�������е���ľ�㣮���������䳡��˳����������Ե���
	�ܹܵİ칫�����ܹܵİ칫�����ǲ�׼���Խ������!!

LONG);

        set("outdoors", "/open/prayer");
        set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
	"east":__DIR__"17",		//����
        "south":__DIR__"23",		//����
 
        ]) );
        set("objects",([ /* sizeof() ==  1*/
        "/open/prayer/npc/lu" : 1,		
        ]) );        

        
  setup();
}

int valid_leave(object me, string dir)
  {
    if(dir=="south"&&me->query("gender")=="����")
        return notify_fail("�������޷������ܹܵİ칫���� ?\n");
        
   return 1;
}
