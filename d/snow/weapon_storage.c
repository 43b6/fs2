// Room: /d/snow/weapon_storage.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ����������");
  set ("long", @LONG
����һ�������ʽ��������е�Ĵ����ң���ʽ�������������ࡢ��
�̡����η���һ�𣬲��Ҳ��õ�һ����Ⱦ�������ҵĳ���������ϱߣ�
��Գ��ڵ����ֱ���һ������(shelf)��
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "shelf" : "��������Ͽյ����ģ�ʲôҲû�Щ������ҳ�Ҳû�С�
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"school2",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/bamboo_sword" : 1,
]));

  setup();
}

void init()
{
	add_action("do_push", "push");
}

void check_trigger()
{
	object room;

	if( (int)query("left_trigger")==3
	&&	(int)query("right_trigger")==5
	&&	!query("exits/down") ) {
		message("vision", "�ذ��Ȼ����������������һ����滺���ƶ��ţ�¶��һ�����µĽ��ݡ�\n",
			this_object() );
		set("exits/down", __DIR__"secrect_storage");
		if( room = find_object(__DIR__"secrect_storage") ) {
			room->set("exits/up", __FILE__);
			message("vision", "�컨���Ȼ����������������¶��һ�����ϵĽ��ݡ�\n",
				room );
		}
		delete("left_trigger");
		delete("right_trigger");
		call_out("close_passage", 10);
	}
}

void close_passage()
{
	object room;

	if( !query("exits/down") ) return;
	message("vision", "�ذ��Ȼ����������������һ����滺���ƶ��ţ������µ�ͨ����\ס�ˡ�\n",
		this_object() );
	if( room = find_object(__DIR__"secrect_storage") ) {
		room->delete("exits/up");
		message("vision", "�컨���Ȼ�������������������ϵĽ����ֻ��������˻�ȥ��\n",
			room );
	}
	delete("exits/down");
}


int do_push(string arg)
{
	string dir;

	if( !arg || arg=="" ) return 0;

	if( arg=="shelf" ) {
		write("�������ƶ�������ӣ��ƺ��������һ���....\n");
		return 1;
	}
	if( sscanf(arg, "shelf %s", dir)==1 ) {
		if( dir=="right" ) {
			message_vision("$N������������...����Ȼ������һ���������ƻ�ԭλ��\n", this_player());
			add("right_trigger", 1);
			check_trigger();
			return 1;
		} else if( dir=="left" ) {
			message_vision("$N������������...����Ȼ������һ���������ƻ�ԭλ��\n", this_player());
			add("left_trigger", 1);
			check_trigger();
			return 1;
		} else {
			write("��Ҫ�����������Ǹ�����\n");
			return 1;
		}
	}
}


void reset()
{
	::reset();
	delete("left_trigger");
	delete("right_trigger");
}
