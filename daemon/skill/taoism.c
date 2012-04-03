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
    return notify_fail ("你的杀气太重，无法领悟天师正道。\n");
  return 1;
}

int practice_skill (object who)
{
	int cost = 10;
  if ((int)who->query ("sen") <= cost)
    return notify_fail ("你的神不够，不能练天师正道。\n");
  who->receive_damage("sen", cost);
  write ("你入定无为，天师正道无意中领悟了不少。\n");
  return 1;
}

string perform_action_file(string action)
{
  return CLASS_D("taoist") + "/taoism/" + action;
}
