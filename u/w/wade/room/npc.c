inherit ROOM;

void create ()
{
  set ("short", "����������д��");
  set("long", @LONG_DESC
// ����Ҫ����, һ��Ҫ�е�����һ��
inherit NPC;

void create()
{
	// ��������趨�˸������������ id
	set_name("ɽè", ({ "cat" }) );
	// ����� look ������ʱ, �Ϳ������µ�����
	set("long", "һֻ�׺ݼ�����ɽè.\n");
	// �����������˵, �ƺ��Ǵ� 14 ������, Ұ����� 0 ������
	set("age", 4);
	set("race", "Ұ��");
	setup();
}
//
// �����������...
LONG_DESC);

  setup();
}

void init()
{
  add_action("e", "e");
  add_action("e", "east");
  add_action("go", "go");
}

int e()
{
  this_player()->move(__DIR__"npc1");
  return 1;
}

int go(string str)
{
  if (str == "e" || str == "east")
    this_player()->move(__DIR__"npc1");
  return 1;
}
