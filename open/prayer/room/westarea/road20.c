//open/prayer/room/westarea/road20.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. �������Ե�
	��ʥ���֧�ŵ�"��Ȩ��"��"������". ������Ǯׯ. ��а��
	�ߵĳ���ڳ���ɽ����, ��˵����̳��Ҳ����һ�������!!
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
       "north":__DIR__"r1-16.c",	//Ǯׯ  
       "east":__DIR__"road19",		//�ֵ�
       "west":__DIR__"road21",		//�ֵ�
 
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
