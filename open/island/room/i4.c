inherit ROOM;

void create()
{  
   
   set("short","��ԭ");
   set ("long", @LONG
������ǰ����һƬ�̲�������΢�����һ�����
���������ԭҰ�������Ų�֪����С����ԶԶ�Ĳſ�
�ĵ����ô��������ߺ����л�ũ�ң�                     
LONG);
   set("light_up", 1);
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */
 "west" : "/open/island/room/i7",
   "south" : "/open/island/room/i9",
    "north" : "/open/island/room/i6",
  "east" : "/open/island/room/i8",
]));
   set("outdoors", "/open/main");

 setup();
}

