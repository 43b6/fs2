// Room: /u/l/lotus/girl/r7.c

inherit ROOM;

void create()
{
  set ("short", "���跿");
  set ("long", @LONG
���������ƽʱ��ϰ�赸�ĵط�, �����϶����˹����������õ�
�ʴ�, ����, ���ӵ�С����, ���м�������. �治�ɹ����Ƕ��ϻ���
����ȥ��, ���跿�յ�����û������.
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"w4",
]));
  set("file_name", __DIR__"r7.c");
  setup();
}
