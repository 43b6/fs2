inherit ROOM;

void create()
{  
   
   set("short","���ɵ���");
   set ("long", @LONG
������ǰ����һ���޼ʵ�ɳ̲������ɫ��պ��
һ���߲ʵĺ磬���ܵľ�ɫ������ԭ���Ѽ���������
�����滨��ݣ��ڰ�ɫ��ӨӨɳ�����Եø��������
�ҷ���������һƬ��ԭ��                     
LONG);
   set("light_up", 1);
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */

   "west" : "/open/island/room/island",
    "east" : "/open/island/room/i3",
  "south" : "/open/island/room/i5",
]));
   set("outdoors", "/open/main");

 setup();
}


