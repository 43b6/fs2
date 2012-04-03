// Room: /u/r/ranko/cave3.c
inherit ROOM;
    
void create ()
{
  set ("short", "ɽ��");
  set ("long", @LONG
һ�������ɽ��,������һ����Ȫ(spring)����ð��,��ž���
��ˮ�Ĺ�����Դ�ɡ�
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "spring" : "һ���峺���׵�Ȫˮ,����������������.����ֵ���Ȫˮ�ƺ����ܵ�����������
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"garden6.c",
  "enter" : __DIR__"snake_hole.c",
]));

  setup();
}
void init()
{
	add_action("do_search","search");
}

int do_search(string str)
{
	object me;
	me = this_player();
	if(!str || str !="spring")
	{return 0;}
	if ( me->query_temp("kill_serpent"))
		{
	message_vision("$N���˰��죬ֻ����һЩ�����µ���Ƥ��\n",me);
		return 1;
		}
	 else if(!query_temp("have_search"))
		{
		message_vision("$N��Ȫˮ��Χ��ϸ��Ѱ��\n",me);
		tell_room(this_object(),"����Ȼ����һ���޴�������ڴ���Ϣ,���������˴󲿷ݵ�Ȫˮ.\n");
		
		set("objects", ([ /* sizeof() == 1 */
		"/open/poison/npc/serpent.c" : 1,
		
		]));
		setup();
		return 1;
	}
}
 
