inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�������� ,ͻȻ����һֻ�ر��ĺ��� ,����һ�� ,ԭ���Ǹ���
���ź�Ƥ ,�Ա߻���һȺС����������ˮ�� ,���� ,�����˻���
����Ϊ��ĺá�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"room33",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/u/h/houng/mob/monkey1.c" : 1,
  "/open/poison/npc/ren.c" : 1,
]));

  setup();
}
