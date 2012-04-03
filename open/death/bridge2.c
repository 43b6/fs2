// Room: /open/death/bridge2.c

inherit ROOM;

void create ()
{
  set ("short", "�κ�����");
  set ("long", @LONG
�������κ��ţ��κ������������Σ���֪��ˣ��αص����������Ʊ�
�����ж񱨣�����ǰͷȥ�ͽ��˵ظ��ˣ���ͻȻ����һ����ɱ¾������һ
���亹ֱ�����ѵ���ı�Ӧ��ͷ���𣡣����Ź��Źصıƽ�������Խ��Խ
�־壬û�뵽߳߸�����������Ҳ���б�Ӧ��һ�죬��˵һ���κ��žͻ�
��ȥ�ˣ������·�������𣡣������¿�ȥ���ںڵ�ˮ���д���Щ�����
ζ������û���˸�����ȥ�ɣ���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"bridge1",
  "north" : __DIR__"bridge3",
]));
  set("no_auc",1);
  set("item_desc", ([ /* sizeof() == 1 */
  "water" : "�úڵ�ˮร���Ϊʲô����ζ�����ۣ���ԭ����Ѫˮ����
",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ghost1" : 1,
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);

  setup();
}

int valid_leave(mixed me, string dir)
{
	if(me->query_temp("ask") > 5)
		return notify_fail("�㻹û���꣬�������߿�����\n");
	me->delete_temp("ask");
	return 1;
}

