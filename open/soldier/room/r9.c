
inherit ROOM;
void create()
{
  set ("short", "��վ");
  set ("long","
    ������һ�����촦��δ�������ȷ����û�취��ȥ��
����������վ��������ȥ�����кܶ��ˣ��ڱ��߿���ͨ
����ĵط�������Թ�ȥ��䡣

 ");
   set("exits", ([
   "east"       : __DIR__"r8.c",
   "northwest"  : __DIR__"r5.c",
   "west"       : __DIR__"r10.c",
  ]));      
  set("objects", ([ /* sizeof() == 2 */
    "/open/soldier/npc/sentry":2,
]));
  set("light_up", 1);
  setup();
} 
