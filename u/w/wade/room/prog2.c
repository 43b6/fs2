inherit ROOM;

void create ()
{
  set ("short", "�����ĳ�ʽд������ -- ��");
  set("long", @LONG_DESC

// һЩ�����õ��ı���(����)�Ķ���������, ͨ������ #include ������������
// ������� #include <ansi.h>
// ֵ��ע�����, ���治���зֺ�, ����, ��ʦҲ�����Լ�����һЩ�̶��ĳ���
// ��: #define PI 3.1416
//
// ����/����/װ��/���� һ���Ǵ� void create() {.....} ���������ʼ��(ִ��)��
// ����, ͨ���⺯����д�ڵ������ͷ, �����Ǻ�ǰ��ĵط�
//
// ������ҿ��ƵĽ�ɫ��һ����������������ʱ, һ����ȥִ�� void init()...
// ��ͨ����������Ƕ���һЩ����������е���Ϊ, �� add_action() �趨
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
  this_player()->move("/u/w/wade/workroom");
  return 1;
}

int go(string str)
{
  if (str == "e" || str == "east")
    this_player()->move("/u/w/wade/workroom");
  return 1;
}
