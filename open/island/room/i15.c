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
  "/open/start/npc/sparrow" : 2,
  "/open/start/obj/bogle" : 1,
]));
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */
 
   "west" : "/open/island/room/i3",
    "south" : "/open/island/room/i13",
  
]));
   set("outdoors", "/open/main");

 setup();
}
