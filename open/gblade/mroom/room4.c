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

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room1.c",
  "east" : __DIR__"room3.c",
]));
   set("objects", ([ /* sizeof() == 3 */
"/daemon/class/blademan/npc/trainee2":3,
]));
  set("no_magic", 1);

  setup();
}
