

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
   "east"       : __DIR__"r15.c",
   "north"      : __DIR__"r12.c",
   
  ]));      
  set("objects", ([ /* sizeof() == 2 */
    "/open/soldier/npc/son":1,
]));
  set("light_up", 1);
  setup();
} 

