//open/prayer/room/tanshun/14.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",@LONG

        ���ȵ��ȶ���ʹ���ϵȵ�������ľ�����, ��ʱ����ɢ��
        �����е���ľ��. ���������䳡, ˳����������Ե��︱
        �����İ칫��. �������������񲻻�ӭŮ��..

LONG);

        set("outdoors", "/open/prayer/room");
        set("no_fight", 0);
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"12",             //����
        "west":__DIR__"15",             //����
 
        ]) );
        
  setup();
}

int valid_leave(object me, string dir)
  {
    if(dir=="east"&&me->query("gender")=="Ů��")
        return notify_fail("Ů�����޷����븱�����İ칫���� !\n");
        
   return 1;
}

