//open/prayer/room/zhenche/18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",@LONG

        ���ȵ��ȶ���ʹ���ϵȵ�������ľ�����, ��ʱ����ɢ��
        �����е���ľ��. ���������䳡, ˳����������Ե�����
        �ܵ��鷿. �����ܹܺ�����ô��ӭ����..

LONG);

        set("outdoors", "/open/prayer/room");
        set("no_fight", 0);
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"17",             //����
        "south":__DIR__"23",            //����
 
        ]) );
        
  setup();
}

int valid_leave(object me, string dir)
  {
    if(dir=="south"&&me->query("gender")=="����")
        return notify_fail("�������޷������ܹ��鷿�� ?\n");
        
   return 1;
}
