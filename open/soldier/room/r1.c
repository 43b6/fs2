
inherit ROOM;
void create()
{
  set ("short", "�ֿ�");
  set ("long","
    �����Ƿ��Ҿ�����������Ҫ�ĵط������Ƿ��Ҿ�����
�ڻ���ʳ�ĵط����㿴���Աߵ��׶��﷢����һЩ�׳���
������ѽ���ģ����滹����һ��׳����

 ");
   set("exits", ([
   "south"   : __DIR__"r2.c",     
  ]));      
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/rice":1,
]));
  set("light_up", 1);
  setup();
} 
