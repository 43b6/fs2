//open/prayer/room/uhen/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	�����Ͽ��Լ������ϸ�ְλ����ͽ��һ������Ŀ��
	��վ������Ⱥ���������������ڵ�ְ���Ա���
	��������ʱ�Ĵ�������ֵ����⣮��ͷ������û��ʲ
	ô����ɣ�����һ�������ɵ����ӣ�

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"3",		//�һ���
        "west":__DIR__"7",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general" : 1,		//��ͷ
]));

   setup();
}
