#include "/open/open.h"
inherit ROOM;

void create()
{
	set("short", "��·��");
	set("long", @LONG
    ��������ɽС���Ĳ�·��,������������,������������,�򶫿ɵ�
���г�,������ͨ����ɽ��ɽ��...
LONG
	);
	set("exits", ([
     "north" : __DIR__"road0.c",
     "west" : __DIR__"towerf.c",	
    "east":__DIR__"froad1",
     "south" : __DIR__"lake1.c" ,
]));
//        set("objects", ([
//             GW_NPC"sells2" : 1,
//             GW_NPC"visitor" : 1,
//          ]));  
	setup();
}


