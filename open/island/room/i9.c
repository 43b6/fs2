inherit ROOM;

void create()
{  
   
   set("short","ũ��");
   set ("long", @LONG
���ɫ������͵͵Ĵ����������ܻ�����ľͷ��
������С��ʣ�����ϡ��İ��ż��������ˣ����Ƿ�
������ũׯ���£�                     
LONG);
   set("light_up", 1);
set("objects", ([ /* sizeof() == 2 */
  "/open/start/npc/sparrow" : 1,
  "/open/start/obj/bogle" : 1,
]));
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */
 "east" : "/open/island/room/i12",
   "northwest" : "/open/island/room/i7",
    "north" : "/open/island/room/i4",
  "northeast" : "/open/island/room/i8",
]));
   set("outdoors", "/open/main");

 setup();
}


