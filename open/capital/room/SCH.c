// Room: /open/capital/room/SCH.c

inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
������������ƽ���ۼ��ĵط������Ƕ�������������´��£�����
���ԡ�ǽ���Ϲ���һ��ʫ��(poet)������ǰ��������һλ��������ԭ��
�������������������������--�����飬�����������Ĵ���ӿ�������
��һ�С�

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "poet" : "	����������������������������
	��		          ��
	��  [1m̸ �� �� �� �� �� ��[0m  ��
	��  [1m�� �� �� �� һ ɫ ��[0m  ��
	��  [1m�� �� �� �� ǧ �� ��[0m  ��
	��  [1m�� �� �� �� �� �� ��[0m  ��
	��		          ��
	��		[1;36m�������[0m  ��
	��		  [1;36m�����[0m��
	����������������������������
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"SCH1",
  "east" : __DIR__"h01",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/scholar/master" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="south" )
	{
	if( me->query("class") != "scholar" )
	  return notify_fail("���������ý���!\n");
	if( !me->query_temp("�����鷿") )
	  return notify_fail("δ��������ͬ��(agree), ���ý���!\n");
	}
	return ::valid_leave(me, dir);
}
