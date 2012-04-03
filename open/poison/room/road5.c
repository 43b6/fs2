// Room: /open/poison/room/road5
inherit ROOM;

void create ()
{
  set ("short", "�ٲ�");
  set ("long", @LONG
��ǰ��һ���ٲ�(waterfall) �ɷ嶥ֱй���£�������
͢��ǧ�������������䣬�������γ�һ���߲ʺ��ţ���ˮ��
����ʯ����������ˮ��������ˮ��������������ã������
�������˼��ɾ��㡣
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "waterfall" : "�˵��ٲ�ʮ������׳�ۣ�������ǰ�γ�һ��������Ļ����
����ʯ��û��������̦���������ƺ��ǳ��������ߵĽ����
��֪�ٲ����Ƿ���ж��졣
",
]));

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/poison/room/road4",
]));

  setup();
}
void init()
{
	add_action("do_enter","enter");
}

int do_enter(string str)
{
	object me;
	me = this_player();
	
	if(!str || str != "waterfall")
		return notify_fail("����������\n");
	else {
		tell_object(me,"����һת, �����ɵؽ����ٲ����ɽ����\n");
		me->move("/open/poison/room/room5");
	     }
	return 1;
}
