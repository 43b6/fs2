inherit ROOM;

void create ()
{
  set ("short", "��ʯ��·");
  set ("long", @LONG

�Ӵ����������ͨ����������ʯ��·��·�������������ɣ������ȣ���һ
���������ɷ��ܣ������ܴ���·������һʯ��

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "stone" : "
ʯͷ��ӡ��һ����ӡ��Ҳ��֪����˭��Ȼ����˵����������ڼ�Ӳ��ʯͷ
�ϣ���������һ����ӡ����ӡ�Ա����м����֡�
          
	�����������޼� , Ů������������һ��

",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/s-guardian" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"g1-3.c",
  "north" : __DIR__"gblade.c",
]));

  setup();
}
void init()
{
	add_action("do_move","move");
	add_action("do_enter","enter");
}
int do_enter(string str)
{
	if(!str || str != "hole")
	return notify_fail("������ʲ?\n");
	if(!query("stone_moved"))
	return notify_fail("����� , �����ж��� ?\n");
	message_vision("$N��С�������˽�ȥ !\n",this_player() );
	this_player()->move("/open/gblade/room/c1-1");
	message_vision(" �� ��һ�� , $N�����˵���!\n",this_player());
return 1;
}
int do_move(string str)
{
	if(!str || str != "stone")
	return notify_fail("��Ҫ�ƶ�ʲô ?\n");
	if(this_player()->query("str")+this_player()->query("max_force")/10 < 150 )
	return notify_fail("�����������!\n");
	if(query("stone_moved") )
	return notify_fail("ʯͷ�Ѿ����ƿ��� !\n");
	message_vision("$N�ߵ�ʯͷ�� , �˹���ʯͷ�ƿ� !\n",this_player() );
	message_vision("ʯͷ���ƿ��� , ¶����һ��С�� !\n",this_player() );
	set("stone_moved",1);
	set("long", @LONG

�Ӵ����������ͨ����������ʯ��·��·�������������ɣ������ȣ���һ
���������ɷ��ܣ������ܴ��������и�С�� .

LONG);
set("item_desc", ([
"hole": "
һ����Ȼ�γɵ�С�� , Ҳ��������Ľ�ȥ !
",
]));
return 1;
}
