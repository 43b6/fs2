// Room: /open/badman/room/wizroom
inherit ROOM;

void create ()
{
  set ("short", "���˹�Ļ�����ר��������");
  set ("long", @LONG
��һ���žͿ���ǽ�Ϲ���һ���޴�Ķ���������д�š��л���
˵�����������ǡ���ƨ��š�����ͷ����һ�����ĺ�����������
���������ſ������Ȼ����ǽ�Ǳ���һ��С��(word)....

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "word" : "����͸��....oda ����һ��x...�� :b
�����޳�... powell :P
��ҲҪ��������... Sincerely yous, Caesar ... :P
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "down" : __DIR__"g1",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);

  setup();
  call_other("/obj/board/badwiz_b", "???");
}
