// Կ��, �����ķ����뵽 /u/w/wade/room/key_room �ο�
inherit ITEM;

void create()
{
  set_name("�������", ({ "wade token", "token" }) );
  set("unit", "��");
  set("no_drop",1);
  set("long", @LONG
    ����һ���������, ��˵�ǲ��������Ů�����͵�, ����
������˽ӽ�������, һֱ��Կ�׷���һ��, �����Ѿ��߲���
��. ��������е�����, ���п����ǳ����ɵ�����ֵĺۼ�.
��������, ���ԭ����������һ����, �Լ�ȥ��Ļ�, Ҳ��ֻ
ֵ����ʮ��Ǯ��·�߻�. ˵��˵, ������������������һ��
�������������������������, ��������㱣������.
    �ڲ����������ǰ, �����������֣�صĽ�����, ������
һ�ε�����֮��. ��˵, �����������, �������ʦ�����ǳ�
�����ڿ���ռ������, ������ʲô���Ծ�, �������������
���ﲤ�����������. ����������........ֻ�����ʱ�����.
LONG);
}

void init ()
{
  add_action ("log", "log");
  add_action ("read_log", "readlog");
  add_action ("give", "give");
  add_action ("help", "help");
}

int log (string str)
{
  int	sec;

  if (!str) {
    write ("log SECOND\n�������������������Լ�������ѶϢ��¼ SECOND ����.\n");
    return 1;
  }
  else if (sscanf (str, "%d", sec) == 1) {
    if (sec <= 0) {
      write ("log SECOND\nSECOND ������������.\n");
      return 1;
    }
    this_player()->set_temp ("��¼", time()+sec);
    assure_file ("/log/harass/"+this_player()->query ("id"));
    rm ("/log/harass/"+this_player()->query ("id"));
    write (sec + "�������յ�ѶϢ�����¼�ɵ���.\n");
  }
  return 1;
}

int read_log(string str)
{
  string who;
  string fn, buf;

  if (!wizardp (this_player()))
    return 0;

  if (!str)
    who = this_player()->query ("id");
  else
    who = str;

  fn = "/log/harass/"+who;
  this_player()->more_file ("", fn, 0);
  return 1;
}

int give (string str)
{
  string what, who;
  object ob;

  if (!str) return 0;

  if (sscanf (str, "%s to %s", what, who) != 2)
    return 0;

  if (!id (what)) return 0;

  if (!ob = present (who, environment (this_player()))) {
    write ("û���������.\n");
    return 1;
  }

  if (!wizardp (this_player()))
    if (!wizardp (ob)) {
      write ("����˲�����ʦ.\n");
      return 1;
    }

  this_object()->move (ob);
  this_player()->command ("say ����, �ŷ�����������, �úñ��ܰ�.\n");
  return 1;
}

int help (string str)
{
  if (!str || str != "wade") return 0;

  write (@HELP
���ŷ������������¼����������, ��������۸���, ����԰���
��������һ�ж���¼����, Ȼ��ִ��ŷ�֪ͨ�߼���ʦ, ����(��)
˵�������ܵ�����. ��Ȼ, ���ŷ�������Ϊ�� wade ���ֵܵ�֤��.
��Ϊ���Ǳ˴�����. 
    ��������¼����������, ��� log N, ���е� N  ��Ҫ��¼
������. ���������ʦ, ���⻹�����ô��ŷ����鿴�κ��˵ļ�¼.
������ readlog WHO, WHO ����Ҫ������ҵļ�¼, ����Ҳ��.
HELP);
  return 1;
}

int query_autoload() { return 1; }
