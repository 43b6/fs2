// Room: /u/m/moner/room/room1.c
inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG

������ν�İ��յ���ǧ�ս��������������ף����ϵ�Ϊ����֮�ף���ϰ�������ڣ�
�м��ڴˣ�ħ�����ر��˲������䳡����Ϊ�����໥�дꡢ���н�ȡ�ĵط�������
�����ű����ܣ��������в��ٵ����ڲ����ˡ�
      ����Ʈ�Ŷ��Ĳ��ƣ�˿˿�Ĵ��紵������....��

LONG);

  set("exits", ([ /* sizeof() == 4 */

  "south" : __DIR__"room4.c",
"west":"/open/gblade/room/secret.c",
  "north" : __DIR__"room7.c",
  "east" : __DIR__"room2.c",
]));
  set("light_up", 1);

  setup();
}
