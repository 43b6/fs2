// Room: /u/m/moner/room/room23.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

����ƽʱ���������˵ĵط������ұߵ�һ�Ƿ���Сɽһ��ߵ��߲ˣ�
���������������Ųˣ����еĲ˵��������裬�����������������
�٣�����İ��̴�������ð����˿˿������������ı��У����̲�ס
�������صĿ�ˮ��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"room10.c",
]));
  set("light_up", 1);

  setup();
}
