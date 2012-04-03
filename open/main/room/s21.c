// Room: /open/main/room/s21.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
	���������־�ר�õĲ������������˾����صأ�
	������ʮ�ֵ�ɭ�ϣ���Χ��դ��Χ�����������
	ǰ�п��ʾ��(marker)��

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "marker" : "			�����ص�

		      ��Ǣ��Ҫ��
		��    ��    ��    ն��

			��Ʒ��ǰ�������־�����  ����

",
]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/center/npc/brownhorse" : 1,
  "/open/center/npc/blackhorse" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s17",
  "west" : __DIR__"s20",
  "east" : __DIR__"s22",
]));

  setup();
}
