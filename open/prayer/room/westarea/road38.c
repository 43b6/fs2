//open/prayer/room/westarea/road38.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ������������
	����ʥ��̵���̳. ��������Ե���ʥ���֧����"������", 
	��Ʈ���Ĺ���"��ȸ��". 
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"road37",		//�ֵ�
        "west":__DIR__"road39",		//�ֵ�
 
        ]) );
        
        set("no_fight", 0);
    setup();
}
