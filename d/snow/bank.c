// bank.c

inherit BANK;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ����Ǯׯ");
  set ("long", @LONG
����һ�������Թ�ƽ�������Ƶ�Ǯׯ��Ǯׯ���ϰ廹�Ǹ������й�
���˵Ķ����ˣ�����Կ���Ǯׯ�������ⶼ��ɨ�øɸɾ�����һ������
�����������ڹ�̨���棬��̨�Ϸ���һ������(sign)��������ͨ��ѩͤ
���ֵĴ��š�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"mstreet1",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "������Ǯׯ��Ŀǰ�����ṩ�ķ����У�

convert     �һ�Ǯ�ҡ�

",
]));
  set("no_fight", 1);
  set("no_magic", 1);

  setup();
}
