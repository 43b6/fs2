// Room: /open/badman/room/r10

#include </open/open.h>

inherit ROOM;

int blade = 5;
int sword = 5;
string look_shelf();

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����Ƕ��˹ȵı����⣬�������ܵļ���(shelf)�Ϸ����˸�ʽ
�����ı���������㹻��һ����ɽ���㳲��������Ȼ�����ϵ�����
������ʲôϡ����������������ʵ�ã������������һ����������
�Կ����㿴��ǽ������һ�Ų���(note)��

LONG);

  set("item_desc", ([ /* sizeof() == 2 */
  "note" : "Ҫ������������ֵ����Ա����������������( report ���� )��
",
  "shelf" : (: look_shelf :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"b6",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/wguard" : 2,
]));

  setup();
}

void init()
{
	add_action("do_report", "report");
	add_action("do_take", "take");
}

int valid_leave(object who, string dir)
{
	if( dir=="up" && present("guard", this_object()) )
		return notify_fail("������������ǰ˵���������ֹ���롣\n");
	return ::valid_leave(who, dir);
}

string look_shelf()
{
	object who = this_player();

	if( !blade && !sword )
		return "�������Ѿ�û��������õ������ˡ�\n";
	tell_object(who,"�㿴���������У�");
	if( blade )
		tell_object(who,chinese_number(blade)+"�Ѹֵ�\n");
	if( sword )
		tell_object(who,"\t\t"+chinese_number(sword)+"�Ѷ̽�\n");
	return "";
}

int do_report(string weapon)
{
	object who, guard;
	who = this_player();
	guard = present("guard", this_object());

	if( !guard )
	return notify_fail("������û���㻹����ɶ����ֱ����(take)����\n");
	if( !weapon || (weapon!="�ֵ�" && weapon!="�̽�") )
		return notify_fail("��Ҫ������һ��������\n");
	if( who->query("family/family_name")!="���˹�" )
		return notify_fail("����˵�����㲻�Ƕ��˹ȵ��ˣ��������ҡ�\n");
	if( who->query_temp("get_weapon") ) {
		return notify_fail("�������˿���˵��С�ӣ��㲻���ù�����\n");
	}
	if( weapon=="�ֵ�" ) {
		if( !blade )
			return notify_fail("�������˿����Ӻ�˵�����Ѿ�û�иֵ��ˡ�\n");
		else {
			message_vision("��������һ�Ѹֵ�����$N��\n", who);
			new(BAD_OBJ"steel_blade")->move(who);
			blade--;
		}
	}
	if( weapon=="�̽�" ) {
		if( !sword )
			return notify_fail("�������˿����Ӻ�˵�����Ѿ�û�ж̽��ˡ�\n");
		else {
			message_vision("��������һ�Ѷ̽�����$N��\n", who);
			new(BAD_OBJ"short_sword")->move(who);
			sword--;
		}
	}
	who->set_temp("get_weapon", 1);
	return 1;
}

int do_take(string weapon)
{
	object who, guard;
	who = this_player();
	guard = present("guard", this_object());

	if( !weapon || (weapon!="�ֵ�" && weapon!="�̽�") )
		return notify_fail("��Ҫ��ʲô��\n");
	if( guard )
		return notify_fail("��������ŭ�ȵ�����Ҫ��ʲô��������ǽ�ϵĲ��氡��\n");
	if( weapon=="�ֵ�" ) {
		if( !blade )
			return notify_fail("�ֵ����û�������ֵĵ����ã�\n");
		else {
			message_vision("$N�Ӽ���������һ�Ѹֵ���\n", who);
			new(BAD_OBJ"steel_blade")->move(who);
			blade--;
		}
	}
	if( weapon=="�̽�" ) {
		if( !sword )
			return notify_fail("�̽����û�������ֵĵ����ã�\n");
		else {
			message_vision("$N�Ӽ���������һ�Ѷ̽���\n", who);
			new(BAD_OBJ"short_sword")->move(who);
			sword--;
		}
	}
	return 1;
}
