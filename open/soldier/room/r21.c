
inherit ROOM;
void create()
{
  set ("short", "�ߵ�");
  set ("long","
    ������һЩ���������˺��������Ѳ�����±�������
ռ�����ӱ����ƺ�����ͨ����ĵط������������������
����ζ���������е����˷�θ�����Ϸ���������ֵ�����

 ");
   set("exits", ([
   "south"   : __DIR__"r26.c",
   "north"   : __DIR__"r19.c",
   
  ]));      
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/ma1":1,
]));
  set("light_up", 1);
  setup();
} 
