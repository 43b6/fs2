
inherit ROOM;
void create()
{
  set ("short", "��촦");
  set ("long","
    ����߱�������һ����Ҫͨ�����ܲ��飬��������
��Ȼ��..��������ܽ���һ���Ǻ��ܸɵģ��ڵ�����һ
������(dumbbell)�����������������

 ");
   set("exits", ([
   "west"       : __DIR__"r16.c",
      
  ]));      
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/john":1,
]));
  set("light_up", 1);
  setup();
} 

