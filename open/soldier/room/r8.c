
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
   "east"       : __DIR__"r7.c",
   "south"      : __DIR__"r12.c",
   "west"       : __DIR__"r9.c",
  ]));      
  set("objects", ([ /* sizeof() == 2 */
    "/open/soldier/npc/mercenary":2,
]));
  set("light_up", 1);
  setup();
} 
