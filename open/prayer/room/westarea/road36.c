//open/prayer/room/westarea/road36.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. �������Ե���ʥ
	���֧�ŵ�"������". �����ŵĹ�ģ��Ȼ���������Ŵ�, ����
	����ȴ���������ȥ��Զ, ԭ������Ϊ���ŵ����������Ǿ��ĵ�
	�����!!�������ǵ���.
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"suhock",	//����
        "east":__DIR__"road35",		//�ֵ�
        "west":__DIR__"road37",		//�ֵ�
 
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
