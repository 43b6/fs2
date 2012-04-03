// Room: /open/poison/room/room5
inherit ROOM;

void create ()
{
  set ("short", "��Ѩ");
  set ("long", @LONG
�ۣ�û�뵽�ٲ�����ı��ж��죬�������������һ��
���ã��м�������ֵ�ʯ����(statue)��ǰ������һ������
¯(cencer)������ʯ�����������ģ���֪�Ǻ����ڴ˼��ݡ�
LONG);

  set("item_desc", ([ /* sizeof() == 2 */
  "cencer" : "����һ�����ص�ͭ¯����������ת��(turn)���ĺۼ���
",
  "statue" : "����ʮ�־��ȣ��⾹Ȼ����ħ�����Ī�Ǹ�����ʢ����ڤ
���������������
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"road5",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/ranger.c" : 1,
]));

  setup();
}
void init()
{
	add_action("do_turn", "turn");
}

int do_turn(string str)
{
	object me;
	me = this_player();
	if(!str || str != "cencer")
		return notify_fail("����ת��ʲô��\n");
	else if(!query_temp("have_turn"))
		{
		  message_vision("$N���˾�ţ����֮����������ת�����ص�ͭ¯��\n",me);
		  tell_room(this_object(),"�㷢�����ߵ�ʯ�ڻ�������, ����һ���ܵ���\n");
		  set("exits/west",__DIR__"path3");
		  set_temp("have_turn",1);
		  remove_call_out("do_closed");
		  call_out("do_closed",20);
		  return 1;
		}
	else {
	       remove_call_out("do_closed");
		delete_temp("have_turn");
		delete("exits/west");
		message_vision("$N�˾���˫�ƣ�����ת�����أ���ʱһ�����죬ʯ��Ѹ�ٺ��ϡ�\n",me);
	     }
	return 1;
}

void do_closed()
{
	delete_temp("have_turn");
	delete("exits/west");
	tell_room(this_object(),"ʯ赻������Զ�����������\n");
}
