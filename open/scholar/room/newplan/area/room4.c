// Room: /u/s/sueplan/newplan/area/room4
inherit ROOM;

void create ()
{
  set ("short", "[1;37m����[1;33m��[0m");
  set ("long", @LONG
������λ��һ������Ӵ������󸴳�һ��ʩ�е�����ʹ����
����ҵ���Լ�Ҳ�����ٺ��ȥ����̫�׽��Ǻ��������������Ӣ���书
���������������ס�����ǣ��ƹܡ��Ƹ����͡����¡�����Ϊ��������
���书�Ⱥã��ֻ���ı������ĲƸ���

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/scholar_show.c" : 1,
]));
  set("light_up", 1);
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room5.c",
  "south" : __DIR__"room3.c",
]));

  setup();
}
int valid_leave(object me, string dir)
{
  if(dir=="enter"&&present("scholar",environment(me)))
  {
  return notify_fail("�㷢�����˵�������, �������!!!\n");
  }
  return 1;
}
