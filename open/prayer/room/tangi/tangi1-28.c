//open/prayer/room/tangi/tangi1-28.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long","�����Ǹ��������������ڹ��ĵĹ�����. �ϱ������ȵľ�ͷ.\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/tangi/tangi1-23",		//����
	"south":"/open/prayer/room/tangi/tangi1-33",		//����
	"east":"/open/prayer/room/tangi/tangi1-47",		//�������칫��
       
        ]) );

  setup();
}
 int valid_leave(object me, string dir)
  {
    if(dir=="east"&&me->query("gender")=="Ů��")
        return notify_fail("Ů�����޷����븱�����İ칫���� !\n");
        
   return 1;
}
