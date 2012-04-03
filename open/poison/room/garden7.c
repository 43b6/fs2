// Room: /u/r/ranko/garden7.c
inherit ROOM;

void create ()
{
  set ("short", "ɽ��");
  set ("long", @LONG
�ߵ��˴�,���Ȼ����һ��Сɽ����ͱ���������.���Ͽ�ȥ,��
�ϴ�ݲ���,��ͺͺ��һƬ���Ʊ���ô�����ƵĹ⻬.����߶�,û��
�����Ṧ�����ʵ�.ɽ�ϲ�ʱ��������ϼ��,����ϡ���䱦��������,
ɽ�����������Ÿ�ʽ�����Ķ���,����.��������һ���ݴ�(bushes)��
���ر�ï��,����������ĺ�������һ̽������
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "bushes" : "�����ݴ���ȥ,���������ƺ���������ô�������㲻���Ĵ���Ѱһ��,�����кη��֡�
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"garden2-2.c",
  "east" : __DIR__"garden4-1.c",
]));
  set("light_up", 1);
  set("be_get",0);

  setup();
}
void init()
{
	add_action("do_search","search");
}
int do_search(string str)
{
	object me=this_player();
	if(!str || str!="bushes")
	{return 0;}
	if(me->query_temp("get_fruit") && query("be_get"))
	{ message_vision("$N���˰���,��һ������\n",me);
	  return 1;
	}
	message_vision("$N���ֲ����ݴԣ���һ����Ѱ�����˵ķ���һ�Ź��ӡ�\n",me);
	new("/open/poison/obj/fruit.c")->move(me);
	me->set_temp("get_fruit",1);
	set("be_get",1);
	return 1;
}
void reset()
{
set("be_get",0);
:: reset();
}
