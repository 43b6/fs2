//open/prayer/room/tangi/tangi1-24.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",
"���ȵľ�ͷ������ŵĳ�������������Ե���������������ܹܵĴ��������
�ط�.\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":"/open/prayer/room/tangi/tangi1-19",		//����
	"south":"/open/prayer/room/tangi/tangi1-29",		//����
	"west":"/open/prayer/room/tangi/tangi1-44",		//�ܹܰ칫��
       
        ]) );

  setup();
}
 int valid_leave(object me, string dir)
  {
    if(dir=="west"&&me->query("gender")=="����")
        return notify_fail("�������޷������ܹܵİ칫���� ?\n");
        
   return 1;
}
