//open/prayer/room/kiyan/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�鷿");
        set("long",@LONG

	�鷿�����ȫ��������������ľ���ɵģ��������ɣ������Ĵ��ɼ�
	��ʫ�Ŵʵ��鱾�����л����Ӳ��ٵ���ѧͼ�ڣ�����������ע���
	Ҫ���ǳɶѰ�������������鼮��!!

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "west":__DIR__"3",		//�һ���
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
  setup();
}

