
inherit ROOM;
void create()
{
  set ("short", "��վ");
  set ("long","
    ��һ����վ�����Ƿ��Ҿ�������Ҫ�ģ���Ϊ��������
���˱ؾ�֮·��������ڱ���Ȼ����ʡ�͵ĵƣ��ĸ�����
�������ߣ��Լ���һ���ɡ�

 ");
   set("exits", ([
   "southeast"   : __DIR__"r13.c",
   "southwest"   : __DIR__"r14.c",
   "northwest"   : __DIR__"r6.c",
   "northeast"   : __DIR__"r5.c",
  ]));      
  set("objects", ([ /* sizeof() == 2 */
    "/open/soldier/npc/sentry1":2,
]));
  set("light_up", 1);
  setup();
} 
