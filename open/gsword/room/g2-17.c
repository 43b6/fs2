// Room: /open/gsword/room/gsword5-23.c
inherit ROOM;

void create ()
{
  set ("short", "�ʷ�");
  set ("long", @LONG
�������ɽ��ɵ��ʷ����ɽ����������½���ǧ�����ڣ�ÿ�յĿ�������һ
�ʾ޴�������ɽ��������������壬�����������ߣ���������฻��
�޼־�Ǯ�����������ɽ��ɲ����޽�Ǯ���⣬�������ȼ���˼ҡ�����
�и���̨������˸��������̣��ұ��Ǹ����ӣ�����������ʲ��������
���������ɽ������е�÷ӰŮ���ƹܡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/gsword/room/g2-15.c",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/swordsman/mayying" :1,
  "/open/gsword/npc/langirl" :1,
]));

  setup();
}
