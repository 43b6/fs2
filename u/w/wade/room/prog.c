inherit ROOM;

void create ()
{
  set ("short", "�������������ĳ�ʽд������");
  set ("long", @LONG

// ���Ƚ�ע��, ˫б��(//)֮��Ķ���һ�ŶԳ�ʽû����,
//     ֻ�Ǹ���ʦ������ʽ�õ�, ��Ϊע��, ������һ��һ��
// ���, ������̳�, Ҳ�����ڱ�ĵط��Ѿ��ж����ĳ����ʽ��
//     �����Ļ��Ϳ���ֱ���� inherit <�ó�ʽ> ���̳�
//     �����Ҫǿ������, inherit �� #include �ǲ�һ����
//     �������ﲻһ��, ��͵�������д��ʽд���˾�֪����, ����������
inherit ROOM;

// ������, ÿ����ʽ��������"����"��ɵ�, ÿһ���������������е�һ��:
//   1.  ���к���, ��: setup();	// ����һ������һ��С����
//   2.  �趨����, ��: who = this_player();
//   3.  һ�γ�ʽ, ��: for, if/then/else, ��, �󲿷����ɴ�����������
//   4.  ���庯��, ��: int say(string arg)
//                     {
//                         ............;
//                     }
// �����������...
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "back" : "/u/w/wade/workroom",
]));

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
  this_player()->move(__DIR__"prog1");
  return 1;
}

int go(string str)
{
  if (str == "e" || str == "east") {
    if (this_player()->move(__DIR__"prog1")) return 1;
  }
  return 0;
}
