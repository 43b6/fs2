//open/prayer/room/uhen/21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        ����ŵ����䳡, ���䳡�ϵĵ������������������˻���֮��
        �Ե춨�պ�ѧϰʥ��̸�����ѧ--����Ǭ����--�Ļ���. ֻ���� 
        ��������Ŭ������ϰ��. ��
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
           "north":__DIR__"14",		//���䳡
	"south":__DIR__"2-door",		//���䳡
	"west":__DIR__"22",		//���䳡
	"east":__DIR__"20",		//���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee2" : 1,		//����
        "/open/prayer/npc/trainee1" : 1,		//����
   		
]));
        create_door("south","ʥ����ƾ��ִ���", "north",DOOR_CLOSED);     
     
  setup();
}
