inherit ROOM;
void create()
{
  set ("short","�ǹ�");
  set ("long", @LONG
�������ǹȹȱ�ͻ����һ��Сƽ̨�����¿�ȥ������ģ���ؿ�����
��������������ׯ��Ӱ�ӡ��������к����һ���£�ˤ��ȥ����û��
ɶ���³����������������˵��书һ���ǳ��������ȱ���һ�����Ϸ���
������������
LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 1 */
  "up" :__DIR__"wolf06.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/young.c" : 1,
]));

  setup();
}
