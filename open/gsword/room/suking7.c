// Room: /u/s/smore/room/suking/suking7.c

inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
�ߵ�����㷢��������ĸߴ�׳˶�����������Ĺ�������
���Ž���ϯ����Ȼ���������书��ǿ������������ս����������
�ĵ�����Ŀ̫�࣬�������ей�������ɱ�֣����Խ�����������
�Ӿ����о�����ѡ����������������࣬�ػ��Ž�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/suking2",
  "west" : "/open/gsword/room/suking6",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/r_guard" : 1,
]));
  set("light_up", 1);

  setup();
}
