

inherit ROOM;
void create()
{
  set ("short", "������");
  set ("long","
    �����Ƿ��Ҿ��Ǳ����ĵط������Ｏ����һЩ���
���ܣ�������ʾ������׳����ǰ����һ����վ��һ����
��������������ġ�

 ");
   set("exits", ([
   "west"       : __DIR__"r8.c",
      
  ]));      
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/alo":1,
]));
  set("light_up", 1);
  setup();
} 

