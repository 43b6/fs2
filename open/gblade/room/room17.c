// Room: /u/m/moner/tree/room17.c
inherit ROOM;

void create ()
{
  set ("short", "ɽ��");
  set ("long", @LONG

������Ź���ǰ��������΢���Ĺ��ߣ�����Կ������ܣ��㾪�ȵķ�
�֣������ɽ��ƽ������Ȼ�ǳ������֣��յ��Ƶ��������������Ӧ����
ɽ����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room18.c",
  "east" : __DIR__"room16.c",
]));
set("objects",([
"/daemon/class/blademan/npc/sublade1":1,
]));
set("no_transmit", 1);
  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="west"&&(present("sublade man",environment(me))||present("sublade1 man",environment(me))))
   return notify_fail(" ����˵�� :�������ɽ��ص� ,�㻹�ǿ��뿪��!!!\n");
return ::valid_leave(me,dir);
}
