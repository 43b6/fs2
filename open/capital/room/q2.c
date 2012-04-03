// Room: /open/capital/room/g2
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "ʯ��");
	set( "build", 2 );
  set ("long", @LONG
������һ���յĵ���ʯ��, ����֪������������Ŀ�����ͨ, ��
��Ҳ�������ϰ�, ���ܰ���һЩʯ��(table)ʯ��(chair), ��Ȼ���Դ�
�����ɡ�

LONG);

  set("item_desc", ([ /* sizeof() == 2 */
  "table" : "һ����ͨ��ʯ��, û��ɶ����ĵط�, ���������ܺ���, �ƶ��Ʋ�����
",
  "chair" : "��������бб������, �������ǻ����ȹ̵ġ�
",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/duan2" : 1,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"q1",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "table" : "��Ȼ��ʯ���ص��޷��ƶ�, ���������������Ŭ����, ���ڷ�����ʯ���ƺ�����ת��(turn)��
",
]));

  setup();
}
void init()
{
	add_action("do_turn","turn");
	add_action("do_climb","climb");
}
int do_turn(string str)
{
	if( str != "table" )
	  return notify_fail("תʲô?\n");
        if( present("great thief",this_object()) || present("chao",this_object()) )
	  return notify_fail("���������˵�������ֶ��ŵ���ʲô?\n");
	set_temp("open_hole",1);
	tell_room(this_object(),"���þ�ȫ�������ת��ʯ��, ���Ÿ�������������, ʯ�Ҷ���¶��һ���󶴡�\n�����ƺ����Դ��������(climb)��ȥ˵��\n");
	set ("long", @LONG
������һ���յĵ���ʯ��, ����֪������������Ŀ�����ͨ, ��
��Ҳ�������ϰ�, ���ܰ���һЩʯ��(table)ʯ��(chair), ��Ȼ���Դ�
�����ɡ�
    ʯ����ͷ¶��һ���󶴡�	  

LONG);
	return 1;
}
int do_climb(string str)
{
	object me=this_player();
	if( !this_object()->query_temp("open_hole") )
	  return notify_fail("����û�ж���������ȥ��\n");
    message_vision("$Nʩչ�Ṧ����һ��, ���������ʯ�ҡ�\n",me);
	me->move(MAIN_ROOM"s18");
	return 1;
}
	
