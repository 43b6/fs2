inherit ROOM;

void create ()
{
  set ("short", "����������д��");
  set("long", @LONG_DESC
��һֻ����Ҫ�ķ����� npc, ���� more ָ��, ����λ������:
	/u/w/wade/npc/test.c
Ҳ����˵�� more /u/w/wade/npc/test.c ָ��鿴�õ�����.
��ͷ˵��һ�������, ������п�û�ж�, ��ȥ��ʦ�ķ���:
	��ʦ��ʽ����ĵ�������
ȥ�� post, ���� post ��һ��, Ҫ�����������ĵ�, 
Ҳ�� post ��������˷���
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
  this_player()->move(this_player()->query("startroom"));
  return 1;
}

int go(string str)
{
  if (str == "e" || str == "east")
    this_player()->move(this_player()->query("startroom"));
  return 1;
}
