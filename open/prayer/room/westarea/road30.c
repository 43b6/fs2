//open/prayer/room/westarea/road30.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ������������
	����ʥ��̵���̳. ��������Ե���ʥ���֧����"�����"��
	"������" .��������Ǯׯ. ʥ��̵ķּ��ƶȷǳ�����, ����
	������[�����Ǿ�]��ְ��, �����˵�ѧ�������ֱ���һ��һ��
	, ������Ȼ�����뻯.
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"r1-15.c",	//Ǯ��
        "east":__DIR__"road21",		//�ֵ�
        "west":__DIR__"road23",		//�ֵ�
 
        ]) );
        
        set("no_fight", 0);
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/high-man3" : 1,		
        ]) );
    setup();
}
