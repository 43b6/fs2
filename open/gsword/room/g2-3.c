// Room: /open/gsword/room/gsword3-8.c
inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
���������������� ,�������� ,��ʮλ�½��Ľ�ͯ��ר�ĵ�����ʫ�� ,
����������������龰��� ,�ƺ�������һ������ .�����и�С��̨ ,һ�Ź�
�ӵ������������� ,Ӧ�þ�����ʦ�ڿ����� ,�ϱ�һ����̨ ,�����ͱ�֮��
�������ڿ���֮Ͼ ,����ϲ���������� ,����Զ�������г� .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/gsword/room/g2-4.c",
]));

  set("objects", ([ /* sizeof() == 2 */
   "/daemon/class/swordsman/sauhu":1,
   "/open/gsword/npc/student":2,
]));

  set("light_up", 1);

  setup();
}
