#include <room.h>

inherit ROOM;

void create()
{
	set("short","������");
	set("long",@LONG
�����Ƕ��¾������������������������һ�ȴ󴰣����³���ǰ��ʱ��
���ˣ�������磬����Ϧ�������ľ����ڴ˴����Ϲ���һ�����壬ÿ��΢
�紵��������һ�������˵����������������ѡ�
 
LONG);
        set("exits", ([
	"south":__DIR__"ducu_live3",
        ]) );
	set("light_up",1);
	set("objects",([
	"/open/snow/npc/dugur.c" : 1,
	]));
        setup();
}
