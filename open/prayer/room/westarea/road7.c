//open/prayer/room/westarea/road7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ������ͨ��Ʈ
	���Ĺ���"�׻���". ���ߵ���ѧ������ʥ��̵���ѧ�������
	����, ���������������һɽ���ݶ�����ԭ���!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 1 */
        	"south":__DIR__"road5",		//�ֵ�

        ]) );
        set("no_fight", 0);
        
  setup();
}
