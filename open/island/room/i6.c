inherit ROOM;

void create()
{  
   
   set("short","��ԭ");
   set ("long", @LONG
������ǰ����һƬ�̲�������΢�����һ�����
���������ԭҰ�������Ų�֪����С����ԶԶ�Ĳſ�
�ĵ����ô�����������Ȼ���������У�                     
LONG);
   set("light_up", 1);
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */
 "west" : "/open/island/room/i5",
   "south" : "/open/island/room/i4",
    "north" : "/open/island/room/i3",
  "east" : "/open/island/room/i13",
]));
   set("outdoors", "/open/main");

 setup();
}
