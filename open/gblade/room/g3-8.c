inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

��˳�Ż����ߵ������ֻ���ƻ����أ��������¡�С��ͨ��Ү֮Ϫ����
������̨֮·��ʯ�������εΣ�����Ʈ�㣻��ͷ��Ҷ���棬�����续����
��ǰ��ȥ��һ����ľ���ޣ�ֻ�������ݣ�--��ǣ�٣���������������
ƮƮ����������������ʵ����ɰ��������--ζ����𥣬�Ƿ�����
�ȡ���ǰһ˫��ɫ�������������ȣ�һ��һ�£�ӭ����ǧ��һ�����Ů��
����������ݵ������ˡ�


LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gblade/npc/girl" : 1,
  "/open/gblade/npc/butterfly.c" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"g3-2",
  "west" : __DIR__"g3-4",
  "south" : __DIR__"g3-6",
  "east" : __DIR__"g2-4",
]));

  setup();
}
void init()
{
	add_action("do_cover","cover");
}
int do_cover(string str)
{
	object ob;
	if(!present("net",this_player()))
	return 0;
	if(str!="butterfly")
	return notify_fail("��Ҫץʲ ??\n");
	if(!ob=present("butterfly",environment(this_player())))
	return notify_fail("û��ֻ�� !\n");
	message_vision("$N�����в����� , �����������ȥ \n",this_player());
	if(random(10)>6)
	{
	message_vision("���৵�һ�� , $N��ʱ�������� \n",ob);
	new("/open/gblade/npc/butterfly")->move(this_player());
	destruct(ob);
	message_vision("$N�Ӳ������н���������ó� \n",this_player());
	return 1;
	}
	message_vision("���$N��ʱ���� , ���˿�ȥ \n",ob);
return 1;
}
