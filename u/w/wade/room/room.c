inherit ROOM;

void create ()
{
  set ("short", "�շ���");
  set("long", @LONG_DESC

// ����һ�仧��Ŀշ����д��, ��ʽ�ӵ��µ� inherit ��ʼ
// ������һ���Ǽ̳л��������д��, ͨ�������Դ� /include/*.h �鵽����
inherit ROOM;

void create ()
{
  set ("short", "�շ���");
  set ("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG);

  // ���������, ��ѵ��������õ�
  set("outdoors", "/u/w");
  setup();
}
// һֱ����һ�н���
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
  this_player()->move("/u/w/wade/workroom");
  return 1;
}

int go(string str)
{
  if (str == "e" || str == "east")
    this_player()->move("/u/w/wade/workroom");
  return 1;
}
