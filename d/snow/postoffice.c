// Room: /d/snow/postoffice.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ѩͤ��");
  set ("long", @LONG
�����Ǹ���ѩͤ��ٸ����������������ѩͤ�䣬������Ϊ����ѩ
ͤ��������Ұ��ɽ�������е����̾ݣ��ٸ����Ų���������߶��ߵķ�
�ջ��������ѩͤ���������˾����ˣ���վ�Ĺ�Ա���ԾͿ�ʼ��һЩ��
�յ��ż���һ�����ʱ�䣬һ����Ҳ�е��������ⱻ�ϼ��ó�����վ
���ſ�������һ��ľ��(sign)������д��Щ�֡�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"mstreet4",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "������д����
    ��������֪�������������������շ�����������Ա����������
��ͨ�죬��Ա�������ùܾ�ʿ���ٸ�������ѣ�һ�������������
�շ�ÿͨʮ�ģ�������ѣ���Ʒ�շ���������С���ƣ�����ϸ����
����ʧ�˷Ѽ�����⳥���������顣
",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/post_officer" : 1,
]));

  setup();
}

int valid_leave(object me, string dir)
{
	object mbox;

	if( mbox = me->query_temp("mbox_ob") ) {
		tell_object(me, "�㽫���佻����վ��\n");
		destruct(mbox);
	}
	return 1;
}
