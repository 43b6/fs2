//open/prayer/room/westarea/road40.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ������ͨ��Ʈ����
	��֮һ��"���乬". ������ʥ��̵�ʥ�������, ��ʥ��̱Ƚ���
	��, Ʈ��ǵ������ƺ����Ե�С�˺ܶ�!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 1 */
        "north":__DIR__"road35",		//�ֵ�

        ]) );
        set("no_fight", 0);
        
  setup();
}
