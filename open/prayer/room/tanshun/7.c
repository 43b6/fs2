//u/r/rence/room/tanshun/7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

        ���������Ķ��Ͻ�, ��һ���ܽ�ͷ���ڱ������е��ӡ���
        ������. ˵�����⴦, ����¶�������Ц��! �ƺ������
        ����һ�ȵı����ᱧ�ż��������!

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"4",             //������
        "west":__DIR__"8",              //������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general-officer" : 1,         
]));

   setup();
}
