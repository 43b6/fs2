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
  "/open/start/npc/hen" : 2,
  "/open/start/obj/bogle" : 1,
]));
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */
 
   "west" : "/open/island/room/i6",
    "north" : "/open/island/room/i15",
   "east" : "/open/island/room/m1",

]));
   set("outdoors", "/open/main");

 setup();
}

