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
 "west" : "/open/island/room/i1",
   "south" : "/open/island/room/i6",
    "north" : "/open/island/room/i2",
  "east" : "/open/island/room/i15",
]));
   set("outdoors", "/open/main");

 setup();
}

