// Room: /open/gsword/room/g6-7.c
inherit ROOM;

void create ()
{
  set ("short", "ɽ��");
  set ("long", @LONG
һ���տ��Ĵ�ɽ�����򶴿ڼ�С��ֻ��������������������Ե�ʮ��
�谵������һƬ��ڣ�Ӧ�þ���˼��֮���ڰɣ�����Լ����һ��������һ
�Ŵ�ʯ�ϣ�������ǽ�ڣ��������񣬶������ú��޷�Ӧ����֪������ʲ
�������Ա����ڴˣ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/g6-6",
]));

   set("objects",([
   "/open/gsword/npc/trainee-3.c":1,

  ]));

  set("light_up", 1);

  setup();
}
