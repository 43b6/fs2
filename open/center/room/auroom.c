// Room: /open/center/room/auroom.c
// copy from //u/c/chun/shop/auroom.c

#include "/open/open.h"
#include <ansi.h>

inherit ROOM;

void create()
{
        set("short","����");
        set("long",@LONG
���Ǻ��У�ר�ź�������õġ�
LONG );

        set("exits",([
	  "out"	:	__DIR__"bank",
        ]));
	set("objects", ([
	    CENTER_NPC"auc_man"	:	1,
	]) );
	set("light_up",1);
        set("no_clean_up",1);
        setup();
}
