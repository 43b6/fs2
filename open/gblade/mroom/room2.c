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
  "southeast" : __DIR__"room10.c",
  "west" : __DIR__"room1.c",
]));
   set("objects", ([ /* sizeof() == 2 */
"/daemon/class/blademan/npc/trainee1":3,
]));
  set("light_up", 1);

  setup();
}
