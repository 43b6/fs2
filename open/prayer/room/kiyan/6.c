//open/prayer/room/kiyan/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	�����Ͽ��Լ������ϸ�ְλ�ĸɲ���һ������Ŀ����
	վ������Ⱥ���������������ڵ�ְ���Ա�������
	����ʱ�Ĵ�������ֵ�����!!����վ�����ǽ�ͷ��

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"3",		//�һ���
        "west":__DIR__"7",		//������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
	"/open/prayer/npc/general" : 1,		//��ͷ
	"/open/prayer/npc/man5" : 1,		
	]));

	setup();
}
