// taoism.c by dell

inherit SKILL;

string type ()
{
  return "knowledge";
}

int valid_enable (string usage)
{
  return usage == "cure";
}

int valid_learn (object who)
{
if ((int)who->query ("bellicosity") > 100)
    return notify_fail ("���ɱ��̫�أ��޷�������ʦ������\n");
  return 1;
}

int practice_skill (object who)
{
	int cost = 10;
  if ((int)who->query ("sen") <= cost)
    return notify_fail ("����񲻹�����������ʦ������\n");
  who->receive_damage("sen", cost);
  write ("���붨��Ϊ����ʦ���������������˲��١�\n");
  return 1;
}

string perform_action_file(string action)
{
  return CLASS_D("taoist") + "/taoism/" + action;
}
