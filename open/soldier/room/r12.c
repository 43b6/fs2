

inherit ROOM;
void create()
{
  set ("short", "�񶷳�");
  set ("long","
    ��߼�����һЩ������ӣ����ﳡ��֮�󣬿ɼ����
��֯�ǳ��Ӵ�����ϸ�������������˸����Ӻ����꣬
�������˶�������������������ӡ�

 ");
   set("exits", ([
   "north"       : __DIR__"r8.c",
   "south"      : __DIR__"r16.c",
   
  ]));      
  set("objects", ([ /* sizeof() == 2 */
    "/open/soldier/npc/mercenary":2,
]));
  set("light_up", 1);
  setup();
} 

