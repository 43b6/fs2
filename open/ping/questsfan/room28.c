// Room: /u/d/dhk/questsfan/room28
inherit ROOM;

void create ()
{
  set ("short", "�羧��ǰ��");
  set ("long", @LONG
��������������Ŀ�����������ľ��š���ȫ��Լ��
��֮Զ������ɹ�һ��ͨ�ж��ѡ�����ȫ������֮��ķ�
�֣����迿�����ƽ��м�ǧ��׹������ͨ�С�����ǰ��
����һʯ�������ϼ�������������ļ׹����֣�����Ѷ�
�������йش��ŵ�������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "godown" : __DIR__"room7",
  "run" : __DIR__"room29",
]));
  set("outdoors", "/u/d");

  setup();
}
